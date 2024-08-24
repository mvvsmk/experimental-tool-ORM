#! /usr/bin/env python3

import argparse
import subprocess
import os
import shutil
import pandas
import numpy
import json
import threading
import psutil
import time
from utils_power import run_with_energy_thread, set_power_cap

def parse_args():
    parser = argparse.ArgumentParser(description="Compile and run ML object files created, with instrumentation")
    parser.add_argument('--ml_obj_dir', type=str, required=True, help='ML OBJ DIR')
    parser.add_argument('--build_dir', type=str, required=True, help="Build Folder")
    parser.add_argument('--output_dir', type=str, required=True, help="Output Folder")
    parser.add_argument('--machine', type=str, required=True, help="Machine type")
    # parser.add_argument('')
    

def compile_obj_with_instumentation(build_dir,src_dir,inst_type):
    papi_headers_dir = "kernels/MLIR_OpenEarth_BenchMarks/open-earth-benchmarks/include"
    C_runner = "kernels/MLIR_OpenEarth_BenchMarks/mlir_obj/C_runner.cpp"
    inst_commands = ""
    mlir_libs = "kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/lib"
    mlir_libs = os.path.join(os.curdir,mlir_libs)
    if inst_type == "papi":
        inst_commands = "-DPAPI_OPENEARTH -lpapi"
    else:
        inst_commands = "-DENERGY_TIME_OPENEARTH"

    for file in os.listdir(src_dir):
        if file.endswith(".o"):
            mlir_file = os.path.join(src_dir,file)
            mlir_baseName = os.path.basename(mlir_file)
            mlir_baseName = os.path.splitext(mlir_baseName)[0]
            mlir_baseName = os.path.join(build_dir,mlir_baseName)
            mlir_baseName = mlir_baseName + "_inst"
            compile_command = "gcc -I {papi_headers_dir} {C_runner} {mlir_file} {inst_commands} -lm -ldl -lmlir_c_runner_utils -L {mlir_libs} -o {mlir_baseName}"
            compile_command = compile_command.format(papi_headers_dir=papi_headers_dir,
                                                     C_runner=C_runner,mlir_file=mlir_file,mlir_baseName=mlir_baseName,
                                                     inst_commands=inst_commands,mlir_libs=mlir_libs)
            print(compile_command)
            try:
                subprocess.run(compile_command,shell=True)
            except Exception as e:
                print(f"Exception orrcured while compiling {mlir_file} with instrumentation : {e}")
            # subprocess.run(compile_command,shell=True)
            print(f"Compiled {mlir_file} with instrumentation")
    
    return build_dir

def get_papi_counters(papi_counters_file):
    list_of_papi_counters = []
    with open(papi_counters_file,'r') as f:
        lines = f.readlines()
        for line in lines:
            list_of_papi_counters.append(line.strip().split(",")[0].replace('"',''))
    return list_of_papi_counters

def run_command_and_get_output(command:str,sudo_password:str):
    print(f"running command : {command}")
    try :
        output = subprocess.run(command,shell=True,capture_output=True,check=True,input=sudo_password.encode("utf-8"))
    except Exception as e :
        print(f"Error occured while executing the command : {command} \n\n\n Error / Excception :  {e} \n\n\n")
        exit()
    return output

