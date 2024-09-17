#! /usr/bin/env python3

import os
import pandas as pd

def split_by_file_name(mega_df):
    
    bytes_df = mega_df[mega_df['File Name'].str.contains('main_0')]
    flops_df = mega_df[mega_df['File Name'].str.contains('main_inf')]
    
    print("Successfully created 'bytes.csv' and 'flops.csv'")
    return flops_df, bytes_df

def split_by_cache_level(mega_df):
    cache_levels = ['L1D', 'L2', 'L3', 'DRAM']
    data = {}
    for level in cache_levels:
        # Filter rows that match the current cache level
        level_df = mega_df[mega_df['cache_level'] == level]
        
        # Save each cache level to its respective CSV file
        output_file = f'{level}.csv'
        data[level] = level_df
        # level_df.to_csv(output_file, index=False)
    return data
    # print(f"Successfully created CSV files for {', '.join(cache_levels)}")

def create_mega_csv(base_folder="/home/achilles/code/experimental-tool-ORM/plotting_utils/temp_res/energy_results/08Sep/raptorlake_multiple_roofline/fma_avx_300_itr10_sleep1_176"):
    # Initialize an empty DataFrame to store all CSV data
    mega_df = pd.DataFrame()
    
    # Walk through the base folder recursively
    for root, dirs, files in os.walk(base_folder):
        for file in files:
            # Only process CSV files and exclude files with "constants" in the name
            if file.endswith('.csv') and 'constants' not in file.lower():
                # Construct the full file path
                file_path = os.path.join(root, file)
                
                # Read the CSV file into a DataFrame
                try:
                    csv_df = pd.read_csv(file_path)
                    
                    # Append the DataFrame rows to the mega_df
                    mega_df = pd.concat([mega_df, csv_df], ignore_index=True)
                
                except Exception as e:
                    print(f"Error reading {file_path}: {e}")
    
    mega_df['total_flops'] = 4 * mega_df['total_flops']
    mega_df['Frequency(kHz)'] = mega_df['Frequency(kHz)'] / 1000_000 
    mega_df['Bandwidth'] = mega_df['total_missed_bytes'] / mega_df['Execution Time(s)']
    mega_df['Performance'] = mega_df['total_flops'] / mega_df['Execution Time(s)']
    mega_df['Time per flop'] = mega_df['Execution Time(s)'] / mega_df['total_flops']
    mega_df['Time per byte'] = mega_df['Execution Time(s)'] / mega_df['total_missed_bytes']
    mega_df['Energy per flop'] = mega_df['Energy(J)'] / mega_df['total_flops']
    mega_df['Energy per byte'] = mega_df['Energy(J)'] / mega_df['total_missed_bytes']
    mega_df['Peak Power flop'] = mega_df['Power(W)'] / mega_df['total_flops']
    mega_df['Peak Power byte'] = mega_df['Power(W)'] / mega_df['total_missed_bytes']
    mega_df['Time Balance'] = mega_df['Time per byte'] / mega_df['Time per flop']
    mega_df['Energy Balance'] = mega_df['Energy per byte'] / mega_df['Energy per flop']

    # get all the unique names of the files
    list_of_files = mega_df['File Name'].unique()
    list_of_intensities = [x.split('_')[1] for x in list_of_files]
    min_intensity = 0
    if "main_0" in list_of_files:
        min_intensity = 0
    else:
        min_intensity = 1
    
    if "inf" in list_of_intensities:
        # remove all entries with except main_inf and main_0
        mega_df = mega_df[mega_df['File Name'].str.contains(f'main_inf|main_{min_intensity}')]
    else:
        list_of_intensities = [int(x) for x in list_of_intensities]
        list_of_intensities.sort()
        max_intensity = list_of_intensities[-1]
        # remove all entries with except main_max_intensity and main_0
        mega_df = mega_df[mega_df['File Name'].str.contains(f'main_{max_intensity}|main_{min_intensity}')]
    
    list_of_frequencies = mega_df['Frequency(kHz)'].unique()
    list_of_caches = mega_df['cache_level'].unique()

    balance_Data = {
        "Frequency(kHz)": [],
        "cache_level": [],
        "Time Balance": [],
        "Energy Balance": []
    }
    
    for freq in list_of_frequencies:
        subset_1 = mega_df[mega_df['Frequency(kHz)'] == freq]
        for cache in list_of_caches:
            subset_2 = subset_1[subset_1['cache_level'] == cache]
            balance_Data["Frequency(kHz)"].append(freq)
            balance_Data["cache_level"].append(cache)
            time_per_byte =0
            time_per_flop = 0
            energy_per_byte = 0
            energy_per_flop = 0
            print(f"Frequency: {freq} Cache: {cache}")
            for index, row in subset_2.iterrows():
                print(row['File Name'])
                if "main_0" in row['File Name']:
                    print(f"row {row['File Name']} , total_flops {row['total_flops']} , total_missed_bytes {row['total_missed_bytes']} , Execution Time(s) {row['Execution Time(s)']} ")
                    time_per_byte = row['Time per byte']
                    energy_per_byte = row['Energy per byte']
                else:
                    print(f"row {row['File Name']} , total_flops {row['total_flops']} , total_missed_bytes {row['total_missed_bytes']} , Execution Time(s) {row['Execution Time(s)']} ")
                    time_per_flop = row['Time per flop']
                    energy_per_flop = row['Energy per flop']
            print(f"Time per byte: {time_per_byte} Time per flop: {time_per_flop}")
            print(f"Energy per byte: {energy_per_byte} Energy per flop: {energy_per_flop}")
        
            balance_Data["Time Balance"].append(time_per_byte/time_per_flop)
            balance_Data["Energy Balance"].append(energy_per_byte/energy_per_flop)
    balance_df = pd.DataFrame(balance_Data)
    # sort by frequency
    balance_df = balance_df.sort_values(by=['Frequency(kHz)'])
    # balance_df.to_csv("balance.csv", index=False)
    # exit(0)

    # mega_df.to_csv("mega.csv", index=False)
    # print(f"Successfully created the mega CSV file at: {output_file}")
    print("combinded data frame created")
    return mega_df, balance_df


