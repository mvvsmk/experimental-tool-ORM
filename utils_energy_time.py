import os
import pandas as pd
import time
from utils_power import run_with_energy_thread, set_power_cap

def run_kernels_energy_and_time(file_to_run,password,machine):
    command = f"echo {password} | sudo -S taskset -c 0 {file_to_run}"
    reading = run_with_energy_thread(command,password,machine)
    print(f"Ran {file_to_run}")
    time_reading = reading["Time Reading"]            
    energy_reading = reading["Energy Reading"]
    print(f"Energy: {energy_reading}")
    print(f"Time: {time_reading}")
    if "File Run" in reading:
        if reading["File Run"] == False:
            print("Error in running the file")
            return 0,0
    
    return energy_reading, time_reading
    
def oracle_collect_kernels_energy_and_time(build_dir, output_dir, machine, num_itr, suffix, password, sleep) :
    data ={
        "Name" : [],
        "Energy(J)" : [],
        "Time(s)" : []
    }
    
    os.makedirs(output_dir, exist_ok=True)
    
    output_csv = os.path.join(output_dir, f"oracle_polybench_{machine}_{suffix}.csv")
    output_csv_median = os.path.join(output_dir, f"oracle_polybench_{machine}_{suffix}_median.csv")
    
    df_prev = None
    if os.path.exists(output_csv):
        df_prev = pd.read_csv(output_csv)
        data = {
            "Name" : df_prev["Name"].values.tolist(),
            "Energy(J)" : df_prev["Energy(J)"].values.tolist(),
            "Time(s)" : df_prev["Time(s)"].values.tolist()
        }
    
    for i, file in enumerate(os.listdir(build_dir)):
        run_itr = num_itr
        if df_prev is not None and file in df_prev["Name"].values:
            run_itr = num_itr - df_prev[df_prev["Name"] == file].shape[0]
        
        for j in range(run_itr):
            binary_file = os.path.join(build_dir, file)
            time.sleep(sleep)
            energy_r, time_r = run_kernels_energy_and_time(file_to_run=binary_file,
                                                                 password=password,
                                                                 machine=machine)
            data["Name"].append(file)
            data["Energy(J)"].append(energy_r)
            data["Time(s)"].append(time_r)
            print(f"Ran {file} {j+1} times")
            df = pd.DataFrame(data)
            df.to_csv(output_csv, index=False)
            
    print(f"Saved {output_csv}")
    # Calculate the median and group by the name
    df = pd.read_csv(output_csv)
    df_median = df.groupby("Name").median().reset_index()
    df_median.to_csv(output_csv_median, index=False)
    print(f"Saved {output_csv_median}")
    return output_csv, output_csv_median
            
def powercap_collect_kernels_energy_and_time(build_dir, output_dir,
                                                       machine, num_itr, suffix,
                                                       password, sleep,powercap_file) :
    data ={
        "Name" : [],
        "Power Cap(W)" : [],
        "Energy(J)" : [],
        "Time(s)" : []
    }
    
    os.makedirs(output_dir, exist_ok=True)
    
    output_csv = os.path.join(output_dir, f"powercap_{machine}_{suffix}.csv")
    output_csv_median = os.path.join(output_dir, f"powercap_{machine}_{suffix}_median.csv")
    
    df_prev = None
    if os.path.exists(output_csv):
        df_prev = pd.read_csv(output_csv)
        data = {
            "Name" : df_prev["Name"].values.tolist(),
            "Energy(J)" : df_prev["Energy(J)"].values.tolist(),
            "Time(s)" : df_prev["Time(s)"].values.tolist()
        }
    
    df_power_caps = pd.read_csv(powercap_file)
    
    for i, file in enumerate(os.listdir(build_dir)):
        run_itr = num_itr
        powercap = df_power_caps[df_power_caps["Benchmarks"] == file][machine].values[0]
        set_power_cap(powercap, password)
        
        if df_prev is not None and file in df_prev["Name"].values:
            run_itr = num_itr - df_prev[df_prev["Name"] == file].shape[0]
        
        if run_itr == 0:
            continue
        
        for j in range(run_itr):
            binary_file = os.path.join(build_dir, file)
            time.sleep(sleep)
            energy_r, time_r = run_kernels_energy_and_time(file_to_run=binary_file,
                                                                 password=password,
                                                                 machine=machine)
            data["Name"].append(file)
            data["Energy(J)"].append(energy_r)
            data["Time(s)"].append(time_r)
            print(f"Ran {file} {j+1} times")
            df = pd.DataFrame(data)
            df.to_csv(output_csv, index=False)
            
    print(f"Saved {output_csv}")
    # Calculate the median and group by the name
    df = pd.read_csv(output_csv)
    df_median = df.groupby("Name").median().reset_index()
    df_median.to_csv(output_csv_median, index=False)
    print(f"Saved {output_csv_median}")
    return output_csv, output_csv_median
