#! /usr/bin/env python3
import argparse
import shutil
import os
import time
import subprocess
import numpy as np          
from utils_likwid import Likwid
import pandas as pd
from utils_freq import get_available_frequencies,set_frequency,set_governer
from utils_exp_params import check_exp_setup
from utils_state import load_state, save_state
from utils_asm import make_sum_squares_asm_raptorlake, make_sum_squares_asm_rocketlake, make_sum_squares_asm_broadwell, make_sum_squares_asm_zen3
from utils_asm import make_sum_squares_ams_only_flops
from utils_roofline_plot import plot_muliple_roofline
from utils_energy import get_energy_multiplication_factor
import psutil

base_array_len_a_roofline_energy = 64

def run_command_and_monitor(command, sudo_password):

    # Start the process
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, preexec_fn=os.setpgrp)
    process_psutil = psutil.Process(process.pid)
    
    start_time = time.time()
    timeout = 1200  # Timeout after 1200 seconds (20 minutes)

    while True:
        time.sleep(5)  # Check every 5 seconds

        #check if all the children of the process and the process is sleeping then kill the proceess and all the childeren
        all_sleeping = True
        if process_psutil.status() == psutil.STATUS_SLEEPING:
            for child in process_psutil.children(recursive=True):
                print(f"Child: {child}")
                if child.status() == psutil.STATUS_SLEEPING:
                    print("Process is sleeping.")
                else:
                    all_sleeping = False
                    break
            if all_sleeping:
                print("Process is sleeping. Sending SIGTERM with sudo...")
                # Send SIGTERM to the process with sudo privileges
                kill_command = f"echo {sudo_password} | sudo -S kill -TERM {process.pid}"
                os.system(kill_command)
                # Wait for the process to fully terminate
                process.wait()
                break
                    
        # Check if the process has completed
        if process.poll() is not None:
            break
        
        # Check for timeout
        if time.time() - start_time > timeout:
            print("Process timed out. Terminating with sudo...")
            kill_command = f"echo {sudo_password} | sudo -S kill -TERM {process.pid}"
            os.system(kill_command)
            process.wait()
            break

    stdout, stderr = process.communicate()

    if process.returncode != 0:
        raise subprocess.CalledProcessError(process.returncode, command, output=stdout, stderr=stderr)
    
    return stdout, stderr


machine_data_cache = {
    'broadwell': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '262144',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '15728640',
            'associativity' : '20',
            'line_size' : '64',
        },
    },
    'skylake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '1', # default value assumed
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '1048576',
            'associativity' : '16',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '8650752',
            'associativity' : '11',
            'line_size' : '64',
        },
    },
    'raptorlake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '49152',
            'associativity' : '12',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '524288',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '12582912',
            'associativity' : '16',
            'line_size' : '64',
        },
    },
    'rocketlake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '1',  # default value assumed
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '49152',
            'associativity' : '12',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '1310720',
            'associativity' : '10',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '25165824',
            'associativity' : '12',
            'line_size' : '64',
        },
    },

}

def get_time_duration(cache):
    data = {
        'L1D' : 70000,
        'L2' : 10000,
        'L3' : 10000,
        'DRAM' : 1,
    }
    return data[cache]
        

def get_max_power_cap_W(machine):
    data = {
        'broadwell' : 140,
        'raptorlake' : 154,
        'rocketlake' : 65,
    }
    return data[machine]

def min_power_cap_W(machine):
    data = {
        'broadwell' : 15,
        'raptorlake' : 15,
        'rocketlake' : 15,
    }
    return data[machine]

def getcache_counter_mapping(machine,cache):
    data = {
    "broadwell" :{
        'L1D' : 'perf::PERF_COUNT_HW_CACHE_L1D:ACCESS',
        'L2' : 'perf::PERF_COUNT_HW_CACHE_L1D:MISS',
        'L3' : 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS', # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : "perf::PERF_COUNT_HW_CACHE_LL:MISS"
    },
    "raptorlake" :{
        'L1D' : 'perf::PERF_COUNT_HW_CACHE_L1D:ACCESS',
        'L2' : 'perf::PERF_COUNT_HW_CACHE_L1D:MISS',
        'L3' : 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS', # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : "perf::PERF_COUNT_HW_CACHE_LL:MISS"
    },
    "rocketlake" :{
        'L1D' : 'perf::PERF_COUNT_HW_CACHE_L1D:ACCESS',
        'L2' : 'perf::PERF_COUNT_HW_CACHE_L1D:MISS',
        'L3' : 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS', # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : "perf::PERF_COUNT_HW_CACHE_LL:MISS"
    },
    "zen3" :{
        'L1D' : 'perf::PERF_COUNT_HW_CACHE_L1D:ACCESS',
        'L2' : 'perf::PERF_COUNT_HW_CACHE_L1D:MISS',
        'L3' : 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS', # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : "amd64_fam19h_zen3_l3::UNC_L3_MISSES:cpu=0"
    },
    }
    return data[machine][cache]

