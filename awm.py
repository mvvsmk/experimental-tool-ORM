#!/usr/bin/env python3

import os
import subprocess
import shutil
import time
import argparse
import datetime
from Likwid import Likwid, run_all_benchmarks_for_frequency
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from utils_dir import setup_dir_structure, setup_oracle_dir_structure
from utils_exp_params import check_exp_setup
from utils_freq import get_available_frequencies, set_governer, set_frequency, reset_frequency
from polybench_kernels import configure_polybench, run_all_kernels, build_all_kernels, build_all_time_kernels, run_all_time_kernels, build_all_energy_kernels, run_all_energy_kernels 
import sys
import json
from state_load_store import load_state, save_state
from clean_results import delete_empty_directories
from energy_validate import get_constant_power, get_energy_multiplication_factor, get_energy_roofline_time_benchmarks

def kill_all_vs_code_server():
    try :
        subprocess.run("ps aux | grep .vscode-server | awk '{print $2}' | xargs kill",shell=True, check=True)
    except subprocess.CalledProcessError as e :
        print(f"some error while cleaning vs code server {e}")
        

def get_energy_src(machine):
    
    src_dir = {
        "broadwell" : "kernels/a-roofline-model-of-energy-ubenchmarks/cpu/intel/broadwell/Intel(R)_Xeon(R)_CPU_E5_1650_v4_@_3.60GHz_mod_fma_500",
        "raptorlake" : "kernels/a-roofline-model-of-energy-ubenchmarks/cpu/intel/raptorlake/i5-13600_fma_avx512_300",
        "rocketlake" : "kernels/a-roofline-model-of-energy-ubenchmarks/cpu/intel/rocketlake/i5-11400_fma_avx512_300",
        # "skylake" : 250000000
    }
    
    return src_dir[machine]





def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description='Compile and run the ORM benchmark to collect data. if you give no benchmark then all the benchmarks will be run.')
    parser.add_argument('--password', type=str, help='sudo password', required=True)
    parser.add_argument('--machine', type=str, help='machine name', required=True)
    #argument to activate test mode
    parser.add_argument('--test', action='store_true', help='activate test mode')
    #add argument to generate time oracle
    parser.add_argument('--time_oracle', action='store_true', help='generate time oracle')
    #add argument to load state from json file
    parser.add_argument('--load_state', type=str, help='load state from json file')
    #add argument to run only the energy roofline benchmarks
    parser.add_argument('--energy_roofline', action='store_true', help='run only the energy roofline benchmarks')
    #add argument to run only the ERT roofline benchmarks
    parser.add_argument('--ert', action='store_true', help='run only the ERT roofline benchmarks')
    #add argument to run only the likwid benchmarks
    parser.add_argument('--likwid', action='store_true', help='run only the likwid benchmarks')
    #add argument to run only the polybench benchmarks
    parser.add_argument('--polybench', action='store_true', help='run only the polybench benchmarks')
    #add arguemnt to run all the benchmarks
    parser.add_argument('--all', action='store_true', help='run all the benchmarks')
    #add argument to clean the results folder to delete empty results directories
    parser.add_argument('--clean', action='store_true', help='clean the results folder to delete empty results directories')
    #add argument to measure high performance cores
    parser.add_argument('--high_perf_cores', action='store_true', help='measure high performance cores')
    #add argument to measure polybench energy
    parser.add_argument('--energy_oracle', action='store_true', help='measure polybench energy')
    #add argument to measure power-capping
    parser.add_argument('--power_cap', action='store_true', help='measure power-capping')
    #add argument to get path to the powercap file
    parser.add_argument('--powercap_file', type=str, help='path to the powercap / file with powercaps file')
    #add argument to measure energy roofline benchmarks
    parser.add_argument('--final_roofline', action='store_true', help='measure final roofline benchmarks')
    # add optional argument to measure the high power cores or low power efficiency cores
    parser.add_argument('--high_power', action='store_true', help='measure high power cores')
    # add argument to not change freueqncy and dont check for exp setup
    parser.add_argument('--no_check', action='store_true', help='dont check for exp setup')
    parser.add_argument('--no_freq', action='store_true', help='dont change frequency')

    return parser.parse_args()



