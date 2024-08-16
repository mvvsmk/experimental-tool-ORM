import os
import sys as sys_time
import subprocess
import pandas as pd
from state_load_store import save_state

# Function to run all the polybench kernels and collect the output
def run_kernels_papi(build_dir, output_dir,num_iterations, suffix, sleep, password, high_performance_cores):

    data = {
        "Name": [],
    }

    # Create the output directory if it doesn't exist
    os.makedirs(output_dir, exist_ok=True)

    # Counter
    counter = 0

    # Loop through each file in the build directory
    for file in os.listdir(build_dir):
        sys_time.sleep(sleep)
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
            for i in range(len(list_of_measurements)):
                value = int(list_of_measurements[i].split('=')[1])
                key = list_of_measurements[i].split('=')[0]
                # check if key is already present in the dictionary
                if key in data:
                    data[key].append(value)
                else:
                    data[key] = [value]
            counter += 1

    df = pd.DataFrame(data)
    csv_name = os.path.join(output_dir,f"kernel_data_PolyBenchC-4.2.1_{suffix}.csv")
    df.to_csv(csv_name,index=False)
    df_median = df.groupby('Name').median()
    df_median.to_csv(os.path.join(output_dir,f"kernel_data_PolyBenchC-4.2.1_{suffix}_median.csv"),index=True)
    print(f"Output files saved to: {output_dir}")
    print(f"Number of files run: {counter}")
    print(f"reset state polybench data")
    return {"dataframe":df_median,"output_file":csv_name}