def getcache_array_mapping(machine,cache):
    data = {
    "broadwell" :{
        'L1D' : 640,
        'L2' : 6400,
        'L3' : 64000, # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : 314572800
    },
    "raptorlake" :{
        'L1D' : 768,
        'L2' : 8192,
        'L3' : 196608, # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : 314572800
    },
    "rocketlake" :{
        'L1D' : 5120,
        'L2' : 15872,
        'L3' : 131072, # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : 314572800
    },
    "zen3" :{
        'L1D' : 5120,
        'L2' : 15872,
        'L3' : 131072, # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : 209715200
    },
    }
    return data[machine][cache]

def get_constant_power(machine : str,sudo_pass :str, duration :str) -> float:
    energy_output = [0,0,0]
    count = 0
    while count < 3:
        try:
            output = subprocess.run(f"./bash/constant_power_measurement.sh {sudo_pass} {duration}",shell=True,capture_output=True,check=True,timeout=1200)
        except subprocess.CalledProcessError as e:
            print(f"Error: running constant_power_measurement.sh failed with return code {e.returncode}")
            continue
        res = output.stdout.decode('utf-8').split("\n\n")
        res = [int(x) for x in res if x != ""]
        energy_output[count] = res[1] - res[0]
        if energy_output[count] > 0 :
            count += 1

        else:
            print("Energy is less than 0")
            continue
    
    factor = get_energy_multiplication_factor(machine)
    
    mean_energy = np.mean(energy_output) * factor
        
    data = {
        "Energy" : mean_energy,
        "Power" : mean_energy / duration,
        "Time" : duration
    }
    return data



def make_benchmarks(build_dir,source_dir, MAD_PER_ELEMENT, machine,TYPE=1) -> None:
    try:
        print("<------------------------------------------------------------------------>")
        # store the current working directory
        cwd = os.getcwd()
        os.chdir(source_dir)
        asm_file = os.path.join(source_dir,"sumsq.asm")
        if machine == "raptorlake":
            make_sum_squares_asm_raptorlake(flops_per_element=MAD_PER_ELEMENT, output_file=asm_file)
        elif machine == "rocketlake":
            make_sum_squares_asm_rocketlake(flops_per_element=MAD_PER_ELEMENT, output_file=asm_file)
        elif machine == "broadwell":
            make_sum_squares_asm_broadwell(flops_per_element=MAD_PER_ELEMENT, output_file=asm_file)
        elif machine == "zen3":
            make_sum_squares_asm_zen3(flops_per_element=MAD_PER_ELEMENT, output_file=asm_file)
        # get a list of all the items present in the source directory
        old_items = os.listdir(source_dir)
        filename=f"main_{MAD_PER_ELEMENT}"
        output = subprocess.run(["make",f"MAD_PER_ELEMENT={MAD_PER_ELEMENT}",f"TYPE={1}"])
        # after the make command runs copy the binary with the name filename to build_dir
        shutil.copy(filename,build_dir)
        output = subprocess.run(["make",f"MAD_PER_ELEMENT={MAD_PER_ELEMENT}",f"TYPE={1}", "clean"])
        # delete any files that were newly created after the make command buy getting a list of all the items after the make command and comparing it with the original list of items
        # this is just in case make clean dosen't work
        new_items = os.listdir(source_dir)
        new_files = [item for item in new_items if item not in old_items]
        print(f"new_files left after make clean: {new_files}")
        for file in new_files:
            print(f"Deleting {file}")
            os.remove(file)
        # change the working directory back to the original working directory
        os.chdir(cwd)
        print("=============================================================================")
        print(f"Benchmarks compiled successfully. and moved to build directory : {build_dir}")
        print("<------------------------------------------------------------------------>")
    except subprocess.CalledProcessError as e:
        print(f"Error: Benchmarks compilation failed with return code {e.returncode}")

