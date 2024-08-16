#! /usr/bin/env python3

import argparse
import subprocess
import os
import shutil
import pandas as pd
import numpy as np
import datetime
import time
from utils_power import *
from utils_polybench import *
from utils_energy_time import *
from utils_likwid import *
from utils_generic import *
from utils_MLIR import *
from utils_freq import *
from utils_exp_params import *
from utils_dir import *
from utils_papi import *

def parse_args():
    current_datetime = datetime.datetime.now()
    formatted_datetime = current_datetime.strftime("%Y-%m-%d_%H-%M-%S")
    parser = argparse.ArgumentParser(description="Script to run the experiments")
    parser.add_argument("--machine", type=str, required=True, help="Machine name")
    parser.add_argument("--powercap_file", type=str, help="File containing list of power caps")
    parser.add_argument("--kernel_dir", type=str, default="./kernels", help="Directory containing the kernel files")
    parser.add_argument("--build_dir", type=str, required=True, help="Directory to store the build files")
    parser.add_argument("--dataset", type=str, default="EXTRALARGE_DATASET", help="Dataset to run the experiments")
    parser.add_argument("--data_type", type=str, default="DATA_TYPE_IS_DOUBLE", help="Data type to run the experiments")
    parser.add_argument("--suffix", type=str, default=f"", help="Suffix for the experiment directory")
    parser.add_argument("--password", type=str, required=True, help="Password for sudo")
    parser.add_arguemnt("--inst_type", type=str, required=True, help="oracle, oracle+powercap, powercap, papi")
    parser.add_arguemnt("--benchmarks", type=str, required=True, help="MLIR, Polybench")
    parser.add_argument("--itr", type=int, default=5, help="Number of iterations to run the experiments")
    parser.add_argument("--freq_change", type=bool, default=False, help="Change the frequency")
    parser.add_argument('-e','--exp_conditions',
                        action='append',
                        help='what are the experimenatal setup\n g_userspace \n no_prefetcher \n no_turbo+', 
                        required=True)
    args = parser.parse_args()
    args.suffix = args.suffix + formatted_datetime
    return args

def main():
    args = parse_args()
    # convert all args namespace to variables
    machine = args.machine
    powercap_file = args.powercap_file
    kernel_dir = args.kernel_dir
    build_dir = args.build_dir
    dataset = args.dataset
    data_type = args.data_type
    suffix = args.suffix
    password = args.password
    inst_type = args.inst_type
    itr = args.itr
    freq_change = args.freq_change
    oracle = False
    powercap = False
    papi = False
    benchmark = args.benchmarks
    
    #convert all paths to absolute paths
    kernel_dir = os.path.abspath(kernel_dir)
    build_dir = os.path.abspath(build_dir)
    if powercap_file:
        powercap_file = os.path.abspath(powercap_file)
    
    if not os.path.exists(build_dir):
        os.makedirs(build_dir)
    
    if inst_type == "oracle":
        oracle = True
    elif inst_type == "oracle+powercap":
        oracle = True
        powercap = True
    elif inst_type == "powercap":
        powercap = True
    elif inst_type == "papi":
        papi = True
    else:
        print("Invalid inst_type")
        exit(1)
    
    if inst_type == "papi" and freq_change:
        print("Frequency change not supported with papi")
        exit(1)
    
    if not freq_change:
        exec(machine, powercap_file, kernel_dir, build_dir, dataset, data_type, suffix, password, itr, oracle, powercap, papi, benchmark)
    else:
        available_frequencies = get_available_frequencies(machine, password)
        available_frequencies = sorted(available_frequencies, reverse=True)
        for freq in available_frequencies:
            set_frequency(freq, machine, password)
            exec(machine, powercap_file, kernel_dir, build_dir, dataset, data_type, suffix + f"_{freq}", password, itr, oracle, powercap, papi, benchmark)
    