def main(state) -> None:
    args = parse_args()
    
    if args.power_cap:
        print("Power capping activated")
        if args.powercap_file:
            power_cap_file = args.powercap_file
            print(f"Power cap file: {power_cap_file}")
        else:
            print("Power cap file not provided. Exiting the program.")
            exit(1)  
    
    if args.machine not in ['broadwell', 'raptorlake', 'rocketlake' , 'skylake']:
        print("Invalid machine name. Exiting the program.")
        exit(1)

    # check if the clean results flag is present and call the clean_results.py 's delete  script
    if args.clean:
        root_dir = os.path.join(os.path.abspath(os.curdir), "results")
        if os.path.isdir(root_dir):
            delete_empty_directories(root_dir)
            print("Results cleaned successfully.")
        else:
            print(f"The provided path '{root_dir}' is not a valid directory.")
        exit(0)

    # date time suffix
    current_datetime = datetime.datetime.now()
    formatted_datetime = current_datetime.strftime("%Y-%m-%d_%H-%M-%S")


    home_dir = os.path.abspath(os.curdir)
    kernel_res_dir, roofline_res_dir = setup_dir_structure(home_dir, args.machine, formatted_datetime)
    kernel_dir = os.path.join(home_dir, "kernels")
    poly_bench_oracle_dir = ""
    poly_bench_src_dir = os.path.join(kernel_dir, "PolyBenchC-4.2.1")
    poly_bench_src_dir_time = os.path.join(kernel_dir, "PolyBenchC-4.2.1_time")
    poly_bench_src_dir_energy = os.path.join(kernel_dir, "PolyBenchC-4.2.1_energy")
    poly_bench_bin = os.path.join(home_dir, "bin")
    poly_bench_bin_time = os.path.join(home_dir, "bin_time")
    poly_bench_bin_energy = os.path.join(home_dir, "bin_energy")
    poly_bench_bin_built = []
    poly_bench_bin_built_ran = []
    poly_bench_bin_built_time = []
    poly_bench_bin_built_time_ran = []
    poly_bench_bin_built_energy = []
    poly_bench_bin_built_energy_ran = []
    energy_roofline_bin = os.path.join(home_dir, "energy_roofline_bin")
    energy_roofline_src = os.path.join(kernel_dir, "a-roofline-model-of-energy-ubenchmarks/cpu/intel/broadwell/Intel(R)_Xeon(R)_CPU_E5_1650_v4_@_3.60GHz copy")
    test = args.test
    poly_bench_dataset = ['LARGE_DATASET', 'EXTRALARGE_DATASET']
    poly_bench_itr = 5
    zzz = 30
    high_perf_cores = False
    
    #putting all the variables in state
    state["home_dir"] = home_dir
    state["kernel_res_dir"] = kernel_res_dir
    state["roofline_res_dir"] = roofline_res_dir
    state["kernel_dir"] = kernel_dir
    state["poly_bench_src_dir"] = poly_bench_src_dir
    state["poly_bench_src_dir_time"] = poly_bench_src_dir_time
    state["poly_bench_src_dir_energy"] = poly_bench_src_dir_energy
    state["poly_bench_bin"] = poly_bench_bin
    state["poly_bench_bin_time"] = poly_bench_bin_time
    state["poly_bench_bin_energy"] = poly_bench_bin_energy
    state["poly_bench_bin_built"] = poly_bench_bin_built
    state["poly_bench_bin_built_ran"] = poly_bench_bin_built_ran
    state["poly_bench_bin_built_time"] = poly_bench_bin_built_time
    state["poly_bench_bin_built_time_ran"] = poly_bench_bin_built_time_ran
    state["poly_bench_bin_built_energy"] = poly_bench_bin_built_energy
    state["poly_bench_bin_built_energy_ran"] = poly_bench_bin_built_energy_ran
    state["poly_bench_itr"] = poly_bench_itr
    state["poly_bench_dataset"] = poly_bench_dataset
    state["energy_roofline_bin"] = energy_roofline_bin
    state["formatted_datetime"] = formatted_datetime
    state["poly_bench_oracle_dir"] = poly_bench_oracle_dir
    state["energy_roofline_src"] = energy_roofline_src
    state["test"] = test
    state["zzz"] = zzz
    state["args.machine"] = args.machine
    state["args.password"] = args.password
    state["args.test"] = args.test
    state["args.time_oracle"] = args.time_oracle
    state["args.energy_oracle"] = args.energy_oracle
    state["args.load_state"] = args.load_state
    state["args.energy_roofline"] = args.energy_roofline
    state["args.ERT"] = args.ert
    state["args.likwid"] = args.likwid
    state["args.polybench"] = args.polybench
    state["args.all"] = args.all
    state["high_perf_cores"] = args.high_perf_cores
    state["last_frequency"] = 0
    state["ERT_run"] = False
    state["energy_run"] = False
    state["likwid_run"] = False
    state["oracle_run"] = False
    state["polybench_run"] = False
    state["polybench_bin_generated"] = False
    state["polybench_bin_generated_time"] = False
    state["polybench_bin_generated_energy"] = False
    state["polybench_configured"] = False
    state["frequencies_run"] = []
    state["ERT_copied"] = False
    state["args.final_roofline"] = args.final_roofline
    state["args.high_power"] = args.high_power
    state["args.no_check"] = args.no_check
    state["args.no_freq"] = args.no_freq



    if args.load_state or os.path.exists('state.json'):
        load_state(state, 'state.json')
        print("State loaded successfully.")


    home_dir = state["home_dir"]
    kernel_res_dir = state["kernel_res_dir"]
    roofline_res_dir = state["roofline_res_dir"]
    kernel_dir = state["kernel_dir"]
    poly_bench_src_dir = state["poly_bench_src_dir"]
    poly_bench_src_dir_time = state["poly_bench_src_dir_time"]
    poly_bench_src_dir_energy = state["poly_bench_src_dir_energy"]
    poly_bench_bin = state["poly_bench_bin"]
    poly_bench_bin_time = state["poly_bench_bin_time"]
    poly_bench_bin_energy = state["poly_bench_bin_energy"]
    poly_bench_bin_built = state["poly_bench_bin_built"]
    poly_bench_bin_built_time = state["poly_bench_bin_built_time"]
    poly_bench_bin_built_energy= state["poly_bench_bin_built_energy"]
    poly_bench_itr = state["poly_bench_itr"]
    poly_bench_dataset = state["poly_bench_dataset"]
    energy_roofline_bin = state["energy_roofline_bin"]
    formatted_datetime = state["formatted_datetime"]
    poly_bench_oracle_dir = state["poly_bench_oracle_dir"]
    energy_roofline_src = state["energy_roofline_src"]
    test = state["test"]
    zzz = state["zzz"]
    args.machine = state["args.machine"]
    args.password = state["args.password"]
    args.test = state["args.test"]
    args.time_oracle = state["args.time_oracle"]
    args.energy_oracle = state["args.energy_oracle"]
    args.load_state = state["args.load_state"]
    args.energy_roofline = state["args.energy_roofline"]
    args.ert = state["args.ERT"]
    args.likwid = state["args.likwid"]
    args.polybench = state["args.polybench"]
    args.all = state["args.all"]
    args.high_perf_cores = state["high_perf_cores"]
    args.high_power = state["args.high_power"]
    args.final_roofline = state["args.final_roofline"]
    args.no_check = state["args.no_check"]
    args.no_freq = state["args.no_freq"]
    

    energy_roofline = args.energy_roofline
    ert = args.ert
    likwid = args.likwid
    polybench = args.polybench

    # default true
    if args.all:
        energy_roofline = True
        ert = True
        likwid = True
        polybench = True
        
    if args.high_perf_cores:
        print("Measuring high performance cores")
        high_perf_cores = True
    else:
        print("Measuring all cores")
        high_perf_cores = False




    if (args.time_oracle or args.energy_oracle) and state["polybench_bin_generated_time"] == False:
        poly_bench_oracle_dir = setup_oracle_dir_structure(tools_dir=home_dir, 
                                                           machine_name=args.machine, 
                                                           suffix=formatted_datetime)
        state["poly_bench_oracle_dir"] = poly_bench_oracle_dir


    Likwid.disable_prefetchers(args.password)
    Likwid.disable_turbo_boost(args.password)
    set_governer(governer="userspace", sudo_password=args.password)

    if not check_exp_setup() and not args.no_check:
        print("Experiment setup is not correct. Exiting the program.")
        exit(1)

    # check if all paths are absolute or relative
    if test:
        print("Test mode activated")
        poly_bench_dataset = ['MINI_DATASET','SMALL_DATASET']
        poly_bench_itr = 3
        zzz = 0
    
    # configure polybench
    configure_polybench(kernel_dir=kernel_dir, src_dir=poly_bench_src_dir, 
                        machine=args.machine)
    state["polybench_configured"] = True

    # build all polybench kernels
    if state["polybench_bin_generated"] == False:
        for dataset in poly_bench_dataset:
            poly_bench_bin_built.append(build_all_kernels(src_dir=poly_bench_src_dir,
                                                          build_dir=poly_bench_bin, 
                                                          dataset=dataset))
            state["polybench_bin_generated"] = True
            state["polybench_bin_built"] = poly_bench_bin_built

    # build all polybench kernels
    if state["polybench_bin_generated_time"] == False:
        for dataset in poly_bench_dataset:
            poly_bench_bin_built_time.append(build_all_time_kernels(src_dir=poly_bench_src_dir_time,
                                                                    build_dir=poly_bench_bin_time, 
                                                                    dataset=dataset))
            state["polybench_bin_generated_time"] = True
            state["polybench_bin_built_time"] = poly_bench_bin_built_time
    
    # build all polybench kernels
    if state["polybench_bin_generated_energy"] == False:
        for dataset in poly_bench_dataset:
            poly_bench_bin_built_energy.append(build_all_energy_kernels(src_dir=poly_bench_src_dir_energy,
                                                                    build_dir=poly_bench_bin_energy, 
                                                                    dataset=dataset))
            state["polybench_bin_generated_energy"] = True
            state["polybench_bin_built_energy"] = poly_bench_bin_built_energy        
            
            
    # get available frequencies
    available_frequencies = get_available_frequencies()
    available_frequencies.sort(reverse=True)
    print(f"Available frequencies: {available_frequencies}")

    # iterate over all frequencies
    for freq in available_frequencies:
        if freq in state["frequencies_run"]:
            print(f"Frequency {freq} already run. Skipping.")
            continue


        # set the frequency
        set_frequency(frequency=freq, sudo_password=args.password)
        print(f"Frequency set to {freq} kHz")
        time.sleep(zzz)

        # time oracle run
        if args.time_oracle and state["oracle_time_run"] == False:
            for poly_bench in poly_bench_bin_built_time:
                if poly_bench in poly_bench_bin_built_time_ran:
                    print(f"{poly_bench} already ran. Skipping.")
                    continue
                run_all_time_kernels(build_dir=poly_bench, 
                                     output_dir=poly_bench_oracle_dir, 
                                     num_iterations=3, 
                                     suffix=f"{formatted_datetime}_{os.path.basename(poly_bench)}", 
                                     frequency=freq, zzz=zzz,state=state,password=args.password)
                poly_bench_bin_built_time_ran.append(poly_bench)
                state["polybench_bin_built_time_ran"] = poly_bench_bin_built_time_ran
            state["oracle_time_run"] = True

        # energy oracle run
        if args.energy_oracle and state["oracle_energy_run"] == False:
            for poly_bench in poly_bench_bin_built_energy:
                if poly_bench in poly_bench_bin_built_energy_ran:
                    print(f"{poly_bench} already ran. Skipping.")
                    continue
                run_all_energy_kernels(build_dir=poly_bench, 
                                     output_dir=poly_bench_oracle_dir, 
                                     num_iterations=3, 
                                     suffix=f"{formatted_datetime}_{os.path.basename(poly_bench)}", 
                                     frequency=freq, zzz=zzz,state=state,password=args.password,
                                     machine=args.machine)
                poly_bench_bin_built_energy_ran.append(poly_bench)
                state["polybench_bin_built_energy_ran"] = poly_bench_bin_built_energy_ran
            state["oracle_energy_run"] = True

        # run all polybench kernels
        if freq == max(available_frequencies) and state["polybench_run"] == False and polybench:
            for poly_bench in poly_bench_bin_built:
                if poly_bench in poly_bench_bin_built_ran:
                    print(f"{poly_bench} already ran. Skipping.")
                    continue
                run_all_kernels(build_dir=poly_bench, output_dir=kernel_res_dir, 
                                num_iterations=poly_bench_itr,
                                password=args.password, 
                                suffix=f"{formatted_datetime}_{os.path.basename(poly_bench)}",
                                frequency=freq, zzz=zzz,state=state,high_performance_cores=high_perf_cores)
                poly_bench_bin_built_ran.append(poly_bench)
                state["polybench_bin_built_ran"] = poly_bench_bin_built_ran
            state["polybench_run"] = True
                
        #get final roofline data
        if args.final_roofline:
            constant_power = get_constant_power(machine=args.machine, password=args.password,duration=60)
            get_energy_roofline_time_benchmarks(build_dir=energy_roofline_bin,
                                                source_dir=energy_roofline_src,
                                                output_dir=roofline_res_dir, 
                                                suffix=f"{formatted_datetime}_{freq}",machine=args.machine,
                                                 
                                                zzz=zzz,constant_power=constant_power)
            # state["energy_run"] = True
        
        # get likwid data
        if state["likwid_run"] == False and likwid:
            run_all_benchmarks_for_frequency(output_dir=roofline_res_dir,frequency=freq,zzz=zzz,suffix=f"{formatted_datetime}_{freq}")
            state["likwid_run"] = True

        if state["ERT_run"] == False and ert:
        #configure ert
            ERT_config = setup_emperical_roofline(tooldir=home_dir, suffix=f"{formatted_datetime}_{freq}")
            print(f"ERT config: {ERT_config}")
        # run ert tool
            run_ert_tool(tooldir=home_dir, config_file=ERT_config["config_file"])
            state["ERT_run"] = True
        #copy ERT results
        if state["ERT_copied"] == False and ert:
            get_ert_results(outputDir=roofline_res_dir, ert_results_dir=ERT_config["results_folder"], 
                            suffix=f"{formatted_datetime}_{freq}")
            state["ERT_copied"] = True
        
        #run a roofline model of energy benchmarks
        if state["energy_run"] == False and energy_roofline:
            get_energy_roofline_time_benchmarks(build_dir=os.path.join(home_dir, "energy_roofline_bin_testing"),
                                                source_dir=get_energy_src(args.machine),
                                                output_dir=roofline_res_dir, 
                                                suffix=f"{formatted_datetime}_{freq}", 
                                                zzz=3)
            state["energy_run"] = True

        state["frequencies_run"].append(freq)
        state["last_frequency"] = freq
        state["ERT_run"] = False
        state["ERT_copied"] = False
        state["energy_run"] = False
        state["likwid_run"] = False
        state["oracle_time_run"] = False
        state["oracle_energy_run"] = False
        poly_bench_bin_built_time_ran = []
        poly_bench_bin_built_energy_ran = []
        save_state(state, 'state.json')
        if test:
            print(f"test is on. Exiting the program.")
            break
    
    # set the governer to ondemand
    set_governer(governer="powersave", sudo_password=args.password)
    reset_frequency(sudo_password=args.password)
    Likwid.enable_prefetchers(args.password)
    Likwid.enable_turbo_boost(args.password)

    print("Experiment completed successfully.")



if __name__ == "__main__":
    State = {
    "last_frequency": 0,
    "ERT_run": False,
    "ERT_copied" : False,
    "energy_run": False,
    "likwid_run": False,
    "oracle_time_run": False,
    "oracle_energy_run": False,
    "polybench_run": False,
    "polybench_bin_generated" : False,
    "polybench_bin_generated_time" : False,
    "polybench_bin_generated_energy" : False,
    "polybench_configured": False,
    "frequencies_run": [],
    }
    try :
        main(State)
        # remove state.json file
        os.remove('state.json')
        print("State file removed.")
        print("Exiting the program.")
        exit(0)
    except KeyboardInterrupt:
        save_state(State, 'state.json')
        print("Keyboard Interrupt. Exiting the program.")
        exit(1)
    except Exception as e:
        save_state(State, 'state.json')
        print(f"An error occured: {e}")
        exit(1)