def make_benchmarks_only_fma(build_dir,source_dir, MAD_PER_ELEMENT, machine,TYPE=1) -> None:
    try:
        print("<------------------------------------------------------------------------>")
        # store the current working directory
        cwd = os.getcwd()
        os.chdir(source_dir)
        asm_file = os.path.join(source_dir,"sumsq.asm")
        make_sum_squares_ams_only_flops(machine=machine, output_file=asm_file)
        # get a list of all the items present in the source directory
        old_items = os.listdir(source_dir)
        filename=f"main_{MAD_PER_ELEMENT}"
        output = subprocess.run(["make",f"MAD_PER_ELEMENT={MAD_PER_ELEMENT}",f"TYPE={1}"])
        # after the make command runs copy the binary with the name filename to build_dir
        shutil.copy(filename,build_dir)
        output = subprocess.run(["make",f"MAD_PER_ELEMENT={MAD_PER_ELEMENT}",f"TYPE={1}", "clean"])
        new_items = os.listdir(source_dir)
        new_files = [item for item in new_items if item not in old_items]
        print(f"new_files left after make clean: {new_files}")
        for file in new_files:
            print(f"Deleting {file}")
            os.remove(file)
        # change the working directory back to the original working directory
        os.chdir(cwd)
        # rename the file to the correct name
        os.rename(os.path.join(build_dir,filename),os.path.join(build_dir,f"main_inf"))
        print("=============================================================================")
        print(f"FMA only benchmark made {filename} and moved to build directory : {build_dir}")
        print("<------------------------------------------------------------------------>")
    except subprocess.CalledProcessError as e:
        print(f"Error: FMA only Benchmarks compilation failed with return code {e.returncode}")

def read_output(filename,
                sudo_password,papi_counter,FREQ,arr_size, dur) -> list[str]:
    try:
        command = f"echo {sudo_password} | sudo -S SIZE_ARR={arr_size} ITRS={dur}  PAPI_EVENT_NAME={papi_counter} FREQ={FREQ} {filename}"
        print(f"command : {command}")
        output = subprocess.run([command],
                                check=True,shell=True,capture_output=True,timeout=600)
        # output_stdout, output_stderr = run_command_and_monitor(command, sudo_password)
        output_list = output.stdout.decode('utf-8').strip().split("\n")
        # output_list = output_stdout.decode('utf-8').strip().split("\n")
        print("=============================================================================")
        print(f"output_list: {output_list}")
        print("=============================================================================")
        return output_list
    except subprocess.CalledProcessError as e:
        print(f"Error: running {filename} failed with return code {e.returncode}")
        return []
    except subprocess.TimeoutExpired as e:
        print(f"Error: running {filename} failed with timeout")
        kill_command = f"echo {sudo_password} | sudo pkill -f -15 {filename}"
        try :
            subprocess.run(kill_command,check=True,shell=True)
        except subprocess.CalledProcessError as e :
            print(f"Error in killing the timed out process {e}")
        return []

def read_output_pmu_high_power(filename,
                sudo_password,papi_counter,arr_size, FREQ, dur) -> list[str]:
    try:
        # best results obtained when all the low power cores are disabled
        output = subprocess.run([f"echo {sudo_password} | sudo -S LIBPFM_FORCE_PMU=adl_glc SIZE_ARR={arr_size} ITRS={dur} PAPI_EVENT_NAME={papi_counter} FREQ={FREQ} {filename}"],
                                check=True,shell=True,capture_output=True,timeout=1200)
        # print(f"output: {output}")
        output_list = output.stdout.decode('utf-8').strip().split("\n")
        print("=============================================================================")
        print(f"output_list: {output_list}")
        print("=============================================================================")
        return output_list
    except subprocess.CalledProcessError as e:
        print(f"Error: running {filename} failed with return code {e.returncode}")
        return []
    except subprocess.TimeoutExpired as e:
        print(f"Error: running {filename} failed with timeout")
        return []

