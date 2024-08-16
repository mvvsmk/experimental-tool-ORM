#! /usr/bin/env python3
from energy_validate import make_benchmarks,read_output,read_output_pmu_high_power,set_frequency,get_energy_multiplication_factor
import os
import pandas as pd
import numpy as np
import time
import shutil
import subprocess
import argparse

def parse_args():
    parser = argparse.ArgumentParser(description='Rerun benchmarks')
    parser.add_argument('--sudo_password', required=True,type=str, help='Sudo password for the system')
    parser.add_argument('--build_dir', required=True,type=str, help='Directory to build the benchmarks')
    parser.add_argument('--source_dir', required=True,type=str, help='Directory containing the source code')
    parser.add_argument('--res_dir', required=True,type=str, help='Directory to pick the results from')
    parser.add_argument('--high_power', required=True,type=bool, help='Flag to indicate if high power mode is enabled')
    parser.add_argument('--machine', required=True,type=str, help='Machine type')
    return parser.parse_args()

def rerun_benchmarks(sudo_password,
                        file_to_run,
                        zzz,
                        energy_mul,
                        high_power,
                        machine,
                        itr=3) -> None:
    energy_readings = []
    readings = {}
    file = file_to_run
    for i in range(itr):
        data = {
                "Frequency(kHz)" : [],
                "Execution Time(s)" : [],
                "Energy(J)" : [],
                "Power(W)" : [],
                "total_flops" : [],
                "total_missed_bytes" : [],
                "OI" : [],
                }    
        time.sleep(zzz)
        sucess = False
        while(not sucess):
            count = 0
            filename = file
            while True:
                # manual_energy_init = read_msr(1553)
                if machine  == "raptorlake" :
                    if high_power:
                        output_list = read_output_pmu_high_power(filename=filename,sudo_password=sudo_password)
                    else:
                        output_list = read_output(filename=filename,sudo_password=sudo_password)
                else :
                    output_list = read_output(filename=filename,sudo_password=sudo_password)
                # manual_energy_end = read_msr(1553)
                if output_list != []:
                    break
                count += 1
                if count > 10:
                    print(f"Error: Running the file {filename}")
                    exit()
                    break
                time.sleep(zzz)

            if len(output_list) == 0:
                print(f"Error: output_list is empty for {filename}")
                continue
            
            print(f"output_file : {filename}")

            execution_time = float(output_list[-9])
            Energy = float(output_list[-4]) * energy_mul
            
            if Energy > 0  :
                sucess = True
            else:
                print("Energy is less than 0")
                continue
        
        Energy = float(output_list[-4]) * energy_mul
        execution_time = float(output_list[-9])
        Power = Energy / execution_time
        OI = float(output_list[-3])
        total_flops = float(output_list[-2])
        total_missed_bytes = float(output_list[-1])

        data["Execution Time(s)"].append(execution_time)
        data["Energy(J)"].append(Energy)
        data["Power(W)"].append(Power)
        data["total_flops"].append(total_flops)
        data["total_missed_bytes"].append(total_missed_bytes)
        data["OI"].append(OI)

        energy_readings.append(Energy)
        readings[Energy] = data
        print(f"data collected is \n {data}")

    median_energy = np.median(Energy)
    data = readings[median_energy]

    return data

def build_benchmark(build_dir,source_dir,MAD_PER_ELEMENT) -> dict:

    # clear contents of build directory
    if os.path.exists(build_dir):
        shutil.rmtree(build_dir)
        print(f"Deleted old {build_dir}")
        os.makedirs(build_dir)
        print(f"Created {build_dir}")
    
    make_benchmarks(build_dir,source_dir,MAD_PER_ELEMENT)
    return os.path.join(build_dir,f"main_{MAD_PER_ELEMENT}")

    
    
