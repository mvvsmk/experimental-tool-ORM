import os
import pandas as pd
import time
from utils_freq import reset_frequency, reset_uncore_freq_intel, set_frequency, set_max_uncore_freq_intel
from utils_power import run_with_energy_thread, set_power_cap, make_session_set_powercap, make_session_reset_powercap

def run_kernels_energy_and_time(file_to_run,password,machine,is_multicore=False):
    if is_multicore:
        command = f"echo {password} | sudo -S {file_to_run}"
    else:
        command = f"echo {password} | sudo -S taskset -c 0 {file_to_run}"
    reading = run_with_energy_thread(command,password,machine,is_multicore)
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
    
def oracle_collect_kernels_energy_and_time(build_dir, output_dir, machine, num_itr, suffix, password, sleep, is_multicore=False) :
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
                                                                 machine=machine,is_multicore=is_multicore)
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
                                                       password, sleep,powercap_file,is_multicore=False) :
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
            "Time(s)" : df_prev["Time(s)"].values.tolist(),
            "Power Cap(W)" : df_prev["Power Cap(W)"].values.tolist()
        }
    
    df_power_caps = pd.read_csv(powercap_file)
    
    for i, file in enumerate(os.listdir(build_dir)):
        run_itr = num_itr
        # print(df_power_caps[df_power_caps["Benchmarks"] == file])
        # exit()
        powercap = df_power_caps[df_power_caps["Benchmarks"] == file][machine].values[0]
        if powercap == "NC" or (type(powercap) is str and powercap[0].isalpha()):
            data["Name"].append(file)
            data["Energy(J)"].append(0)
            data["Time(s)"].append(0)
            data["Power Cap(W)"].append(0)
            df = pd.DataFrame(data)
            df.to_csv(output_csv,index=False)
            continue
        
        powercap = float(powercap)
        powercap_uW = powercap * 1000_000
        print(f"powercap :{powercap}")
        print(f"powercap uW :{powercap_uW}")
        # set_power_cap(powercap, password)
                    # if power cap is NC
        
        if machine != "zen3":
            set_power_cap(power_cap=powercap_uW,sudo_password=password)
        else :
            print(f"setting it to {int(powercap)}")
            make_session_reset_powercap(default_powercap=76)
            make_session_set_powercap(powercap=int(powercap),default_powercap=76)
            
        if df_prev is not None and file in df_prev["Name"].values:
            run_itr = num_itr - df_prev[df_prev["Name"] == file].shape[0]
        
        if run_itr == 0:
            continue
        
        for j in range(run_itr):
            binary_file = os.path.join(build_dir, file)
            time.sleep(sleep)
            energy_r, time_r = run_kernels_energy_and_time(file_to_run=binary_file,
                                                                 password=password,
                                                                 machine=machine,is_multicore=is_multicore)
            data["Name"].append(file)
            data["Energy(J)"].append(energy_r)
            data["Time(s)"].append(time_r)
            data["Power Cap(W)"].append(powercap)
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

def core_uncore_collect_kernels_energy_and_time(build_dir, output_dir, 
                                             machine, num_itr, suffix, 
                                             password, sleep,core_uncore_csv,
                                             is_multicore=False) :
    # ensure output_dir are made
    os.makedirs(output_dir, exist_ok=True)
    
    # create output csv files path
    output_csv = os.path.join(output_dir, f"core_uncore_polybench_{machine}_{suffix}.csv")
    output_csv_median = os.path.join(output_dir, f"core_uncore_polybench_{machine}_{suffix}_median.csv")

    # set data from csv file if it already exists
    data ={
        "Name" : [],
        "CoreFreq" : [],
        "UncoreFreq" : [],
        "Energy(J)" : [],
        "Time(s)" : []
    }
    if os.path.exists(output_csv):
        df_prev = pd.read_csv(output_csv)
        data = {
            "Name" : df_prev["Name"].values.tolist(),
            "CoreFreq" : df_prev["CoreFreq"].values.tolist(),
            "UncoreFreq" : df_prev["UncoreFreq"].values.tolist(),
            "Energy(J)" : df_prev["Energy(J)"].values.tolist(),
            "Time(s)" : df_prev["Time(s)"].values.tolist()
        }
    # run all executables inside the build directory
    for _i, executable in enumerate(os.listdir(build_dir)):
        run_itr = num_itr
        if executable in data["Name"]:
            run_itr = num_itr - len(data["Name"])

        # read core and uncore frequecies from the csv file
        dataframe_core_uncore = pd.read_csv(core_uncore_csv, index_col=0)
        # set core frequency
        core_freq = dataframe_core_uncore.loc[executable]['CoreFreq']
        set_frequency(sudo_password=password, frequency=core_freq)
        # set uncore frequency
        uncore_freq = dataframe_core_uncore.loc[executable]['UncoreFreq']
        set_max_uncore_freq_intel(frequency=uncore_freq,password=password)
        for j in range(run_itr):
            binary_file = os.path.join(build_dir, executable)
            time.sleep(sleep)
            energy_r, time_r = run_kernels_energy_and_time(file_to_run=binary_file,
                                                                 password=password,
                                                                 machine=machine,is_multicore=is_multicore)
            data["Name"].append(executable)
            data["CoreFreq"].append(core_freq)
            data["UncoreFreq"].append(uncore_freq)
            data["Energy(J)"].append(energy_r)
            data["Time(s)"].append(time_r)
            print(f"Ran {executable} {j+1} times")
            df = pd.DataFrame(data)
            df.to_csv(output_csv, index=False)
    #reset core and uncore frequecies
    reset_frequency(sudo_password=password)
    reset_uncore_freq_intel(password=password)

    print(f"Saved {output_csv}")
    # Calculate the median and group by the name
    df = pd.read_csv(output_csv)
    df_median = df.groupby("Name").median().reset_index()
    df_median.to_csv(output_csv_median, index=False)
    print(f"Saved {output_csv_median}")
    return output_csv, output_csv_median