def read_output_pmu_low_power(filename,
                sudo_password,papi_counter,arr_size, FREQ, dur) -> list[str]:
    try:
        output = subprocess.run([f"echo {sudo_password} | sudo -S LIBPFM_FORCE_PMU=adl_grt SIZE_ARR={arr_size} ITRS={dur} PAPI_EVENT_NAME={papi_counter} FREQ={FREQ} {filename}"],
                                check=True,shell=True,capture_output=True,timeout=1200)
        # print(f"output: {output}")
        output_list = output.stdout.decode('utf-8').strip().split("\n")
        print("=============================================================================")
        print(f"output_list: {output_list}")
        print("=============================================================================")
        return output_list
    except subprocess.CalledProcessError as e:
        print(f"Error: running {filename} failed with return code {e.returncode}")
        return []
    except subprocess.TimeoutExpired as e:
        print(f"Error: running {filename} failed with timeout")
        return []


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description='Compile roofline for energy benchmarks and run them to collect data.')
    parser.add_argument('--password', type=str, help='sudo password', required=True)
    # source code directory required parameter
    parser.add_argument('--source_dir', type=str, help='give absolute or relative path to source code directory', required=True)
    parser.add_argument('--build_dir', type=str, help='give absolute or relative path to directory containing binaries', required=True)
    parser.add_argument('--output_dir', type=str, help='give absolute or relative path to output directory', required=True)
    parser.add_argument('--machine', type=str, help='machine name', required=True)
    # add optional argument to measure the high power cores or low power efficiency cores
    parser.add_argument('--high_power', action='store_true', help='measure high power cores')
    # add argument to not change freueqncy and dont check for exp setup
    parser.add_argument('--no_check', action='store_true', help='dont check for exp setup')
    # add argument to run with power caps
    parser.add_argument('--powercap', action='store_true', help='dont change frequency')
    # argument for iterations
    parser.add_argument('--iterations', type=int, help='number of iterations', default=11)
    # argument for sleep time
    parser.add_argument('--sleep_time', type=int, help='sleep time', default=20)
    parser.add_argument('--env_ITR', type=int, help='number of iterations for benchmark', default=11)

    #check if machine in raptorlake, rocketlake or broadwell
    args = parser.parse_args()
    if args.machine not in ["raptorlake", "rocketlake", "broadwell", "skylake", "zen3"]:
        print(f"Error: {args.machine} is not a valid machine.")
        print(f"if you are using it with a new machine then please do enter the unit mulitplier for energy in the script")
        exit(1)

    return parser.parse_args()