def run_mlir_obj_papi(papi_counters_file,build_dir,output_dir,suffix,sudo_password,itr = 1):
    mlir_runner_libs = "kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/lib"
    mlir_runner_libs = os.path.join(os.curdir,mlir_runner_libs)
    list_of_papi_counters = get_papi_counters(papi_counters_file)
    output_file = os.path.join(output_dir,f"MODEL_ORACLE_{suffix}.csv")
    output_file_median = os.path.join(output_dir,f"MODEL_ORACLE_{suffix}_median.csv")
    if os.path.isfile(output_file):
        df_old = pandas.read_csv(output_file)
    else :
        df_old = pandas.DataFrame()
    
    print(list_of_papi_counters)
    #initalize an empty list for each counter in the list_of_papi_counters
    data = {}
    for counter in list_of_papi_counters:
        data[counter] = []
    data["Name"] = []
    
    files_run = []
    if os.path.isfile(output_file):
        files_run = df_old["Name"].unique()
        df_old = pandas.read_csv(output_file)
        #iterate through all the unique names in the dataframe
        for name in df_old["Name"].unique():
            itr_count = (df['Name'] == name).sum()
            if itr_count < itr :
                df_old = df_old[df_old["Name"] != name]
                files_run = files_run.remove(name)
            
        data = df_old.to_dict()
    else :
        df_old = None


    
    for file in os.listdir(build_dir):
        # if file.endswith("_inst") and "alexnet" in file:
        if file.endswith("_inst") :
            if df_old.size > 0 :
                already_run = df_old["Name"].unique()
                already_run = [os.path.basename(x) for x in already_run]
                # print(f"already run {already_run}")
                if file in already_run :
                    print(f"already run {file}")
                    continue
            mlir_file = os.path.join(build_dir,file)
            mlir_baseName = os.path.basename(mlir_file)
            mlir_baseName = os.path.splitext(mlir_baseName)[0]
            mlir_baseName = os.path.join(build_dir,mlir_baseName)
            if mlir_baseName in files_run :
                print(f"already run {mlir_baseName}")
                continue
            for i in range(itr):
                file_runs = True
                for counter in list_of_papi_counters:
                    pmu_required = False
                    augment_env = f" LD_LIBRARY_PATH={mlir_runner_libs}:$LD_LIBRARY_PATH LIBRARY_PATH={mlir_runner_libs}:$LIBRARY_PATH "
                    if "::" in counter and "perf" not in counter :
                        PMU = counter.split("::")[0]
                        print(PMU)
                        augment_env = augment_env + f" LIBPFM_FORCE_PMU={PMU} "
                        
                    # exit()
                    #if measure_high :
                    #    augment_env = augment_env + f" LIBPFM_FORCE_PMU=adl_glc "
                    command = f"sudo -S {augment_env} PAPI_EVENT_NAME={counter} taskset -c 0 {mlir_file}"
                    print(f"will run : {command}")
                    # continue
                    try:
                        # output = run_command_and_get_output(command=command,sudo_password=sudo_password)
                        output = subprocess.run(command,shell=True,capture_output=True,input=sudo_password.encode("utf-8"),timeout=28800)
                        output_list = output.stdout.decode().split()
                        print(f"counter {counter} value {output_list[-1]}")
                        data[counter].append(output_list[-1])
                    except Exception as e:
                        print(f"Exception occured while running {mlir_file} with {counter} : {e}")
                        file_runs = False
                        continue
                if file_runs :
                    data["Name"].append(mlir_baseName)
                    print(data)
                    try :
                        df = pandas.DataFrame(data)
                        df.to_csv(output_file)
                    except Exception as e :
                        with open("error.json","w") as error_out:
                            json.dump(df,error_out)
    
    # group the data by the name of the file and take the median of the values
    df = pandas.read_csv(output_file)
    df = df.groupby("Name").median()
    df.to_csv(output_file_median)        
    print(f"Output written to {output_file}")
    print(f"Output median written to {output_file_median}")
    return output_file_median

