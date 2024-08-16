#! /usr/bin/env python3

import os
import shutil
import re
import subprocess
from concurrent.futures import ThreadPoolExecutor
import argparse
from polybench_kernels import build_all_kernels_without_any_instrumentation
import math


machine_data = {
    'broadwell': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '262144',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '15728640',
            'associativity' : '20',
            'line_size' : '64',
        },
    },
    'skylake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '1', # default value assumed
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '1048576',
            'associativity' : '16',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '8650752',
            'associativity' : '11',
            'line_size' : '64',
        },
    },
    'raptorlake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '49152',
            'associativity' : '12',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '524288',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '12582912',
            'associativity' : '16',
            'line_size' : '64',
        },
    },
    'rocketlake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '1',  # default value assumed
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '49152',
            'associativity' : '12',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '1310720',
            'associativity' : '10',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '25165824',
            'associativity' : '12',
            'line_size' : '64',
        },
    },

}


def nearest_power_of_two_ceil(x):
    if x <= 1:
        return 1
    log2_x = math.log2(x)
    next_power = math.ceil(log2_x)
    return 2 ** next_power

def get_dineroIV_cmd_args(machine):
    """
    In [1]: for stmt in list_of_stmt :
   ...:     if "Cache" in stmt and "Cache info" not in stmt :
   ...:        cache_name = stmt.split()[0]
   ...:        cache_type = stmt.split()[1]
   ...:        cache_size = stmt.split()[3]
   ...:        cache_assoc = stmt.split()[4].split("-")[0]
   ...:        cache_line_size = stmt.split()[6]
   ...:        print(f" \n\ncache name :{cache_name} \ncache type :{cache_type} \ncache size :{cache_siz
   ...: e} \ncache assoc : {cache_assoc} \ncache_line_size : {cache_line_size} \n")
   ...:        arg1 = f"-l{cache_name[1]}-{cache_type[0].lower()}size {convert_to_bytes(cache_size)}"
   ...:        arg2 = f"-l{cache_name[1]}-{cache_type[0].lower()}bsize {int(cache_line_size)}"
   ...:        arg3 = f"-l{cache_name[1]}-{cache_type[0].lower()}assoc {int(cache_assoc)}"
   ...:        arg_list = arg_list + f'{arg1} {arg2} {arg3}'

    """
    arg_list = ""
    for cache_name, cache_data in machine_data[machine].items():
        cache_size = cache_data['cache_size']
        cache_assoc = cache_data['associativity']
        cache_line_size = cache_data['line_size']
        cache_type = cache_data['cache_type']
        arg1 = f"-l{cache_name[1]}-{cache_type}size {nearest_power_of_two_ceil(int(cache_size))}"
        arg2 = f"-l{cache_name[1]}-{cache_type}bsize {nearest_power_of_two_ceil(int(cache_line_size))}"
        arg3 = f"-l{cache_name[1]}-{cache_type}assoc {int(cache_assoc)}"
        arg_list = arg_list + f'{arg1} {arg2} {arg3} '
    
    if arg_list[-1] == ' ' :
        arg_list = arg_list[:-1]

    return arg_list

def parse_args() :
    parser = argparse.ArgumentParser(description='Generate din polybench')
    #argument to get source folder
    parser.add_argument('--src', type=str, required=True, help='Source folder')
    #argument to get build folder
    parser.add_argument('--build', type=str, required=True, help='Build folder')
    #argument to get output folder
    parser.add_argument('--output', type=str, required=True, help='Output folder')
    #argument to get the intel qemu folder
    parser.add_argument('--qemu', type=str, required=True, help='qemu exec')
    #argument to get the din folder
    parser.add_argument('--din', type=str, required=True, help='Din plugin folder')
    
    args = parser.parse_args()
    
    #check if the build folder and the output folder, source paths given are absolute if not convert to absolute
    if not os.path.isabs(args.build):
        args.build = os.path.abspath(args.build)
    if not os.path.isabs(args.output):
        args.output = os.path.abspath(args.output)
    if not os.path.isabs(args.src):
        args.src = os.path.abspath(args.src)
    
    
    
    #check if the build folder exists
    if not os.path.exists(args.src):
        raise ValueError('Build folder does not exist')
    #check for din folder
    if not os.path.exists(args.din):
        raise ValueError('Din folder does not exist')
    #check for qemu folder
    if not os.path.exists(args.qemu):
        raise ValueError('qemu folder does not exist')
    
    return args

#run and create the qemu output and and the din output

def run_to_get_din_output (qemu_Exe,dineroIV_plugin, exec, output_name, output_dir, machine_list) :
    

    for machine in machine_list:
        output_name_for_machine = output_name + '_' + machine
        Din_cmd = f'DINEROIV_CMDLINE=\"{get_dineroIV_cmd_args(machine=machine)}\"'
        command_to_run = f"{Din_cmd} {qemu_Exe} --tcg-plugin {dineroIV_plugin} {exec} 2> {os.path.join(output_dir, output_name_for_machine + '.output')}"
        try:
            subprocess.run(command_to_run, shell=True, check=True)
            print(f'DineroIV run successfully for {exec}')
        except subprocess.CalledProcessError as e:
            print(e)
            return
    
    return True


if __name__ == '__main__' :
    args = parse_args()
    
    print('Generating din polybench')
    print('Build folder: ', args.build)
    print('Output folder: ', args.output)
    
    datasets = ['LARGE_DATASET', 'EXTRALARGE_DATASET']
    # datasets = ['MINI_DATASET', 'SMALL_DATASET']
    # datasets = ['MINI_DATASET']
    data_type = ['DATA_TYPE_IS_DOUBLE']
    machines = ['broadwell','skylake','raptorlake','rocketlake']
    

    exec_param_data : list[dict[str : str]] = []
    
    
    for dataset in datasets:
        for dtype in data_type:
            #buld all kernels without any instrumentation
            build = build_all_kernels_without_any_instrumentation(src_dir=args.src,build_dir=args.build, dataset=dataset, data_type=dtype)
            
            #get a list of all the executables in the build dir
            # execs = [f for f in os.listdir(build) if os.path.isfile(os.path.join(build, f))]
            execs = [f for f in os.listdir(build) if os.path.isfile(os.path.join(build, f))]

            for exec in execs:            
                suffix = exec + '_' + dataset + '_' + dtype 
                exec_param_data.append({'file': os.path.join(build,exec), 'output_name' : suffix})
    
    #run the qemu tool and dineroIV for all the executables
    with ThreadPoolExecutor(max_workers=10) as executor:
        for exec_param in exec_param_data:
            #def run_to_get_din_output (qemu_Exe,dineroIV_plugin, exec, output_name, output_dir, machine_list) :
            executor.submit(run_to_get_din_output, args.qemu, args.din, exec_param['file'], exec_param['output_name'], args.output, machines)

    print('\n\n [[done]] \n\n')        

    
    
    
    
    