def exec(machine, powercap_file, kernel_dir, build_dir, dataset, data_type, suffix, password, itr, oracle, powercap, papi, benchmark):
    # First let's capture oracle data
    if oracle and benchmark == "Polybench":
        print("Capturing oracle data")
        # Run the experiments
        oracle_output_dir = setup_oracle_dir_structure(tools_dir=os.curdir, machine_name=machine, suffix=suffix)
        build_dir_oracle = os.path.join(build_dir, "oracle")
        os.makedirs(build_dir_oracle, exist_ok=True)
        mem_fencing_src = os.path.join(kernel_dir, "./PolyBenchC-4.2.1_mem_fencing")
        build_dir_oracle_polybench = build_polybench_kernels_energy_time(src_dir=mem_fencing_src, 
                                                                         build_dir=build_dir_oracle, 
                                                                         dataset=dataset, 
                                                                         data_type=data_type)
        
        oracle_collect_kernels_energy_and_time(build_dir=build_dir_oracle_polybench, output_dir=oracle_output_dir,
                                               machine=machine, num_itr=itr,
                                               suffix=suffix, password=password, sleep=10)
    
    if powercap and benchmark == "Polybench":
        print("Capturing powercap data")
        # Run the experiments
        kernel_data_dir, roofline_data_dir, powercap_data_dir = setup_dir_structure_with_powerCap(tools_dir=os.curdir, 
                                                                                                  machine_name=machine, 
                                                                                                  suffix=suffix,
                                                                                                  PowerCapFolder=True)
        powercap_output_dir = powercap_data_dir
        build_dir_powercap = os.path.join(build_dir, "powercap")
        os.makedirs(build_dir_powercap, exist_ok=True)
        mem_fencing_src = os.path.join(kernel_dir, "./PolyBenchC-4.2.1_mem_fencing")
        
        build_dir_powercap_polybench = build_polybench_kernels_energy_time(src_dir=mem_fencing_src, 
                                                                           build_dir=build_dir_powercap,
                                                                           dataset=dataset,
                                                                           data_type=data_type)
        
        powercap_collect_kernels_energy_and_time(build_dir=build_dir_powercap_polybench, 
                                                 output_dir=powercap_output_dir,
                                                 machine=machine, num_itr=itr,
                                                 suffix=suffix, password=password, sleep=10, powercap_file=powercap_file)
    
    if papi and benchmark == "Polybench":
        print("Capturing papi data")
        # Run the experiments
        kernel_data_dir, roofline_data_dir, powercap_data_dir = setup_dir_structure_with_powerCap(tools_dir=os.curdir, 
                                                                                                  machine_name=machine, 
                                                                                                  suffix=suffix,
                                                                                                  KernelFolder=True)
        
        papi_output_dir = kernel_data_dir
        build_dir_papi = os.path.join(build_dir, "papi")
        os.makedirs(build_dir_papi, exist_ok=True)
        default_verbose_polybench = os.path.join(kernel_dir, "./PolyBenchC-4.2.1")
        
        if machine != "raptorlake":
            configure_polybench(kernel_dir=kernel_dir, src_dir=default_verbose_polybench, machine=machine)
            
            build_dir_papi_polybench = build_polybench_kernels_papi(src_dir=default_verbose_polybench, 
                                                                    build_dir=build_dir_papi, 
                                                                    dataset=dataset, 
                                                                    data_type=data_type)
            
            run_kernels_papi(build_dir=build_dir_papi_polybench, 
                             output_dir=papi_output_dir, 
                             num_iterations=itr, 
                             suffix=suffix, sleep=10, 
                             password=password, 
                             high_performance_cores=False)
        else:
            configure_polybench(kernel_dir=kernel_dir, 
                                src_dir=default_verbose_polybench, 
                                machine=machine, 
                                file="papi_counters_raptorlake_flop.list")
            
            build_dir_papi_polybench = build_polybench_kernels_papi(src_dir=default_verbose_polybench, 
                                                                    build_dir=build_dir_papi, 
                                                                    dataset=dataset, 
                                                                    data_type=data_type)
            
            glc = run_kernels_papi(build_dir=build_dir_papi_polybench, 
                                    output_dir=papi_output_dir, 
                                    num_iterations=itr, 
                                    suffix=suffix + "_glc", sleep=10, 
                                    password=password, 
                                    high_performance_cores=True)
            
            configure_polybench(kernel_dir=kernel_dir, src_dir=default_verbose_polybench, 
                                machine=machine, file="papi_counters_raptorlake_mem.list")
            
            perf = run_kernels_papi(build_dir=build_dir_papi_polybench, 
                                    output_dir=papi_output_dir, 
                                    num_iterations=itr, 
                                    suffix=suffix + "_perf", sleep=10, 
                                    password=password, 
                                    high_performance_cores=False)
            
            #{"dataframe":df,"output_file":csv_name}
            glc_df = glc["dataframe"]
            glc_output_file = glc["output_file"]
            perf_df = perf["dataframe"]
            perf_output_file = perf["output_file"]
            merged_df = pd.merge(glc_df, perf_df, on="Name")
            merged_output_file = os.path.join(papi_output_dir, f"kernel_data_PolyBenchC-4.2.1_{suffix}_merged.csv")
            merged_df.to_csv(merged_output_file, index=False)
            print(f"Saved merged data to {merged_output_file}")
    
    if oracle and benchmark == "MLIR":
        print("Capturing oracle data")
        # Run the experiments
        oracle_output_dir = setup_oracle_dir_structure(tools_dir=os.curdir, machine_name=machine, suffix=suffix + "_mlir")
        build_dir_oracle = os.path.join(build_dir, "oracle_mlir")
        os.makedirs(build_dir_oracle, exist_ok=True)
        mlir_src = os.path.join(kernel_dir, "./MLIR_OpenEarth_BenchMarks/mlir_obj/obj_only")
        build_dir_oracle_mlir = compile_obj_with_instumentation(src_dir=mlir_src, build_dir=build_dir_oracle, inst_type="energy time")
        run_mlir_obj_oracle(build_dir=build_dir_oracle_mlir, output_dir=oracle_output_dir, 
                            machine=machine, 
                            num_itr=itr, 
                            suffix=suffix + "_mlir", 
                            sudo_password=password, sleep=10)
        
    if powercap and benchmark == "MLIR":
        print("Capturing powercap data")
        # Run the experiments
        kernel_data_dir, roofline_data_dir, powercap_data_dir = setup_dir_structure_with_powerCap(tools_dir=os.curdir, 
                                                                                                  machine_name=machine, 
                                                                                                  suffix=suffix + "_mlir",
                                                                                                  PowerCapFolder=True)
        powercap_output_dir = powercap_data_dir
        build_dir_powercap = os.path.join(build_dir, "powercap_mlir")
        os.makedirs(build_dir_powercap, exist_ok=True)
        mlir_src = os.path.join(kernel_dir, "./MLIR_OpenEarth_BenchMarks/mlir_obj/obj_only")
        build_dir_powercap_mlir = compile_obj_with_instumentation(src_dir=mlir_src, build_dir=build_dir_powercap,inst_type="energy time")
        run_mlir_obj_powercap(build_dir=build_dir_powercap_mlir, output_dir=powercap_output_dir, 
                              machine=machine, 
                              num_itr=itr, 
                              suffix=suffix + "_mlir", 
                              sudo_password=password, sleep=10, powercap_file=powercap_file)
    
    if papi and benchmark == "MLIR":
        print("Capturing papi data")
        # Run the experiments
        kernel_data_dir, roofline_data_dir, powercap_data_dir = setup_dir_structure_with_powerCap(tools_dir=os.curdir, 
                                                                                                  machine_name=machine, 
                                                                                                  suffix=suffix + "_mlir",
                                                                                                  KernelFolder=True)
        papi_output_dir = kernel_data_dir
        build_dir_papi = os.path.join(build_dir, "papi_mlir")
        os.makedirs(build_dir_papi, exist_ok=True)
        mlir_src = os.path.join(kernel_dir, "./MLIR_OpenEarth_BenchMarks/mlir_obj/obj_only")
        build_dir_papi_mlir = compile_obj_with_instumentation(src_dir=mlir_src, build_dir=build_dir_papi,inst_type="papi")
        run_mlir_obj_papi(build_dir=build_dir_papi_mlir, output_dir=papi_output_dir, 
                          machine=machine, 
                          num_itr=itr, 
                          suffix=suffix + "_mlir", 
                          sudo_password=password, sleep=10)
    
        

    
    
    

    
    
    
    