#!/usr/bin/env python3

import os
import argparse
import shutil
import subprocess
import datetime
import pandas as pd
import time as sys_time
from state_load_store import load_state, save_state
from energy_validate import get_energy_multiplication_factor

def rewrite_file_after_median(file):
    df = pd.read_csv(file)
    df = df.groupby('Name').median().reset_index()
    #copy old file to with a new _raw extention
    old_file = file.replace(".csv","_RAW")
    #move file to old_file
    os.rename(file,old_file)
    print(f"Head: {df.head()}")
    df.to_csv(file,index=False)


# Function to configure polybench
def configure_polybench(kernel_dir,src_dir,machine):
    # machine will be one of 3 broadwell raptorlake rocketlake
    # depending on the name we need to copy the file of papi_counters_{machine}.list
    # to the src_dir/polybench_utilities/papi_counters.list 

    # Check if the kernel directory exists
    if not os.path.exists(kernel_dir):
        raise FileNotFoundError(f"Kernel directory '{kernel_dir}' not found")
    
    # Check if the src directory exists
    if not os.path.exists(src_dir):
        raise FileNotFoundError(f"Source directory '{src_dir}' not found")

    # remove the existing papi_counters.list file
    if os.path.exists(f"{src_dir}/utilities/papi_counters.list"):
        os.remove(f"{src_dir}/utilities/papi_counters.list")

    # Copy the file to the src_dir/polybench_utilities/papi_counters.list
    shutil.copyfile(f"{kernel_dir}/papi_counters_{machine}.list", f"{src_dir}/utilities/papi_counters.list")
    print(f"polybench configured for {machine}")


# Function to run all the polybench kernels and collect the output
def run_all_kernels(build_dir, output_dir, frequency,num_iterations, suffix, zzz,password, state,high_performance_cores):

    data = {
        "Name": [],
        "Frequency(kHz)": []
    }

    if "polybench_data" in state:
        data = state["polybench_data"]

    state["polybench_data"] = data

    # Create the output directory if it doesn't exist
    os.makedirs(output_dir, exist_ok=True)

    # Counter
    counter = 0

    # Loop through each file in the build directory
    for file in os.listdir(build_dir):
        sys_time.sleep(zzz)
        # Construct the full path for the binary file
        binary_file_path = os.path.abspath(os.path.join(build_dir, file))

        # Extract filename and filename without extension
        filename = os.path.basename(file)
        file_name_without_extension, _ = os.path.splitext(filename)

        # Run the binary file
        # run_command = f"{binary_file_path} {num_iterations} > {output_file_path}"
        run_command = ""
        if not high_performance_cores:
            run_command = f"sudo -S taskset -c 0 {binary_file_path}"
        else :
            run_command = f"sudo -S LIBPFM_FORCE_PMU=adl_glc taskset -c 0 {binary_file_path}"
        
        if data['Name'] and file in data['Name'] and data['Name'].count(file) >= num_iterations:
            print(f"Skipping {file_name_without_extension}")
            continue
        for i in range(num_iterations):
            if data['Name'].count(file) >= i + 1:
                continue

            output = subprocess.run(run_command, shell=True, 
                                    check=True,capture_output=True,
                                    input=password.encode('utf-8'))

            print(f"Ran {file_name_without_extension}")
            list_of_measurements = output.stdout.decode('utf-8').splitlines()[0].split()
            data['Name'].append(os.path.basename(file))
            data['Frequency(kHz)'].append(frequency)
            for i in range(len(list_of_measurements)):
                value = int(list_of_measurements[i].split('=')[1])
                key = list_of_measurements[i].split('=')[0]
                # check if key is already present in the dictionary
                if key in data:
                    data[key].append(value)
                else:
                    data[key] = [value]
            # print(f"Output: {output.stdout.decode('utf-8').splitlines()[0].split()}")
            counter += 1
            state["polybench_data"] = data
            save_state(state, "state.json")

    df = pd.DataFrame(data)
    csv_name = os.path.join(output_dir,f"kernel_data_PolyBenchC-4.2.1_{frequency}_{suffix}.csv")
    df.to_csv(csv_name,index=False)
    rewrite_file_after_median(csv_name)
    save_state(state, "state.json")
    print(f"Output files saved to: {output_dir}")
    print(f"Number of files run: {counter}")
    state.pop("polybench_data")
    print(f"reset state polybench data")
    return {"dataframe":df,"output_file":csv_name}


