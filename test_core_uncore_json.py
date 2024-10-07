#! /usr/bin/env python3
import os
import re
import json
import argparse
import shutil
import subprocess
import glob
import pandas as pd

from utils_energy_time import *


def add_scope_comments(filename, core_uncore_data, instrumentation):
    with open(filename, 'r') as file:
        lines = file.readlines()

    # Regex for detecting a for loop
    for_loop_regex = re.compile(r'\bfor\s*\(.*\)')

    # Stack to track nested for loops and the outermost one for each scope
    scope_stack = []
    scope_counter = 0
    modified_lines = []
    inside_scope = False
    added_include = False
    found_main = False
    found_reutrn = False

    for _, line in enumerate(lines):
        # Add the #include "temp.c" only once at the top of the file
        if not added_include:
            modified_lines.append('#include "include/change_freq.c"\n')
            if instrumentation != "oracle":
                modified_lines.append(
                    '#include "include/time_energy_inst.cpp"\n\n')

            added_include = True

        if not found_main:
            if 'int main() {' in line:
                modified_lines.append(line)
                if instrumentation != "oracle":
                    modified_lines.append('start_instrumentaion;\n')
                found_main = True
                continue

        if not found_reutrn:
            if 'return 0;' in line:
                if instrumentation != "oracle":
                    line = 'stop_instrumentation;\n print_instruments;\n return 0;\n'
                modified_lines.append(line)
                found_reutrn = True
                continue

        # Check for 'for' loop
        # print(scope_stack)
        if re.search(for_loop_regex, line):
            if not inside_scope:
                # Found an outermost for loop in a new scope
                # Add comment on the outermost for loop
                core, uncore = 0, 0
                core, uncore = core_uncore_data[scope_counter]
                print(f"Scope {scope_counter} : core {core}, uncore {uncore}")
                core, uncore = int(core * 10**6), int(uncore * 10**6)
                print(f"Scope {scope_counter}")
                modified_lines.append(f"// Scope {scope_counter} \n")
                modified_lines.append(f"set_frequency_cap({core}); \n")
                modified_lines.append(
                    f"set_max_uncore_freq_intel({uncore}); \n")
                scope_counter += 1
                inside_scope = True  # We're inside a scope now
            scope_stack.append('for')  # Mark that we encountered a 'for'

        if '}' in line:
            if scope_stack:
                scope_stack.pop()  # Close the block or loop
            # If the stack is empty or we exit the outermost loop, reset scope tracking
            if not scope_stack:
                inside_scope = False

        modified_lines.append(line)
    return modified_lines


def parse_args():
    parser = argparse.ArgumentParser(description="Script to modify C file")
    parser.add_argument("--machine", type=str,
                        required=True, help="Machine name")
    parser.add_argument("--password", type=str,
                        required=True, help="Password for sudo")
    parser.add_argument("--build-dir", type=str, required=True,
                        help="Directory to store the build files")
    parser.add_argument(
        "--c-dir", type=str, required=True, help="Path to C file directory")
    args = parser.parse_args()
    return args


def get_core_uncore_from_json(json_file):
    json_file = open(json_file, 'r')
    json_data = json.load(json_file)
    data = {}
    # print(json_data)
    for key in json_data:
        data[int(key)] = [float(json_data[key][0]["Freq"]),
                          float(json_data[key][1]["UFreq"])]
    return data


def modify_c_files(modified_files_dir, c_file_dir, instrumentation):
    c_files = []
    for dir_path, _, file_names in os.walk(c_file_dir):
        for file in file_names:
            c_files.append(os.path.abspath(os.path.join(dir_path, file)))

    for c_file in c_files:
        if modify_c_file(modified_files_dir, c_file, instrumentation) == 1:
            return 1
    return 0


def modify_c_file(modified_files_dir, c_file, instrumentation):
    c_file_name = os.path.basename(c_file)
    c_file_without_extension, _ = os.path.splitext(c_file_name)
    json_file = f"{c_file_without_extension}" + ".json"
    json_file = os.path.join("./json_files/", json_file)
    json_file = os.path.abspath(json_file)
    if not os.path.exists(json_file):
        print(f"ERR : Missing json file : {json_file}")
        return 1

    core_uncore_data = get_core_uncore_from_json(json_file)
    modified_c = add_scope_comments(c_file, core_uncore_data, instrumentation)

    # Write the modified lines back to the file
    with open(modified_files_dir + "/" + "modified_" + c_file_name, 'w') as file:
        file.writelines(modified_c)
    return 0


