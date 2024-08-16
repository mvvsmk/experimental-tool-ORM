#! /usr/bin/env python3
import os
import subprocess
import sys
import shutil
import pandas as pd
from polybench_kernels import build_all_energy_kernels, build_all_time_kernels, get_energy_multiplication_factor
import time
import argparse
from utils_exp_params import check_exp_setup_powerCap
import numpy as np
from utils_dir import setup_dir_structure_with_powerCap,setup_oracle_dir_structure
import datetime
from utils_likwid import Likwid
import threading
import psutil
from utils_power import get_power_caps_list, set_power_cap, rapl_energy_max, stop_event, counter_thread


def get_energy_and_time_kernels(file_to_run,num_iterations,password,zzz,machine):
    # path_to_script = os.path.abspath("./bash/run_bench.sh")
    command = f"echo {password} | sudo -S taskset -c 0 {file_to_run}"
    for i in range(num_iterations):
        energy_overflows = [-1]
        if stop_event.is_set():
            stop_event.clear()
        time.sleep(zzz)
        counter_overflows = threading.Thread(target=counter_thread, args=(energy_overflows,password))
        counter_overflows.start()
        output = subprocess.run(command, shell=True, check=True,
                                capture_output=True)
        stop_event.set()
        counter_overflows.join()
        print(f"Ran {file_to_run}")
        print(output.stdout.decode('utf-8'))
        output_list = output.stdout.decode('utf-8').split("\n")
        time_reading = float(output_list[0])
        energy_reading_start = int(output_list[1])
        energy_reading_end  = int(output_list[2])
        if energy_overflows[0] > 0:
            print(f"Energy overflows: {energy_overflows[0]}")
            energy_reading = (energy_reading_end - energy_reading_start) + (energy_overflows[0] * rapl_energy_max)
        else:
            energy_reading = (energy_reading_end - energy_reading_start)
            
        energy_reading = energy_reading * get_energy_multiplication_factor(machine)
        print(f"Energy: {energy_reading}")
        print(f"Time: {time_reading}")
        
        return energy_reading, time_reading
        

def powerCap_pridicted(build_folder, src_dir, dataset ,num_iterations, password, machine, power_caps_file, output_file, zzz):
    data = {
        "Name": [],
        "power_cap(W)" : [],
        "Energy(J)" : [],
        "Time(s)" : []
    }
    
    # Get the power caps list
    power_caps = get_power_caps_list(power_caps_file)
    print(f"Power caps: {power_caps}")
        
    # energy_src = os.path.join(src_dir, "./PolyBenchC-4.2.1_energy")
    mem_fencing_src = os.path.join(src_dir, "./PolyBenchC-4.2.1_mem_fencing")
    # energy_build_folder = os.path.join(build_folder, "energy")
    mem_fencing_build = os.path.join(build_folder, "mem_fencing")

    # energy_build_folder = build_all_energy_kernels(build_dir=energy_build_folder,src_dir=energy_src, dataset=dataset)
    mem_fencing_build = build_all_time_kernels(build_dir=mem_fencing_build,src_dir=mem_fencing_src, dataset=dataset)
    count = 0
    # iterate over the power caps dataframe row wise contents Benchmarks,Predicted Power
    for index, row in power_caps.iterrows():
        power_cap = row[machine]
        if power_cap == 'NC':
            continue
        Benchmarks = row['Benchmarks']
        power_cap = float(power_cap)
        power_cap_uw = int(power_cap * 1000_000)
        print(f"Running {Benchmarks} with power cap {power_cap}W")
        # Set the power cap
        set_power_cap(power_cap_uw,password)
        print(f"Set power cap to {power_cap_uw} uW")
        time.sleep(zzz)
        name = Benchmarks
        power_cap_w = power_cap
        energy_reading = 0
        time_reading = 0
        for i in range(num_iterations) :
            try :
                energy_reading , time_reading = get_energy_and_time_kernels(file_to_run=os.path.join(mem_fencing_build,Benchmarks)
                                        ,num_iterations=1,password=password,zzz=1,machine=machine)
                Likwid.clear_cache()
                Likwid.clear_cache()
                time.sleep(20)
            except Exception as e:
                if stop_event.is_set():
                    stop_event.clear()
                print(f"Error in running the energy and time kernels: {e}")
            data['Name'].append(name)
            data['power_cap(W)'].append(power_cap)
            data['Energy(J)'].append(energy_reading)
            data['Time(s)'].append(time_reading)
            print(f"Ran {name} with power cap {power_cap}W")
            df = pd.DataFrame(data)
            df.to_csv(output_file,index=False)

    
    print(f"Saved the results to {output_file}")

