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
from concurrent.futures import ThreadPoolExecutor

from utils_freq import reset_frequency, reset_uncore_freq_intel, set_frequency, set_max_uncore_freq_intel, set_frequency_cap
# from utils_power import run_without_energy_thread, set_power_cap, make_session_set_powercap, make_session_reset_powercap

def run_without_energy_thread(command : str, password : str, machine : str) -> dict:
    try :
        output = subprocess.run(command, shell=True, check=True,
                                capture_output=True,timeout=28800,input=password.encode('utf-8'))
    except Exception as e :
        print(e)
        print(f"error in running the command {command}")
        return {
        "Time Reading" : 0,
        "Energy Reading" : 0,
        "File Run" : False
        }

    print(f"Ran {command}")
    print(output.stdout.decode('utf-8'))
    output_list = output.stdout.decode('utf-8').split("\n")
    output_list = [x for x in output_list if x != '']
    time_reading = float(output_list[-4])
    energy_reading = float(output_list[-5])
    return {
        "Time Reading" : time_reading,
        "Energy Reading" : energy_reading,
        "File Run" : True
    }


def convert_to_ll(source_file, 
                  output_file,
                  mlir_opt_path = 'kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/bin/mlir-opt',
                  mlir_translate_path = 'kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/bin/mlir-translate'):
    # Run the mlir-opt command to convert the input file to LLVM IR
    """
    kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/bin/mlir-opt --lower-affine --expand-strided-metadata  --convert-scf-to-cf --convert-cf-to-llvm --llvm-request-c-wrappers  --convert-func-to-llvm --normalize-memrefs --memref-expand --finalize-memref-to-llvm --reconcile-unrealized-casts --llvm-legalize-for-export ../../squeezenet1_0.mlir | /home/intern24005/code/compiler_builds/mlir_test_build/bin/mlir-translate --mlir-to-llvmir > squeezenet1_0.ll
    """
    # mlir_opt_path = os.path.abspath(mlir_opt_path)
    # mlir_translate_path = os.path.abspath(mlir_translate_path)
    mlir_flags = '--lower-affine --expand-strided-metadata  --convert-scf-to-cf --convert-cf-to-llvm --convert-math-to-llvm --llvm-request-c-wrappers  --convert-func-to-llvm --normalize-memrefs --memref-expand --finalize-memref-to-llvm --reconcile-unrealized-casts --llvm-legalize-for-export'
    command = f"{mlir_opt_path} {mlir_flags} {source_file} | {mlir_translate_path} --mlir-to-llvmir > {output_file}"
    # command = f"cat {source_file} | {mlir_translate_path} --mlir-to-llvmir > {output_file}"
    print(command)
    try:
        subprocess.run(command, shell=True, check=True)
    except subprocess.CalledProcessError as e:
        print(f"Erorr: {e} while running command: {command}")
    return output_file

def convert_to_obj(source_file,
                   output_file,
                   llc_path = 'kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/bin/llc'):
    # Run the llc command to convert the input file to an object file
    """
    kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/bin/llc -filetype=obj -march=x86_64-linux-gnu squeezenet1_0.ll -o squeezenet1_0.o
    """
    llc_flags = '-filetype=obj --relocation-model=pic'
    command = f"{llc_path} {llc_flags} {source_file} -o {output_file}"
    try :
        subprocess.run(command, shell=True, check=True)
        os.remove(source_file)
    except subprocess.CalledProcessError as e:
        print(f"Erorr: {e} while running command: {command}")
    return output_file

def compile_multiple_files(path_to_file, path_to_ll_file, path_to_obj_file,lbench_path):
    #convert the file to llvm ir
    mlir_libs = "kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/lib"
    mlir_libs = os.path.join(os.curdir,mlir_libs)
    ll_file = convert_to_ll(path_to_file, path_to_ll_file)
    convert_to_obj(ll_file, path_to_obj_file)
    print(f"Compiled {path_to_file} to {path_to_obj_file}")
    '''g++ ./resnet18_mod_org.o  -lm -ldl -lmlir_c_runner_utils -L ./experimental-tool-ORM/kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/lib -L. -lbench -o resnet18_mod_org'''
    command = f"g++ {path_to_obj_file} -lm -ldl -lmlir_c_runner_utils -L {mlir_libs} -L{lbench_path} -lbench -o {path_to_obj_file.split('.')[0]}.mlir.exec"
    try:
        subprocess.run(command, shell=True, check=True)
    except subprocess.CalledProcessError as e:
        print(f"Erorr: {e} while running command: {command}")

    
def compile_to_object_from_mlir(path_to_folder_with_mlir_files,path_to_obj_folder):
    #iterate through all the files in the mlir folder
    libbenchpath = make_bench_lib(path_to_obj_folder)
    with ThreadPoolExecutor(max_workers=6) as executor:
        for file in os.listdir(path_to_folder_with_mlir_files):
            if file.endswith(".mlir"):
                file_name = os.path.basename(file).split(".")[0]
                
                output_file = os.path.join(path_to_obj_folder, file_name + ".o")
                ll_file = os.path.join(path_to_obj_folder, file_name + ".ll")
                executor.submit(compile_multiple_files, os.path.join(path_to_folder_with_mlir_files, file), ll_file, output_file, libbenchpath)