def get_energy_roofline_time_benchmarks(sudo_password,
                                        build_dir,
                                        source_dir,
                                        output_dir,
                                        suffix,
                                        zzz,
                                        frequency,
                                        energy_mul,
                                        high_power,
                                        machine,
                                        constant_power,
                                        ITR_ENV,
                                        itr=11) -> None:

    if os.path.exists(build_dir):
        shutil.rmtree(build_dir)
        print(f"Deleted old {build_dir}")
    
    os.makedirs(build_dir)
    print(f"Created {build_dir}")

    output_file = os.path.join(output_dir,f"a_roofline_model_for_energy_benchmarks_{suffix}.csv")
    
    machine_to_reg_map = {
        "raptorlake" : 16,
        "rocketlake" : 32,
        "brodwell" : 16,
        "zen3" : 16,
    }
    #make only flop benchmark
    make_benchmarks_only_fma(build_dir,source_dir,MAD_PER_ELEMENT=machine_to_reg_map[machine],machine=machine)    
    
    
    MAD_PER_ELEMENT_values = np.logspace(0,5,25,base=10).astype(int)
    # MAD_PER_ELEMENT_values = np.append(MAD_PER_ELEMENT_values,[1,2,3,4,5,6,7,8,9])
    # MAD_PER_ELEMENT_values = [1, 10 ,100, 1000, 10000]
    Mad_PER_ELEMENT_values = list(set(MAD_PER_ELEMENT_values))
    print(f"MAD_PER_ELEMENT_values: {MAD_PER_ELEMENT_values}")
    print(f"Length of MAD_PER_ELEMENT_values: {len(MAD_PER_ELEMENT_values)}")
    # exit()        
    
    print(f"MAD_PER_ELEMENT_values: {MAD_PER_ELEMENT_values}")
    # make benchmarks
    for MAD_PER_ELEMENT in MAD_PER_ELEMENT_values:
        # Likwid.clear_cache()
        print(f"Making benchmarks for MAD_PER_ELEMENT: {MAD_PER_ELEMENT} and ITR_ENV: {ITR_ENV}")
        make_benchmarks(build_dir,source_dir,MAD_PER_ELEMENT,machine=machine)
        print(f"Made benchmarks for MAD_PER_ELEMENT: {MAD_PER_ELEMENT}")

    data = {
            "Frequency(kHz)" : [],
            "Execution Time(s)" : [],
            "Energy(J)" : [],
            "Power(W)" : [],
            "total_flops" : [],
            "total_missed_bytes" : [],
            "OI" : [],
            "cache_level" : [],
            "counter_used" : [],
            "Constant Energy (J)" : [],
            "Duration measurement (s)" : [],
            "Constant Power (W)" : [],
            "File Name" : [],
            "Array Size" : [],
            }
        
    # caches = ['L1' , 'L2' , 'L3' ,'DRAM']
    caches = ['L1D' , 'L2' , 'L3', 'DRAM']
    # caches = ['L3' ]
    
    # testing purposes
    if machine == "zen3":
        caches = ['DRAM']
        
    
    print(f"build_dir: {build_dir}")
    files = os.listdir(build_dir)
    print(f"files: {files}")
    # exit()
    # with progressbar.ProgressBar(max_value=len(files), 
    #                         widgets=widgets) as bar:
    for j, cache in enumerate(caches):
        # bar.update(progress)
        data = {
            "Frequency(kHz)" : [],
            "Execution Time(s)" : [],
            "Energy(J)" : [],
            "Power(W)" : [],
            "total_flops" : [],
            "total_missed_bytes" : [],
            "OI" : [],
            "cache_level" : [],
            "counter_used" : [],
            "Constant Energy (J)" : [],
            "Duration measurement (s)" : [],
            "Constant Power (W)" : [],
            "File Name" : [],
            "Array Size" : [],
            }
        output_file = os.path.join(output_dir,f"a_roofline_model_for_energy_benchmarks_{suffix}_{cache}.csv")
        for file in files:
            is_Fma_only = False
            if "inf" in file:
                is_Fma_only = True
            papi_counter = getcache_counter_mapping(machine=machine,cache=cache)
            array_len = getcache_array_mapping(machine=machine,cache=cache)
            array_sizes_to_run = [array_len]
            dur = get_time_duration(cache)
            print(f"array_sizes_to_run: {array_sizes_to_run}")
            #print current cache level
            print(f"cache: {cache}")
            print(f"papi_counter: {papi_counter}")
            print(f"array_len: {array_len}")
            print(f"array len * base_array_len_a_roofline_energy: {array_len * base_array_len_a_roofline_energy}")
            print(f"byes in array : {array_len * base_array_len_a_roofline_energy * 8 * 8}")          
            for array_size in array_sizes_to_run:
                energy_readings = []
                readings = {}
                print(f"array_size: {array_size}")
                for i in range(itr):
                    data2 = {
                            "Frequency(kHz)" : [],
                            "Execution Time(s)" : [],
                            "Energy(J)" : [],
                            "Power(W)" : [],
                            "total_flops" : [],
                            "total_missed_bytes" : [],
                            "OI" : [],
                            "cache_level" : [],
                            "counter_used" : [],
                            "Constant Energy (J)" : [],
                            "Duration measurement (s)" : [],
                            "Constant Power (W)" : [],
                            "File Name" : [],
                            "Array Size" : [],
                            }
                    # time.sleep(zzz)
                    success = False
                    while(not success):
                        count = 0
                        filename = os.path.join(build_dir,file)
                        while True:
                            if machine  == "raptorlake" :
                                if high_power:
                                    output_list = read_output_pmu_high_power(filename=filename,
                                                                            sudo_password=sudo_password,
                                                                            papi_counter=papi_counter,
                                                                            arr_size=array_size, FREQ=int(frequency*1000),dur=dur)
                                else:
                                    output_list = read_output(filename=filename,
                                                            sudo_password=sudo_password,
                                                            papi_counter=papi_counter,
                                                            arr_size=array_size, FREQ=int(frequency*1000),dur=dur)
                            else :
                                output_list = read_output(filename=filename,
                                                        sudo_password=sudo_password,
                                                        papi_counter=papi_counter,
                                                        arr_size=array_size, FREQ=int(frequency*1000),dur=dur)
                            if output_list != [] and output_list != ['']:
                                break
                            count += 1
                            if count > 15:
                                print(f"Error: Running the file {filename}")
                                exit()
                                break
                            # time.sleep(zzz)

                        if len(output_list) == 0:
                            print(f"Error: output_list is empty for {filename}")
                            continue
                        
                        Energy = float(output_list[-4]) * energy_mul
                        print(f"output_file : {filename}")
                        if Energy > 0  :
                            success = True
                        else:
                            print("Energy is less than 0")
                            continue
                        
                    freq = float(frequency)
                    Energy = float(output_list[-4]) * energy_mul
                    execution_time = float(output_list[-9])
                    Power = Energy / execution_time
                    OI = float(output_list[-3])
                    total_flops = float(output_list[-2])
                    total_missed_bytes = float(output_list[-1])
                    const_power_data = constant_power
                    if is_Fma_only:
                        total_missed_bytes = 0
                        OI = float('inf')
                    
                    data2["Frequency(kHz)"].append(freq)
                    data2["Execution Time(s)"].append(execution_time)
                    data2["Energy(J)"].append(Energy)
                    data2["Power(W)"].append(Power)
                    data2["total_flops"].append(total_flops)
                    data2["total_missed_bytes"].append(total_missed_bytes)
                    data2["OI"].append(OI)
                    data2["cache_level"].append(cache)
                    data2["counter_used"].append(papi_counter)
                    data2["Constant Energy (J)"].append(const_power_data["Energy"])
                    data2["Duration measurement (s)"].append(const_power_data["Time"])
                    data2["Constant Power (W)"].append(const_power_data["Power"])
                    data2["File Name"].append(file)
                    data2["Array Size"].append(array_size)
                    print(f"data2 : {data2}")
                    
                    if Energy in energy_readings:
                        continue
                    energy_readings.append(Energy)
                    readings[Energy] = data2
                
                # print(readings)   
                energy_readings = list(energy_readings)
                if len(energy_readings) %  2 == 0 :
                    print(f"energy_readings are even: {energy_readings}")
                    energy_readings.remove(max(energy_readings))
                median_energy = np.median(energy_readings)
                print(f"energy_readings: {energy_readings}")
                print(f"median_energy: {median_energy}")
                data["Frequency(kHz)"].append(readings[median_energy]["Frequency(kHz)"][0])
                data["Execution Time(s)"].append(readings[median_energy]["Execution Time(s)"][0])
                data["Energy(J)"].append(readings[median_energy]["Energy(J)"][0])
                data["Power(W)"].append(readings[median_energy]["Power(W)"][0])
                data["total_flops"].append(readings[median_energy]["total_flops"][0])
                data["total_missed_bytes"].append(readings[median_energy]["total_missed_bytes"][0])
                data["OI"].append(readings[median_energy]["OI"][0])
                data["cache_level"].append(readings[median_energy]["cache_level"][0])
                data["counter_used"].append(readings[median_energy]["counter_used"][0])
                data["Constant Energy (J)"].append(readings[median_energy]["Constant Energy (J)"][0])
                data["Duration measurement (s)"].append(readings[median_energy]["Duration measurement (s)"][0])
                data["Constant Power (W)"].append(readings[median_energy]["Constant Power (W)"][0])
                data['File Name'].append(readings[median_energy]["File Name"][0])
                data['Array Size'].append(readings[median_energy]["Array Size"][0])
                df = pd.DataFrame(data)
                df.sort_values(by=['OI'],inplace=True)
                df.to_csv(output_file,index=False)
        
        # print(data)

    print("=============================================================================")
    print("Data collected successfully.")
    print(f"Data: {data}")
    print("=============================================================================")
    df = pd.DataFrame(data)
    df = df.drop('cache_level', axis=1)
    df = df.drop('counter_used', axis=1)
    df = df.groupby('File Name').median().reset_index()
    df.sort_values(by=['OI'],inplace=True)
    # df.to_csv(output_file,index=False)
    

    # create a dataframe from the data