def build_c_files(c_files_dir, build_dir, compiler_flags=""):
    print(f"Build time directory: {build_dir}")

    # Create the output directory if it doesn't exist
    build_dir = os.path.join(build_dir)
    os.makedirs(build_dir, exist_ok=True)
    # delete all files and subdirectories in the build directory
    for root, dirs, files in os.walk(build_dir):
        for file in files:
            os.remove(os.path.join(root, file))
        for dir in dirs:
            shutil.rmtree(os.path.join(root, dir))
    print(f"Deleted all files and subdirectories in {build_dir}")

    # List of source files
    src_files = glob.glob("./" + c_files_dir + "/modified_*.c")

    # Counter
    counter = 0

    # Loop through each file
    for file in src_files:

        # Construct the full path for the source file
        c_file_path = os.path.join(c_files_dir, os.path.basename(file))

        # Extract filename and filename without extension
        filename = os.path.basename(c_file_path)
        file_name_without_extension, _ = os.path.splitext(filename)
        output_file_name = f"{file_name_without_extension}" + "_exe"

        # Compile the file
        compile_command = f"g++ {compiler_flags} -g -O0 {
            c_file_path} -mcmodel=large  -lm -o {os.path.join(build_dir, output_file_name)}"
        subprocess.run(compile_command, shell=True, check=True)
        print(f"compiled {output_file_name}")
        counter += 1

    print(f"Compiled binaries saved to: {build_dir}")
    print(f"Number of files compiled: {counter}")
    return build_dir


def collect_time_and_energy(build_dir, password, machine, is_multicore, output_dir):
    data = {
        "Name": [],
        "Energy(J)": [],
        "Time(s)": []
    }
    '''
    if os.path.exists(output_csv):
        df_prev = pd.read_csv(output_csv)
        data = {
            "Name" : df_prev["Name"].values.tolist(),
            "Energy(J)" : df_prev["Energy(J)"].values.tolist(),
            "Time(s)" : df_prev["Time(s)"].values.tolist()
        }
     '''
    output_csv = os.path.join(output_dir, "output.csv")
    output_csv_median = os.path.join(output_dir, "output_median.csv")
    # run all executables inside the build directory
    for _, executable in enumerate(os.listdir(build_dir)):
        binary_path = os.path.join(build_dir, executable)
        energy_r, time_r = run_kernels_energy_and_time(file_to_run=binary_path,
                                                       password=password,
                                                       machine=machine, is_multicore=is_multicore)
        data["Name"].append(executable)
        data["Energy(J)"].append(energy_r)
        data["Time(s)"].append(time_r)
        # print(f"Ran {executable} {j+1} times")
        df = pd.DataFrame(data)
        df.to_csv(output_csv, index=False)

    print(f"Saved {output_csv}")
    # Calculate the median and group by the name
    df = pd.read_csv(output_csv)
    df_median = df.groupby("Name").median().reset_index()
    df_median.to_csv(output_csv_median, index=False)
    print(f"Saved {output_csv_median}")
    return output_csv, output_csv_median


'''
def main():
    args = parse_args()

    password = args.password
    machine = args.machine

    modified_files_dir = "modified_c"
    build_dir = args.build_dir

    if not os.path.exists(modified_files_dir):
        os.makedirs(modified_files_dir)

    if modify_c_files(modified_files_dir, os.path.abspath(args.c_dir)) == 1:
        print(f"ERR : Couldn't modify C files, aborting building C files")
        return
    include_flags = "-I" + os.getcwd()
    build_c_files(modified_files_dir, build_dir, include_flags)

    output_dir = os.path.join(os.curdir, "output_csv", machine)
    os.makedirs(output_dir, exist_ok=True)

    collect_time_and_energy(build_dir, password, machine,
                            True, output_dir)


if __name__ == "__main__":
    main()
'''

# compile command to use
"""g++ ./alexnet.org.c -mcmodel=large  -lm -o alexnet.org"""