def make_bench_lib(build_dir):
    #compile command g++ -c run_bench.cpp -o run_bench.o
    #ar command ar rcs libbench.a run_bench.o
    output_dir = f"{build_dir}/lib"
    os.makedirs(output_dir,exist_ok=True)
    output_lib = f"{build_dir}/lib/libbench.a"
    output_object = f"{build_dir}/lib/run_bench.o"
    
    # if ouputlib file or output object file exists then delete them
    if os.path.isfile(output_lib):
        os.remove(output_lib)
    if os.path.isfile(output_object):
        os.remove(output_object)
    
    run_bench_cpp = f"kernels/libbench_files/run_bench.cpp"
    run_bench_cpp = os.path.join(os.curdir,run_bench_cpp)
    output_lib = os.path.relpath(output_lib,os.curdir)
    output_object = os.path.relpath(output_object,os.curdir)
    
    try:
        command = f"g++ -c {run_bench_cpp} -o {output_object}"
        subprocess.run(command, shell=True, check=True)
        command = f"ar rcs libbench.a run_bench.o"
        subprocess.run(command, shell=True, check=True,cwd=output_dir)
    except subprocess.CalledProcessError as e:
        print(f"Erorr: {e} while running command: {command}")
    return os.path.abspath(output_dir)


def run_mlir_obj_static_cap(build_dir,output_dir,sudo_password,machine,suffix="",itr = 1):

    mlir_runner_libs = "kernels/MLIR_OpenEarth_BenchMarks/mlir_build/llvm-project/build/lib"
    mlir_runner_libs = os.path.join(os.curdir,mlir_runner_libs)
    data = {
        "Name" : [],
        "Energy(J)" : [],
        "Time(s)" : [],
    }
    list_of_files_to_run = []
    output_file = os.path.join(output_dir,f"MODEL_static_cap_{suffix}.csv")
    output_file_median = os.path.join(output_dir,f"MODEL_static_cap_{suffix}_median.csv")
    list_of_files_to_run = [os.path.join(build_dir,x) for x in os.listdir(build_dir) if x.endswith(".mlir.exec") ]
    
    print(f"files to run {list_of_files_to_run}")
    
    # check what all files are already run to avoid rerunning
    files_run = []
    if os.path.isfile(output_file):
        df = pandas.read_csv(output_file)
        files_run = df["Name"].unique()
        files_run = [os.path.basename(x) for x in files_run]
        for file in df["Name"].unique():
            itr_count = (df['Name'] == file).sum()
            if itr_count < itr :
                df = df[df["Name"] != file]
                files_run.remove(file)
        data = {
            "Name" : df["Name"].tolist(),
            "Energy(J)" : df["Energy(J)"].tolist(),
            "Time(s)" : df["Time(s)"].tolist(),
        }
    
    for _, executable in enumerate(list_of_files_to_run):
        if executable in files_run :
            print(f"already run {executable}")
            continue
        for _ in range(itr):
            mlir_file = os.path.join(build_dir,executable)
            mlir_baseName = os.path.basename(mlir_file)
            mlir_baseName = os.path.splitext(mlir_baseName)[0]
            mlir_baseName = os.path.join(build_dir,mlir_baseName)
            augment_env = f" LD_LIBRARY_PATH={mlir_runner_libs}:$LD_LIBRARY_PATH LIBRARY_PATH={mlir_runner_libs}:$LIBRARY_PATH "
            command = f"sudo -S {augment_env} {mlir_file}"
            print(f"will run : {command}")
            reading = run_without_energy_thread(command=command,password=sudo_password,machine=machine)
            data["Name"].append(os.path.basename(executable))
            data["Energy(J)"].append(reading["Energy Reading"])
            data["Time(s)"].append(reading["Time Reading"])
            df = pandas.DataFrame(data)
            df.to_csv(output_file,index=False)
        # reset_frequency(sudo_password=sudo_password)
        set_frequency_cap(sudo_password=sudo_password,frequency=5000000)
        reset_uncore_freq_intel(password=sudo_password)

        #reset core and uncore frequecies
    
    print(f"Result collected in file {output_file}")
    #group by name and take median
    df = pandas.read_csv(output_file)
    df = df.groupby("Name").median()
    df.to_csv(output_file_median)
    print(f"Output written to {output_file}")
    print(f"Output median written to {output_file_median}")

if __name__ == '__main__' :
    
    build_dir = "test_build"
    build_dir = os.path.abspath(build_dir)
    os.makedirs(build_dir,exist_ok=True)
    output_dir = "test_output"
    output_dir = os.path.abspath(output_dir)
    os.makedirs(output_dir,exist_ok=True)
    sudo_password = "1234"
    compile_to_object_from_mlir("kernels/statiCap",build_dir)
    run_mlir_obj_static_cap(build_dir,output_dir,sudo_password,"raptorlake","static_cap",itr=1)