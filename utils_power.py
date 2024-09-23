import subprocess
import os
import threading
import psutil
import time
import pandas as pd
from utils_energy import *
from utils_corefreq import *

rapl_energy_max = 2**32 - 1
stop_event = threading.Event()

def counter_thread(count,sudo_password,machine,is_multicore=False):
    print("energy overflow thread running")
    pid = os.getpid()
    p = psutil.Process(pid)
    if is_multicore:
        p.cpu_affinity([4])
    else:
        p.cpu_affinity([0])
    energy_msr = 1553
    command_to_read_energy = f"sudo -S rdmsr -u {energy_msr}"
    if machine == "zen3" :
        command_to_read_energy = f"sudo -S rdmsr -u 0xc001029B"
    energy_start = rapl_energy_max
    while not stop_event.is_set():
        try :
            output = subprocess.run(command_to_read_energy, shell=True, check=True,input=sudo_password.encode('utf-8'),capture_output=True)
            energy = int(output.stdout.decode('utf-8').strip())
        except Exception as e:
            print(f"Error in reading the energy: {e}")
            exit(1)
        energy_diff = energy - energy_start
        if energy_diff < 0:
            count[0] += 1
            print(f"Energy overflows")
        energy_start = energy
        time.sleep(10)


def get_max_power_cap_W(machine):
    data = {
        'broadwell' : 140,
        'raptorlake' : 154,
        'rocketlake' : 65,
    }
    return data[machine]

# helper function to set power cap
def set_power_cap(power_cap,sudo_password):
    """
    Set the power cap of the system
    """
    if power_cap < 500:
        print("Power cap is too low, give powercap in uW")
        exit()
    try:
        print(f"Setting power cap to {int(power_cap)} uW")
        command=f"sudo -S powercap-set -p intel-rapl -e 1 -z 0 -c 1 -l {int(power_cap)}" 
        print(f"command : {command}")
        subprocess.run(command, shell=True, check=True,input=sudo_password.encode('utf-8'))

    except Exception as e:
        print(f"Error in setting the power cap: {e}")
        exit(1)

#helper function to get list of powercaps to apply from a csv file
def get_power_caps_list(file_path):
    """
    Get the list of power caps from the csv file
    """
    try:
        power_caps = pd.read_csv(file_path)
        return power_caps
    except Exception as e:
        print(f"Error in reading the power caps file: {e}")
        exit(1)
        
def run_with_energy_thread(command : str, password : str, machine : str, is_multicore : bool = False) -> dict:
    file_ran = False
    energy_overflows = [-1]
    if stop_event.is_set():
        stop_event.clear()
    time.sleep(10)
    counter_overflows = threading.Thread(target=counter_thread, args=(energy_overflows,password,machine,is_multicore))
    counter_overflows.start()
    try :
        output = subprocess.run(command, shell=True, check=True,
                                capture_output=True,timeout=28800,input=password.encode('utf-8'))
        file_ran = True
        stop_event.set()
        counter_overflows.join()
    except Exception as e :
        print(e)
        print(f"error in running the command {command}")
        stop_event.set()
        counter_overflows.join()
        return {
        "Time Reading" : 0,
        "Energy Reading" : 0,
        "File Run" : False
        }

    print(f"Ran {command}")
    print(output.stdout.decode('utf-8'))
    output_list = output.stdout.decode('utf-8').split("\n")
    output_list = [x for x in output_list if x != '']
    time_reading = float(output_list[-3])
    energy_reading_start = int(output_list[-2])
    energy_reading_end  = int(output_list[-1])
    energy_reading = 0
    if energy_overflows[0] > 0:
            print(f"Energy overflows: {energy_overflows[0]}")
            energy_reading = (energy_reading_end - energy_reading_start) + (energy_overflows[0] * rapl_energy_max)
    else:
            energy_reading = (energy_reading_end - energy_reading_start)
    
    return {
        "Time Reading" : time_reading,
        "Energy Reading" : energy_reading  * get_energy_multiplication_factor(machine=machine) ,
        "File Run" : file_ran
    }
