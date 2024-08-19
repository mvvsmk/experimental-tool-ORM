#!/usr/bin/env bash
ps aux | grep .vscode-server | awk '{print $2}' | xargs kill

OUTPUT_DIR="energy_results"
DATE=$(date +'%d%b')
MACHINE="raptorlake"
PASSWORD="1234"

# List of types
strings=("fma_avx_300")

# Array of iterations
# iterations=(100)
# iterations=(200 400 600 800 1000 1200)
# iterations=(1073741824 2147483648 10737418240 21474836480 107374182400 214748364800 )
# iterations=(1073741824 2147483648)
iterations=(10)
#           102400000
# iterations=(2)

# Array of sleep times
sleep_times=(10 , 20 )

# Loop through each string
for str in "${strings[@]}"; do
  echo "Processing: $str"
  TYPE=$str
  for ITRS in "${iterations[@]}"; do
    for SLEEP_TIME in "${sleep_times[@]}"; do
      # Define the folder name with the iteration and sleep time suffix
      FOLDER_NAME="${OUTPUT_DIR}/${DATE}/${MACHINE}_multiple_roofline/${TYPE}_itr${ITRS}_sleep${SLEEP_TIME}_117"
      
      # Remove the folder if it exists
      echo $PASSWORD | sudo -S rm -rf ${FOLDER_NAME}
      
      # Create the folder
      mkdir -p $FOLDER_NAME
      
      SOURCE_DIR="kernels/a-roofline-model-of-energy-ubenchmarks/cpu/intel/raptorlake/i5-13600_${TYPE}"

      
      # Run commands
      echo $PASSWORD | sudo -S cpupower frequency-info > ${FOLDER_NAME}/cpupower_frequency_info.txt 2>&1
      echo $PASSWORD | sudo -S likwid-features -l -c N > ${FOLDER_NAME}/likwid_features.txt 2>&1
      echo $PASSWORD | sudo -S rdmsr -u 420 > ${FOLDER_NAME}/preftcher_features.txt 2>&1
      
      ./utils_roofline.py --source_dir ${SOURCE_DIR} --output_dir ${FOLDER_NAME} --machine ${MACHINE} --build_dir "${DATE}_bin_test" --password ${PASSWORD} --iterations ${ITRS} --sleep_time ${SLEEP_TIME} --env_ITR 1  #> ${FOLDER_NAME}/log.txt 2>&1
      ./energy_results/plot_energy_comp.py --result_folder ${FOLDER_NAME} --machine ${MACHINE} --output_folder ${FOLDER_NAME}
      
    done
  done
done