def extract_frequency_list_GHz_ORM(files):
    list_of_frequencies = [os.path.basename(x).split('_')[-1].split('kHz')[0] for x in files]
    list_of_frequencies = [float(x)/1000_000 for x in list_of_frequencies]
    return list_of_frequencies


if __name__ == "__main__":
    
    args = parse_args()
    sudo_password = args.sudo_password
    build_dir = args.build_dir
    source_dir = args.source_dir
    high_power = args.high_power
    machine = args.machine
    res_dir = args.res_dir
    
    #check if source directory is absolute
    if not os.path.isabs(source_dir):
        source_dir = os.path.abspath(source_dir)
    if not os.path.isabs(build_dir):
        build_dir = os.path.abspath(build_dir)
    if not os.path.isabs(res_dir):
        res_dir = os.path.abspath(res_dir)
    
    
    dir =res_dir

    csv_files = [os.path.join(dir,x) for x in os.listdir(dir) if x.endswith('.csv') and x.startswith('a_roofline')]

    plot_data = []

    frequency_line = {}
    # temp_path = '/home/compact/Manoj/New_itr/energy_results/16Jul/raptorlake/fma_avx_300'
    
    frequency_list = extract_frequency_list_GHz_ORM(csv_files)

    MAD_PER_ELEMENT_values = np.logspace(0,3,40,base=10).astype(int)
    test = set(MAD_PER_ELEMENT_values)
    MAD_PER_ELEMENT_values = list(test)
    MAD_PER_ELEMENT_values.sort()

    for i,file in enumerate(csv_files):
        
        time.sleep(60)        
        consecutive_diff = 0
        frequency = os.path.basename(file).split('_')[-1].split('kHz')[0]
        # if frequency != "2700000" :
        #     continue
        print(f"Frequency is {frequency}")
        set_frequency(frequency=frequency,sudo_password=sudo_password)
        # print(file)
        df = pd.read_csv(file)
        rows = len(df['Power(W)'])-1
        idx_list = []
        #iterate through the dataframe and see if the difference between consecutive elements is greater than 1 for the 'Power(W)' column
        for idx, row in df.iterrows():
            # compute slopes for all the elements slops here are the difference between consecutive element's power 
            # devided by the difference between consecutive element's oi
            if idx == 0:
                continue
            else:
                oi_diff = df['OI'][idx] - df['OI'][idx-1]
                power_diff = df['Power(W)'][idx] - df['Power(W)'][idx-1]
                if oi_diff == 0:
                    oi_diff = 1
                slope = power_diff / oi_diff
                if slope > 0.8 or slope < -0.8:
                    idx_list.append(idx)
                    idx_list.append(idx - 1)
                    idx_list.append(idx + 1)
                    run_file = build_benchmark(build_dir,source_dir,MAD_PER_ELEMENT_values[i])
                    rerun_data = rerun_benchmarks(sudo_password=sudo_password,file_to_run=run_file,
                                                high_power=high_power,
                                                machine=machine,zzz=5,
                                                energy_mul=get_energy_multiplication_factor(machine),
                                                itr=1)
                    print(f"idx {idx}, OI : {df['OI'][idx]}, Power : {df['Power(W)'][idx]} ,Power diff {power_diff} , OI diff {oi_diff} , slope {slope},")
                    df.loc[idx, ["Execution Time(s)"]] = rerun_data["Execution Time(s)"]
                    df.loc[idx, ["Energy(J)"]] = rerun_data["Energy(J)"]
                    df.loc[idx, ["Power(W)"]] = rerun_data["Power(W)"]
                    df.loc[idx,["total_flops"]] = rerun_data["total_flops"]
                    df.loc[idx,["total_missed_bytes"]] = rerun_data["total_missed_bytes"]
                    df.loc[idx,["OI"]] = rerun_data["OI"]
            
        dir = os.path.dirname(file)
        basename = os.path.basename(file)
        df.to_csv(file,index=False)

    print(f"All files have been updated for {machine} machine in folder {dir}")