def run_mlir_obj_oracle(build_dir,output_dir,sudo_password,machine,suffix,power_cap_file = None, sleep_time=10,itr = 1):
    mlir_runner_libs = "kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/lib"
    mlir_runner_libs = os.path.join(os.curdir,mlir_runner_libs)
    
    output_file = os.path.join(output_dir,f"MODEL_ORACLE_{suffix}.csv")
    output_file_median = os.path.join(output_dir,f"MODEL_ORACLE_{suffix}_median.csv")
    data = {
        "Name" : [],
        "Energy(J)" : [],
        "Time(s)" : [],
    }
    list_of_files_to_run = []
    if power_cap_file == None:
        list_of_files_to_run = os.listdir(build_dir)
    else:
        power_cap_df = pandas.read_csv(power_cap_file)
        list_of_files_to_run = list(power_cap_df["Name"].unique())
        # list_of_files_to_run = [os.path.join(build_dir,x) for x in list_of_files_to_run]
    
    print(f"files to run {list_of_files_to_run}")
    
    files_run = []
    if os.path.isfile(output_file):
        df = pandas.read_csv(output_file)
        files_run = df["Name"].unique()
        files_run = [os.path.basename(x) for x in files_run]
        for file in df["Name"].unique():
            itr_count = (df['Name'] == file).sum()
            if itr_count < itr :
                df = df[df["Name"] != file]
                files_run = files_run.remove(file)
        data = {
            "Name" : df["Name"].tolist(),
            "Energy(J)" : df["Energy(J)"].to_list(),
            "Time(s)" : df["Time(s)"].to_list(),
        }
    
    for i, file in enumerate(list_of_files_to_run):
        if file in files_run :
            print(f"already run {file}")
            continue
        mlir_file = os.path.join(build_dir,file)
        mlir_baseName = os.path.basename(mlir_file)
        mlir_baseName = os.path.splitext(mlir_baseName)[0]
        mlir_baseName = os.path.join(build_dir,mlir_baseName)
        for i in range(itr):
            augment_env = f" LD_LIBRARY_PATH={mlir_runner_libs}:$LD_LIBRARY_PATH LIBRARY_PATH={mlir_runner_libs}:$LIBRARY_PATH "
            command = f"sudo -S {augment_env} taskset -c 0 {mlir_file}"
            print(f"will run : {command}")
            reading = run_with_energy_thread(command=command,password=sudo_password,machine=machine)
            data["Name"].append(file)
            data["Energy(J)"].append(reading["Energy Reading"])
            data["Time(s)"].append(reading["Time Reading"])
            df = pandas.DataFrame(data)
            df.to_csv(output_file,index=False)
    
    print(f"oracle collected in file {output_file}")
    #take median group by name
    df = pandas.read_csv(output_file)
    df = df.groupby("Name").median()
    df.to_csv(output_file_median)
    print(f"oracle collected in file {output_file_median}")

def run_mlir_obj_powercap(build_dir,output_dir,sudo_password,powercap_file,machine,suffix="",itr = 1):
    mlir_runner_libs = "kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/lib"
    mlir_runner_libs = os.path.join(os.curdir,mlir_runner_libs)
    data = {
        "Name" : [],
        "PowerCap(W)" : [],
        "Energy(J)" : [],
        "Time(s)" : [],
    }
    list_of_files_to_run = []
    output_file = os.path.join(output_dir,f"MODEL_ORACLE_{suffix}.csv")
    output_file_median = os.path.join(output_dir,f"MODEL_ORACLE_{suffix}_median.csv")
    power_cap_df = pandas.read_csv(powercap_file)
    list_of_files_to_run = list(power_cap_df["Name"].unique())
    
    print(f"files to run {list_of_files_to_run}")
    
    files_run = []
    if os.path.isfile(output_file):
        df = pandas.read_csv(output_file)
        files_run = df["Name"].unique()
        files_run = [os.path.basename(x) for x in files_run]
        for file in df["Name"].unique():
            itr_count = (df['Name'] == file).sum()
            if itr_count < itr :
                df = df[df["Name"] != file]
                files_run = files_run.remove(file)
        data = df.to_dict()
    
    # for i, file in enumerate(list_of_files_to_run):
    for index, row in power_cap_df.iterrows():
        if row["Name"] in files_run :
            print(f"already run {row['Name']}")
            continue
        for i in range(itr):
            power_cap = row[machine]
            # if power cap is NC
            if power_cap == "NC" or (type(power_cap) is str and power_cap[0].isalpha()):
                data["Name"].append(row["Name"])
                data["Energy(J)"].append(0)
                data["Time(s)"].append(0)
                data["PowerCap(W)"].append(0)
                df = pandas.DataFrame(data)
                df.to_csv(output_file,index=False)
                continue
            powercap_uW = power_cap * 1000000
            set_power_cap(power_cap=powercap_uW,sudo_password=sudo_password)
            mlir_file = os.path.join(build_dir,row["Name"])
            mlir_baseName = os.path.basename(mlir_file)
            mlir_baseName = os.path.splitext(mlir_baseName)[0]
            mlir_baseName = os.path.join(build_dir,mlir_baseName)
            augment_env = f" LD_LIBRARY_PATH={mlir_runner_libs}:$LD_LIBRARY_PATH LIBRARY_PATH={mlir_runner_libs}:$LIBRARY_PATH "
            command = f"sudo -S {augment_env} {mlir_file}"
            print(f"will run : {command}")
            reading = run_with_energy_thread(command=command,password=sudo_password,machine=machine)
            data["Name"].append(row["Name"])
            data["Energy(J)"].append(reading["Energy Reading"])
            data["Time(s)"].append(reading["Time Reading"])
            data["PowerCap(W)"].append(power_cap)
            df = pandas.DataFrame(data)
            df.to_csv(output_file,index=False)
    
    print(f"Result collected in file {output_file}")
    #group by name and take median
    df = pandas.read_csv(output_file)
    df = df.groupby("Name").median()
    df.to_csv(output_file_median)

