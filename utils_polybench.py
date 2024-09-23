#!/usr/bin/env python3

import os
import shutil
import subprocess
# Function to configure polybench
def configure_polybench(kernel_dir,src_dir,machine,file = None):
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

    
    if machine == 'raptorlake' and file is None:
        raise ValueError("File is required for raptorlake")
    
    counters_file = ""
    if file is not None:
        counters_file = f"{kernel_dir}/{file}"
    else:
        counters_file = f"{kernel_dir}/papi_counters_{machine}.list"
    
    
    # Copy the file to the src_dir/polybench_utilities/papi_counters.list
    shutil.copyfile(counters_file, f"{src_dir}/utilities/papi_counters.list")
    print(f"polybench configured for {machine}")

def build_polybench_kernels_energy_time(src_dir,build_dir,dataset, data_type="DATA_TYPE_IS_DOUBLE",additional_flags=""):
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
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -DPOLYBENCH_TIME -D{dataset} -D{data_type} -lm {additional_flags} -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1
    
    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir

def build_polybench_kernels_energy_time_parallel(src_dir,build_dir,dataset, data_type="DATA_TYPE_IS_DOUBLE",additional_flags=""):
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
    "./datamining/correlation/correlation.c",
    "./datamining/covariance/covariance.c",
    "./linear-algebra/kernels/2mm/2mm.c",
    "./linear-algebra/kernels/3mm/3mm.c",
    "./linear-algebra/kernels/atax/atax.c",
    "./linear-algebra/kernels/bicg/bicg.c",
    "./linear-algebra/kernels/cholesky/cholesky.c",
    "./linear-algebra/kernels/doitgen/doitgen.c",
    "./linear-algebra/kernels/gemm/gemm.c",
    "./linear-algebra/kernels/gemver/gemver.c",
    "./linear-algebra/kernels/gesummv/gesummv.c",
    "./linear-algebra/kernels/mvt/mvt.c",
    "./linear-algebra/kernels/symm/symm.c",
    "./linear-algebra/kernels/syr2k/syr2k.c",
    "./linear-algebra/kernels/syrk/syrk.c",
    "./linear-algebra/kernels/trmm/trmm.c",
    "./linear-algebra/solvers/durbin/durbin.c",
    "./linear-algebra/solvers/gramschmidt/gramschmidt.c",
    "./linear-algebra/solvers/lu/lu.c",
    # "./medley/floyd-warshall/floyd-warshall.c",
    # "./linear-algebra/kernels/trisolv/trisolv.c",
    # "./linear-algebra/solvers/dynprog/dynprog.c",
    # "./linear-algebra/solvers/ludcmp/ludcmp.c",
    # "./medley/reg_detect/reg_detect.c",
    # "./stencils/adi/adi.c",
    # "./stencils/fdtd-2d/fdtd-2d.c",
    # "./stencils/fdtd-apml/fdtd-apml.c",
    # "./stencils/jacobi-1d-imper/jacobi-1d-imper.c",
    # "./stencils/jacobi-2d-imper/jacobi-2d-imper.c",
    # "./stencils/seidel-2d/seidel-2d.c",
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
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -DPOLYBENCH_TIME -D{dataset} -D{data_type} -lm {additional_flags} -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1
    
    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir
                        
def build_polybench_kernels_papi(src_dir, build_dir, dataset="LARGE_DATASET", data_type="DATA_TYPE_IS_DOUBLE",additional_flags=""):

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
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -DPOLYBENCH_PAPI -DPOLYBENCH_PAPI_VERBOSE -D{dataset} -D{data_type} -lpapi -lm {additional_flags} -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1

    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir

def build_polybench_kernels_papi_multithreaded(src_dir, build_dir, dataset="LARGE_DATASET", data_type="DATA_TYPE_IS_DOUBLE",additional_flags=""):

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
        # 'stencils/adi/adi.c',
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
        compile_command = f"gcc -g -O0 -I {src_dir}/utilities -I {os.path.dirname(src_file_path)} {src_dir}/utilities/polybench.c {src_file_path} -DPOLYBENCH_PAPI -DPOLYBENCH_PAPI_VERBOSE -D{dataset} -D{data_type} -lpapi -lm {additional_flags} -o {os.path.join(build_dir, output_file_name)}"
        # print(compile_command)
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1

    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir

if __name__ == "__main__":
    build_polybench_kernels_energy_time(src_dir="/home/nilesh/Manoj/experimental-tool-ORM/kernels/PolyBenchC-4.2.1_mem_fencing",
                                        build_dir="/home/nilesh/Manoj/experimental-tool-ORM/kernels/PolyBenchC-4.2.1_mem_fencing/build_test",
                                        dataset="EXTRALARGE_DATASET", data_type="DATA_TYPE_IS_DOUBLE")