if __name__ == "__main__":
    
    #initialize the state
    state = {
        "source_dir" : "",
        "build_dir" : "",
        "output_dir" : "",
        "sudo_password" : "",
        "powercap" : False,
        "list of freq or powercap" : [],
        "list ran" : [],
        "machine" : "",
        "high_power" : False
    }

    args = parse_args()
    source_dir = args.source_dir
    build_dir = args.build_dir
    output_dir = args.output_dir
    sudo_password = args.password
    itr = args.iterations
    zzz = args.sleep_time
    ITR_ENV = args.env_ITR

    #check if all paths are absolute paths or convert them to absolute paths
    if not os.path.isabs(args.build_dir):
        build_dir = os.path.abspath(args.build_dir)

    if not os.path.isabs(args.source_dir):
        source_dir = os.path.abspath(args.source_dir)
    
    if not os.path.isabs(args.output_dir):
        output_dir = os.path.abspath(args.output_dir)


    #check if the source directory exists
    if not os.path.exists(source_dir):
        print(f"Error: {source_dir} does not exist.")
        exit(1)
    else:
        print(f"{source_dir} exists.")

    set_governer(governer="userspace", sudo_password=sudo_password)
    # if not args.powercap:
    #     list_of_freq = get_available_frequencies()
    #     list_of_freq.sort(reverse=True)
    
    list_of_freq = get_available_frequencies()
    list_of_freq.sort(reverse=True)
    
    state["source_dir"] = source_dir
    state["build_dir"] = build_dir
    state["output_dir"] = output_dir
    state["sudo_password"] = sudo_password
    state["machine"] = args.machine
    state["high_power"] = args.high_power
    state["powercap"] = args.powercap
    state["list of freq or powercap"] = list_of_freq
    # if args.powercap:
    #     power_cap_list = np.linspace(min_power_cap_W(args.machine),get_max_power_cap_W(args.machine),20)
    #     state["list of freq or powercap"] = power_cap_list
    # else:
    #     state["list of freq or powercap"] = list_of_freq


    if os.path.exists('energy_validation_state.json'):
        load_state(state, 'energy_validation_state.json')
        print("State loaded successfully.")
    
    
    source_dir = state["source_dir"]
    build_dir = state["build_dir"]
    output_dir = state["output_dir"]
    sudo_password = state["sudo_password"]
    powercap = state["powercap"]
    machine = state["machine"]
    high_power = state["high_power"]
    power_cap_list = []
    list_of_freq = []
    list_of_freq = state["list of freq or powercap"]
    # if powercap:
    #     power_cap_list = state["list of freq or powercap"]
    # else:
    #     list_of_freq = state["list of freq or powercap"]

    if machine != 'raptorlake' :
        Likwid.disable_prefetchers(sudo_password=sudo_password)
    else :
        command = "sudo -S wrmsr 420 47"
        subprocess.run(command, shell=True, check=True, input=sudo_password.encode('utf-8'))
    Likwid.disable_turbo_boost(sudo_password=sudo_password)

    for freq in list_of_freq:
        output_dir_freq = os.path.join(output_dir,f"{freq}kHz")
        os.makedirs(output_dir_freq,exist_ok=True)
        if freq in state["list ran"]:
            print(f"Frequency {freq}kHz already ran.")
            continue
        set_frequency(frequency=freq,sudo_password=sudo_password)
        constant_power = get_constant_power(machine,sudo_password,1)
        print(f"sleep {zzz} itr {itr}")
        get_energy_roofline_time_benchmarks(sudo_password=sudo_password,build_dir=build_dir,source_dir=source_dir,output_dir=output_dir_freq,
                                            suffix=f"{freq}kHz",zzz=zzz,frequency=freq,energy_mul=get_energy_multiplication_factor(args.machine),
                                            high_power=args.high_power,machine=args.machine,constant_power=constant_power,itr=itr,ITR_ENV=ITR_ENV)
        plot_muliple_roofline(result_folder=output_dir_freq,output_folder=output_dir_freq,machine=machine)
        exit()
        state["list ran"].append(freq)
        save_state(state, 'energy_validation_state.json')
        print(f"State saved successfully after running at frequency {freq}kHz")

    os.remove('energy_validation_state.json')
    print("State file deleted successfully.")
    print("=============================================================================")
    print("Energy validation completed successfully.")
    print("=============================================================================")

    if machine != 'raptorlake' :
        Likwid.enable_prefetchers(sudo_password=sudo_password)
        Likwid.enable_turbo_boost(sudo_password=sudo_password)
        set_governer(governer="performance", sudo_password=sudo_password)
    print("=============================================================================")