def powerCap_generate_oracle(build_folder, src_dir, dataset ,num_iterations, password, machine, output_file, zzz):
    data = {
        "Name": [],
        "Energy(J)" : [],
        "Time(s)" : []
    }
    
    mem_fencing_src = os.path.join(src_dir, "./PolyBenchC-4.2.1_mem_fencing")
    mem_fencing_build = os.path.join(build_folder, "mem_fencing")
    mem_fencing_build = build_all_time_kernels(build_dir=mem_fencing_build,src_dir=mem_fencing_src, dataset=dataset)
    count = 0
    # iterate over the power caps dataframe row wise contents Benchmarks,Predicted Power
    for file in os.listdir(mem_fencing_build):
        print(f"Running {file}")
        time.sleep(zzz)
        Benchmarks = os.path.basename(file) 
        name = Benchmarks
        energy_reading = 0
        time_reading = 0
        for i in range(num_iterations) :
            try :
                energy_reading , time_reading = get_energy_and_time_kernels(file_to_run=os.path.join(mem_fencing_build,Benchmarks)
                                        ,num_iterations=1,password=password,zzz=1,machine=machine)
                if energy_reading > 0:
                    success = True
                Likwid.clear_cache()
                Likwid.clear_cache()
                time.sleep(20)
            except Exception as e:
                if stop_event.is_set():
                    stop_event.clear()
                print(f"Error in running the energy and time kernels: {e}")
            data['Name'].append(name)
            data['Energy(J)'].append(energy_reading)
            data['Time(s)'].append(time_reading)
            print(f"Ran {name}")    
            df = pd.DataFrame(data)
            df.to_csv(output_file,index=False)

    print(f"Saved the results to {output_file}")
    
def add_cpuPower_and_likwid_readings(dir,sudo_password):
    """
    Add the CPU power and likwid readings to a txt file in the directory
    """
    cpuPowertxt = os.path.join(dir, "cpuPower.txt")
    likwidtxt = os.path.join(dir, "likwid.txt")
    cpupower_command = f"echo {sudo_password} | sudo -S cpupower frequency-info > {cpuPowertxt} 2>&1"
    likwid_command = f"echo {sudo_password} | sudo -S likwid-features -c N -l > {likwidtxt} 2>&1"
    try :
        subprocess.run(cpupower_command, shell=True)
        subprocess.run(likwid_command, shell=True)
    except Exception as e:
        print(f"Error in running the cpupower and likwid commands: {e}")
        exit(1)

    

if __name__ == '__main__' :
    parser = argparse.ArgumentParser(description='Run the energy and time kernels')
    parser.add_argument('--build',required=True, type=str, help='The build folder')
    parser.add_argument('--power_cap_file',required=True, type=str, help='The power cap file')
    parser.add_argument('--num_iterations',required=True, type=int, help='The number of iterations')
    parser.add_argument('--password',required=True, type=str, help='The password')
    parser.add_argument('--machine',required=True, type=str, help='The machine')
    parser.add_argument('--oracle', action='store_true', help='generate oracle')
    # arguemt to add a suffix to the output folder
    parser.add_argument('--suffix', type=str, help='The suffix to add to the output folder')
    
    args = parser.parse_args()
    
    # Check if build folder is absolute path
    if not os.path.isabs(args.build):
        args.build = os.path.abspath(args.build)
    if not os.path.isabs(args.power_cap_file):
        args.power_cap_file = os.path.abspath(args.power_cap_file)
    
    
    build_folder = args.build
    itr = args.num_iterations
    sudo_password = args.password
    machine = args.machine
    power_cap_file = args.power_cap_file
    suffix = ""
    if args.suffix:
        suffix = args.suffix
    
    datasets = ['LARGE_DATASET','EXTRALARGE_DATASET']
    
    if "XL" in os.path.basename(power_cap_file):
        datasets = ["EXTRALARGE_DATASET"]
        # datasets = ["EXTRALARGE_DATASET", "XL1_1" ,"XL1_2","XL1_3","XL1_5","DOUBLE_XL"]
    else:
        datasets = datasets[0]
    
    
    src_dir = os.path.abspath("./kernels")
        
    current_datetime = datetime.datetime.now()
    formatted_datetime = current_datetime.strftime("%Y-%m-%d_%H-%M-%S")

    for dataset in datasets:  
        build_folder = os.path.join(build_folder, dataset)
        #make build folder and ignore if built
        if not os.path.exists(build_folder):
            os.makedirs(build_folder)
            print(f"Build folder {build_folder} created successfully.")
        else:
            print(f"Build folder {build_folder} already exists.")
        if args.oracle:
            oracle_dir = setup_oracle_dir_structure(tools_dir = os.getcwd(), 
                                                    machine_name = args.machine, 
                                                    suffix = formatted_datetime + "_" +suffix + "_" + dataset)  
            oracle_res_file = os.path.join(oracle_dir, f"{formatted_datetime}_oracle_{machine}_{dataset}.csv")
            add_cpuPower_and_likwid_readings(oracle_dir,sudo_password)
            powerCap_generate_oracle(build_folder=build_folder, src_dir=src_dir ,num_iterations=itr, password=sudo_password, 
                            machine=machine,dataset=dataset ,output_file=oracle_res_file, zzz=10)
        else:
            kernel_data_dir, roofline_data_dir, powercap_res_dir = setup_dir_structure_with_powerCap(tools_dir = os.getcwd(),
                                                                                                     machine_name = args.machine,
                                                                                                     suffix = formatted_datetime + "_" +suffix + "_" + dataset)
            res_file = os.path.join(powercap_res_dir, f"{formatted_datetime}_powercap_{machine}_{dataset}.csv")
            add_cpuPower_and_likwid_readings(powercap_res_dir,sudo_password)
            powerCap_pridicted(build_folder=build_folder, src_dir=src_dir ,num_iterations=itr, password=sudo_password, 
                            machine=machine, power_caps_file=power_cap_file,dataset=dataset ,output_file=res_file, zzz=10)    
