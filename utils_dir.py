#!/usr/bin/env python3

import subprocess
import os
import shutil
import datetime

# setup the directory structure
# tools_dir
# ├── results
#     ├── <machine_name>
#         ├── exp_<date_time>
#               ├── Kernel_Data
#                   ├── exp_<date_time>_kernel_data.csv
#               ├── Roofline_Data
#                   ├── <date_time>_roofline.csv
#               ├── PowerCap_Pridiction
#                   ├── <date_time>_powercap.csv

def setup_dir_structure(tools_dir : str, machine_name : str,suffix : str, 
                        KernelFolder : bool = True, RooflineFolder : bool = True) -> tuple[str, str]:
    kernel_data_dir = ""
    roofline_data_dir = ""

    results_dir = os.path.join(tools_dir, "results")
    if not os.path.exists(results_dir):
        os.makedirs(results_dir)
        print(f"Results directory {results_dir} created successfully.")
    else:
        print(f"Results directory {results_dir} already exists.")

    # Create the machine directory if it doesn't exist
    machine_dir = f'{results_dir}/{machine_name}'
    if not os.path.exists(machine_dir):
        os.makedirs(machine_dir)
        print(f"Machine directory {machine_dir} created successfully.")
    else:
        print(f"Machine directory {machine_dir} already exists.")

    # current experiment dir insde the machine dir
    current_experiment_dir = os.path.join(machine_dir, f"exp_{suffix}")
    if not os.path.exists(current_experiment_dir):
        os.makedirs(current_experiment_dir)
        print(f"Current experiment directory {current_experiment_dir} created successfully.")
    else:
        print(f"Current experiment directory {current_experiment_dir} already exists.")
    
    if KernelFolder:
        # Create the Kernel Data directory if it doesn't exist
        kernel_data_dir = os.path.join(current_experiment_dir, "Kernel_Data")
        if not os.path.exists(kernel_data_dir):
            os.makedirs(kernel_data_dir)
            print(f"Kernel Data directory {kernel_data_dir} created successfully.")
        else:
            print(f"Kernel Data directory {kernel_data_dir} already exists.")

    if RooflineFolder:
        # Create the Roofline Data directory if it doesn't exist
        roofline_data_dir = os.path.join(current_experiment_dir, "Roofline_Data")
        if not os.path.exists(roofline_data_dir):
            os.makedirs(roofline_data_dir)
            print(f"Roofline Data directory {roofline_data_dir} created successfully.")
        else:
            print(f"Roofline Data directory {roofline_data_dir} already exists.")

    return kernel_data_dir, roofline_data_dir

# create a oracle directory
# tools_dir
# ├── oracle
#     ├── <machine_name>
#         ├── exp_<date_time>
#             ├── time_dataset_<date_time>.csv

def setup_oracle_dir_structure(tools_dir : str, machine_name : str,suffix : str) -> str:
    oracle_dir = os.path.join(tools_dir, "oracle")
    if not os.path.exists(oracle_dir):
        os.makedirs(oracle_dir)
        print(f"Oracle directory {oracle_dir} created successfully.")
    else:
        print(f"Oracle directory {oracle_dir} already exists.")

    # Create the machine directory if it doesn't exist
    machine_dir = os.path.join(oracle_dir, machine_name)
    if not os.path.exists(machine_dir):
        os.makedirs(machine_dir)
        print(f"Machine directory {machine_dir} created successfully.")
    else:
        print(f"Machine directory {machine_dir} already exists.")

    # Create the dataset directory if it doesn't exist
    results_dir = os.path.join(machine_dir, f"exp_{suffix}")
    if not os.path.exists(results_dir):
        os.makedirs(results_dir)
        print(f"Dataset directory {results_dir} created successfully.")
    else:
        print(f"Dataset directory {results_dir} already exists.")

    return results_dir

def setup_dir_structure_with_powerCap(tools_dir : str, machine_name : str,suffix : str,
                                      KernelFolder : bool = True, RooflineFolder : bool = True,
                                      PowerCapFolder : bool = True) -> tuple[str, str]:
    
    kernel_data_dir = ""
    roofline_data_dir = ""
    powercap_data_dir = ""
    
    # Create the results directory if it doesn't exist
    # results_dir = f'{tools_dir}/results'
    results_dir = os.path.join(tools_dir, "results")
    if not os.path.exists(results_dir):
        os.makedirs(results_dir)
        print(f"Results directory {results_dir} created successfully.")
    else:
        print(f"Results directory {results_dir} already exists.")

    # Create the machine directory if it doesn't exist
    machine_dir = f'{results_dir}/{machine_name}'
    if not os.path.exists(machine_dir):
        os.makedirs(machine_dir)
        print(f"Machine directory {machine_dir} created successfully.")
    else:
        print(f"Machine directory {machine_dir} already exists.")

    # current experiment dir insde the machine dir
    current_experiment_dir = os.path.join(machine_dir, f"exp_{suffix}")
    if not os.path.exists(current_experiment_dir):
        os.makedirs(current_experiment_dir)
        print(f"Current experiment directory {current_experiment_dir} created successfully.")
    else:
        print(f"Current experiment directory {current_experiment_dir} already exists.")
    
    if KernelFolder:
        # Create the Kernel Data directory if it doesn't exist
        kernel_data_dir = os.path.join(current_experiment_dir, "Kernel_Data")
        if not os.path.exists(kernel_data_dir):
            os.makedirs(kernel_data_dir)
            print(f"Kernel Data directory {kernel_data_dir} created successfully.")
        else:
            print(f"Kernel Data directory {kernel_data_dir} already exists.")

    if RooflineFolder:
        # Create the Roofline Data directory if it doesn't exist
        roofline_data_dir = os.path.join(current_experiment_dir, "Roofline_Data")
        if not os.path.exists(roofline_data_dir):
            os.makedirs(roofline_data_dir)
            print(f"Roofline Data directory {roofline_data_dir} created successfully.")
        else:
            print(f"Roofline Data directory {roofline_data_dir} already exists.")

    if PowerCapFolder:
        # Create the PowerCap_Pridiction directory if it doesn't exist
        powercap_data_dir = os.path.join(current_experiment_dir, "PowerCap_Pridiction")
        if not os.path.exists(powercap_data_dir):
            os.makedirs(powercap_data_dir)
            print(f"PowerCap_Pridiction directory {powercap_data_dir} created successfully.")
        else:
            print(f"PowerCap_Pridiction directory {powercap_data_dir} already exists.")

    return kernel_data_dir, roofline_data_dir, powercap_data_dir