# Function to compile all the PolyBench kernels
def build_all_kernels(src_dir, build_dir, dataset="LARGE_DATASET", data_type="DATA_TYPE_IS_DOUBLE"):

    build_dir = os.path.join(build_dir, dataset)
    print(f"Build directory: {build_dir}")

    # Create the output directory if it doesn't exist
    os.makedirs(build_dir, exist_ok=True)
    #delete all files and subdirectories in the build directory
    for root, dirs, files in os.walk(build_dir):
        for file in files:
            os.remove(os.path.join(root, file))
        for dir in dirs:
            shutil.rmtree(os.path.join(root, dir))
    print(f"Deleted all files and subdirectories in {build_dir}")

    # List of source files
    src_files = [
        'datamining/correlation/correlation.c',
        'datamining/covariance/covariance.c',
        'linear-algebra/kernels/2mm/2mm.c',
        'linear-algebra/kernels/3mm/3mm.c',
        'linear-algebra/kernels/atax/atax.c',
        'linear-algebra/kernels/bicg/bicg.c',
        'linear-algebra/kernels/doitgen/doitgen.c',
        'linear-algebra/kernels/mvt/mvt.c',
        'linear-algebra/blas/gemm/gemm.c',
        'linear-algebra/blas/gemver/gemver.c',
        'linear-algebra/blas/gesummv/gesummv.c',
        'linear-algebra/blas/symm/symm.c',
        'linear-algebra/blas/syr2k/syr2k.c',
        'linear-algebra/blas/syrk/syrk.c',
        'linear-algebra/blas/trmm/trmm.c',
        'linear-algebra/solvers/cholesky/cholesky.c',
        'linear-algebra/solvers/durbin/durbin.c',
        'linear-algebra/solvers/gramschmidt/gramschmidt.c',
        'linear-algebra/solvers/lu/lu.c',
        'linear-algebra/solvers/ludcmp/ludcmp.c',
        'linear-algebra/solvers/trisolv/trisolv.c',
        'medley/deriche/deriche.c',
        'medley/floyd-warshall/floyd-warshall.c',
        'medley/nussinov/nussinov.c',
        'stencils/adi/adi.c',
        'stencils/fdtd-2d/fdtd-2d.c',
        'stencils/heat-3d/heat-3d.c',
        'stencils/jacobi-1d/jacobi-1d.c',
        'stencils/jacobi-2d/jacobi-2d.c',
        'stencils/seidel-2d/seidel-2d.c'
    ]

    # Counter
    counter = 0

    # Loop through each file
    for file in src_files:

        # Construct the full path for the source file
        src_file_path = os.path.join(src_dir, file)

        # Extract filename and filename without extension
        filename = os.path.basename(file)
        file_name_without_extension, _ = os.path.splitext(filename)
        output_file_name = f"{file_name_without_extension}"

        # Compile the file
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -DPOLYBENCH_PAPI -DPOLYBENCH_PAPI_VERBOSE -D{dataset} -D{data_type} -lpapi -lm -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1

    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir

def build_all_kernels_without_any_instrumentation(src_dir,build_dir,dataset, data_type="DATA_TYPE_IS_DOUBLE"):
    build_dir = os.path.join(build_dir, dataset)
    print(f"Build time directory: {build_dir}")

    # Create the output directory if it doesn't exist
    os.makedirs(build_dir, exist_ok=True)
    #delete all files and subdirectories in the build directory
    for root, dirs, files in os.walk(build_dir):
        for file in files:
            os.remove(os.path.join(root, file))
        for dir in dirs:
            shutil.rmtree(os.path.join(root, dir))
    print(f"Deleted all files and subdirectories in {build_dir}")

    # List of source files
    src_files = [
        'datamining/correlation/correlation.c',
        'datamining/covariance/covariance.c',
        'linear-algebra/kernels/2mm/2mm.c',
        'linear-algebra/kernels/3mm/3mm.c',
        'linear-algebra/kernels/atax/atax.c',
        'linear-algebra/kernels/bicg/bicg.c',
        'linear-algebra/kernels/doitgen/doitgen.c',
        'linear-algebra/kernels/mvt/mvt.c',
        'linear-algebra/blas/gemm/gemm.c',
        'linear-algebra/blas/gemver/gemver.c',
        'linear-algebra/blas/gesummv/gesummv.c',
        'linear-algebra/blas/symm/symm.c',
        'linear-algebra/blas/syr2k/syr2k.c',
        'linear-algebra/blas/syrk/syrk.c',
        'linear-algebra/blas/trmm/trmm.c',
        'linear-algebra/solvers/cholesky/cholesky.c',
        'linear-algebra/solvers/durbin/durbin.c',
        'linear-algebra/solvers/gramschmidt/gramschmidt.c',
        'linear-algebra/solvers/lu/lu.c',
        'linear-algebra/solvers/ludcmp/ludcmp.c',
        'linear-algebra/solvers/trisolv/trisolv.c',
        'medley/deriche/deriche.c',
        'medley/floyd-warshall/floyd-warshall.c',
        'medley/nussinov/nussinov.c',
        'stencils/adi/adi.c',
        'stencils/fdtd-2d/fdtd-2d.c',
        'stencils/heat-3d/heat-3d.c',
        'stencils/jacobi-1d/jacobi-1d.c',
        'stencils/jacobi-2d/jacobi-2d.c',
        'stencils/seidel-2d/seidel-2d.c'
    ]

    # Counter
    counter = 0

    # Loop through each file
    for file in src_files:

        # Construct the full path for the source file
        src_file_path = os.path.join(src_dir, file)

        # Extract filename and filename without extension
        filename = os.path.basename(file)
        file_name_without_extension, _ = os.path.splitext(filename)
        output_file_name = f"{file_name_without_extension}"

        # Compile the file
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -D{dataset} -D{data_type} -lm -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1
    
    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir
    build_dir = os.path.join(build_dir, dataset)

def build_all_time_kernels(src_dir,build_dir,dataset, data_type="DATA_TYPE_IS_DOUBLE"):
    print(f"Build time directory: {build_dir}")

    # Create the output directory if it doesn't exist
    build_dir = os.path.join(build_dir, dataset)
    os.makedirs(build_dir, exist_ok=True)
    #delete all files and subdirectories in the build directory
    for root, dirs, files in os.walk(build_dir):
        for file in files:
            os.remove(os.path.join(root, file))
        for dir in dirs:
            shutil.rmtree(os.path.join(root, dir))
    print(f"Deleted all files and subdirectories in {build_dir}")

    # List of source files
    src_files = [
        'datamining/correlation/correlation.c',
        'datamining/covariance/covariance.c',
        'linear-algebra/kernels/2mm/2mm.c',
        'linear-algebra/kernels/3mm/3mm.c',
        'linear-algebra/kernels/atax/atax.c',
        'linear-algebra/kernels/bicg/bicg.c',
        'linear-algebra/kernels/doitgen/doitgen.c',
        'linear-algebra/kernels/mvt/mvt.c',
        'linear-algebra/blas/gemm/gemm.c',
        'linear-algebra/blas/gemver/gemver.c',
        'linear-algebra/blas/gesummv/gesummv.c',
        'linear-algebra/blas/symm/symm.c',
        'linear-algebra/blas/syr2k/syr2k.c',
        'linear-algebra/blas/syrk/syrk.c',
        'linear-algebra/blas/trmm/trmm.c',
        'linear-algebra/solvers/cholesky/cholesky.c',
        'linear-algebra/solvers/durbin/durbin.c',
        'linear-algebra/solvers/gramschmidt/gramschmidt.c',
        'linear-algebra/solvers/lu/lu.c',
        'linear-algebra/solvers/ludcmp/ludcmp.c',
        'linear-algebra/solvers/trisolv/trisolv.c',
        'medley/deriche/deriche.c',
        'medley/floyd-warshall/floyd-warshall.c',
        'medley/nussinov/nussinov.c',
        'stencils/adi/adi.c',
        'stencils/fdtd-2d/fdtd-2d.c',
        'stencils/heat-3d/heat-3d.c',
        'stencils/jacobi-1d/jacobi-1d.c',
        'stencils/jacobi-2d/jacobi-2d.c',
        'stencils/seidel-2d/seidel-2d.c'
    ]

    # Counter
    counter = 0

    # Loop through each file
    for file in src_files:

        # Construct the full path for the source file
        src_file_path = os.path.join(src_dir, file)

        # Extract filename and filename without extension
        filename = os.path.basename(file)
        file_name_without_extension, _ = os.path.splitext(filename)
        output_file_name = f"{file_name_without_extension}"

        # Compile the file
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -DPOLYBENCH_TIME -D{dataset} -D{data_type} -lm -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1
    
    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir

def build_all_energy_kernels(src_dir,build_dir,dataset, data_type="DATA_TYPE_IS_DOUBLE"):
    print(f"Build energy directory: {build_dir}")

    # Create the output directory if it doesn't exist
    build_dir = os.path.join(build_dir, dataset)
    os.makedirs(build_dir, exist_ok=True)
    #delete all files and subdirectories in the build directory
    for root, dirs, files in os.walk(build_dir):
        for file in files:
            os.remove(os.path.join(root, file))
        for dir in dirs:
            shutil.rmtree(os.path.join(root, dir))
    print(f"Deleted all files and subdirectories in {build_dir}")

    # List of source files
    src_files = [
        'datamining/correlation/correlation.c',
        'datamining/covariance/covariance.c',
        'linear-algebra/kernels/2mm/2mm.c',
        'linear-algebra/kernels/3mm/3mm.c',
        'linear-algebra/kernels/atax/atax.c',
        'linear-algebra/kernels/bicg/bicg.c',
        'linear-algebra/kernels/doitgen/doitgen.c',
        'linear-algebra/kernels/mvt/mvt.c',
        'linear-algebra/blas/gemm/gemm.c',
        'linear-algebra/blas/gemver/gemver.c',
        'linear-algebra/blas/gesummv/gesummv.c',
        'linear-algebra/blas/symm/symm.c',
        'linear-algebra/blas/syr2k/syr2k.c',
        'linear-algebra/blas/syrk/syrk.c',
        'linear-algebra/blas/trmm/trmm.c',
        'linear-algebra/solvers/cholesky/cholesky.c',
        'linear-algebra/solvers/durbin/durbin.c',
        'linear-algebra/solvers/gramschmidt/gramschmidt.c',
        'linear-algebra/solvers/lu/lu.c',
        'linear-algebra/solvers/ludcmp/ludcmp.c',
        'linear-algebra/solvers/trisolv/trisolv.c',
        'medley/deriche/deriche.c',
        'medley/floyd-warshall/floyd-warshall.c',
        'medley/nussinov/nussinov.c',
        'stencils/adi/adi.c',
        'stencils/fdtd-2d/fdtd-2d.c',
        'stencils/heat-3d/heat-3d.c',
        'stencils/jacobi-1d/jacobi-1d.c',
        'stencils/jacobi-2d/jacobi-2d.c',
        'stencils/seidel-2d/seidel-2d.c'
    ]

    # Counter
    counter = 0

    # Loop through each file
    for file in src_files:

        # Construct the full path for the source file
        src_file_path = os.path.join(src_dir, file)

        # Extract filename and filename without extension
        filename = os.path.basename(file)
        file_name_without_extension, _ = os.path.splitext(filename)
        output_file_name = f"{file_name_without_extension}"

        # Compile the file
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -DPOLYBENCH_ENERGY -D{dataset} -D{data_type} -lm -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1
    
    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir

#run all time kernels and note down there time
def run_all_time_kernels(build_dir, output_dir, frequency,num_iterations, suffix,password , zzz,state):

    data = {
        "Name": [],
        "Frequency(kHz)": [],
        "Time(s)" : []
    }
    if "polybench_time_data" in state:
        data = state["polybench_time_data"]
    state["polybench_time_data"] = data


    # Create the output directory if it doesn't exist
    os.makedirs(output_dir, exist_ok=True)

    # Counter
    counter = 0

    # Loop through each file in the build directory
    for file in os.listdir(build_dir):
        sys_time.sleep(zzz)
        # Construct the full path for the binary file
        binary_file_path = os.path.abspath(os.path.join(build_dir, file))

        # Extract filename and filename without extension
        filename = os.path.basename(file)
        file_name_without_extension, _ = os.path.splitext(filename)

        # Run the binary file
        # run_command = f"{binary_file_path} {num_iterations} > {output_file_path}"
        run_command = f"sudo -S taskset -c 0  {binary_file_path}"
        if data['Name'] and file in data['Name'] and data['Name'].count(file) >= num_iterations:
            print(f"Skipping {file_name_without_extension}")
            continue
        for i in range(num_iterations):
            if data['Name'].count(file) >= i + 1:
                continue
            output = subprocess.run(run_command, shell=True, check=True,
                                    capture_output=True,
                                    input=password.encode('utf-8'))
            print(f"Ran {file_name_without_extension}")
            time = float(output.stdout.decode('utf-8').splitlines()[0].split()[0])
            data['Name'].append(os.path.basename(file))
            data['Frequency(kHz)'].append(frequency)
            print(f"Time(s): {time}")
            data['Time(s)'].append(time)
            counter += 1
            state["polybench_time_data"] = data
            save_state(state, "state.json")

    df = pd.DataFrame(data)
    csv_name = os.path.join(output_dir,f"oracle_time_data_PolyBenchC-4.2.1_{frequency}_{suffix}.csv")
    df.to_csv(csv_name,index=False)
    rewrite_file_after_median(csv_name)
    print(f"Output files saved to: {output_dir}")
    print(f"Number of files run: {counter}")
    save_state(state, "state.json")
    # state["polybench_time_data"]
    # remove the key polybench_time_data from the state
    state.pop("polybench_time_data")
    print(f"reset state polybench time data")
    return {"dataframe":df,"output_file":csv_name}