if __name__ == "__main__" :
    # parse_args()

# -------------------- papi ------------------------------------------------------------------------------------------------
    # papi_counters_file = "papi_counters_raptorlake.txt"
    # # print(get_papi_counters(papi_counters_file))
    # # exit()
    # build_dir = "./build"
    # src_dir = "mlir_obj/obj_only"
    # inst_type = "papi"
    # build_dir = os.path.abspath(build_dir)
    # src_dir = os.path.abspath(src_dir)
    # if os.path.exists(build_dir):
    #     shutil.rmtree(build_dir)
    # os.mkdir(build_dir)
    # compile_obj_with_instumentation(build_dir,src_dir,inst_type)
    # run_mlir_obj_papi(papi_counters_file,build_dir,output_file="MODEL_ORACLE1.csv",sudo_password="1234",measure_high=True)
# -------------------- papi ------------------------------------------------------------------------------------------------
# -------------------- oracle ------------------------------------------------------------------------------------------------
    build_dir = "./build"
    src_dir = "mlir_obj/obj_only"
    inst_type = "energy_time"
    build_dir = os.path.abspath(build_dir)
    src_dir = os.path.abspath(src_dir)
    if os.path.exists(build_dir):
        shutil.rmtree(build_dir)
    os.mkdir(build_dir)
    compile_obj_with_instumentation(build_dir,src_dir,inst_type)
    run_mlir_obj_oracle(build_dir=build_dir,output_file="MODEL_ORACLE1.csv",
                        sudo_password="1234",power_cap_file=os.path.join(os.curdir,"./Powercaps.csv"),
                        machine='raptorlake')
# -------------------- oracle ------------------------------------------------------------------------------------------------
# -------------------- Powercap ------------------------------------------------------------------------------------------------
    build_dir = "./build"
    src_dir = "mlir_obj/obj_only"
    inst_type = "energy_time"
    build_dir = os.path.abspath(build_dir)
    src_dir = os.path.abspath(src_dir)
    if os.path.exists(build_dir):
        shutil.rmtree(build_dir)
    os.mkdir(build_dir)
    compile_obj_with_instumentation(build_dir,src_dir,inst_type)
    run_mlir_obj_powercap(build_dir=build_dir,output_file="MODEL_POWERCAP1.csv",
                        sudo_password="1234",power_cap_file=os.path.join(os.curdir,"./Powercaps.csv"),
                        machine='raptorlake')
# -------------------- Powercap ------------------------------------------------------------------------------------------------