#run all time kernels and note down their energy
def run_all_energy_kernels(build_dir, output_dir, frequency,num_iterations, suffix,password , zzz,state,machine):

    data = {
        "Name": [],
        "Frequency(kHz)": [],
        "energy(J)" : []
    }
    if "polybench_energy_data" in state:
        data = state["polybench_energy_data"]
    state["polybench_energy_data"] = data


    # Create the output directory if it doesn't exist
    os.makedirs(output_dir, exist_ok=True)

    # Counter
    counter = 0

    # Loop through each file in the build directory
    for file in os.listdir(build_dir):
        sys_time.sleep(zzz)
        # Construct the full path for the binary file
        binary_file_path = os.path.abspath(os.path.join(build_dir, file))

        # Extract filename and filename without extension
        filename = os.path.basename(file)
        file_name_without_extension, _ = os.path.splitext(filename)

        # Run the binary file
        # run_command = f"{binary_file_path} {num_iterations} > {output_file_path}"
        run_command = f"sudo -S taskset -c 0  {binary_file_path}"
        if data['Name'] and file in data['Name'] and data['Name'].count(file) >= num_iterations:
            print(f"Skipping {file_name_without_extension}")
            continue
        for i in range(num_iterations):
            if data['Name'].count(file) >= i + 1:
                continue
            success = False
            energy = 0
            while success == False:
                output = subprocess.run(run_command, shell=True, check=True,
                                        capture_output=True,
                                        input=password.encode('utf-8'))
                print(f"Ran {file_name_without_extension}")
                energy = int(output.stdout.decode('utf-8').splitlines()[0].split()[0]) * get_energy_multiplication_factor(machine)
                if energy > 0:
                    success = True
                
            data['Name'].append(os.path.basename(file))
            data['Frequency(kHz)'].append(frequency)
            print(f"energy(J): {energy}")
            data['energy(J)'].append(energy)
            counter += 1
            state["polybench_energy_data"] = data
            save_state(state, "state.json")

    df = pd.DataFrame(data)
    csv_name = os.path.join(output_dir,f"oracle_energy_data_PolyBenchC-4.2.1_{frequency}_{suffix}.csv")
    df.to_csv(csv_name,index=False)
    rewrite_file_after_median(csv_name)
    print(f"Output files saved to: {output_dir}")
    print(f"Number of files run: {counter}")
    save_state(state, "state.json")
    # state["polybench_energy_data"]
    # remove the key polybench_energy_data from the state
    state.pop("polybench_energy_data")
    print(f"reset state polybench energy data")
    return {"dataframe":df,"output_file":csv_name}

if __name__ == "__main__":
    configure_polybench(kernel_dir="kernels",src_dir="kernels/PolyBenchC-4.2.1",machine="broadwell")
    # test = build_all_kernels(src_dir="kernels/PolyBenchC-4.2.1", build_dir="bin", dataset="MINI_DATASET", data_type="DATA_TYPE_IS_DOUBLE")
    # run_all_kernels(build_dir=test, output_dir="output", num_iterations=1)
    # shutil.rmtree(test)
    test = build_all_time_kernels(src_dir="kernels/PolyBenchC-4.2.1_time", build_dir="bin_test", dataset="MINI_DATASET", data_type="DATA_TYPE_IS_DOUBLE")
    run_all_time_kernels(build_dir=test,frequency=30000,output_dir="output", num_iterations=1, suffix="test",zzz=1,state={},password="password")
