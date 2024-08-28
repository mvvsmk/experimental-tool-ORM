#! /usr/bin/env bash

# ps aux | grep .vscode-server | awk '{print $2}' | xargs kill

OUTPUT_DIR="energy_results"
DATE=$(date +'%d%b')
MACHINE="zen3"
PASSWORD="nilesh21"

# List of types
strings=("fma_avx_300")

iterations=(1)

sleep_times=(10)

# Loop through each string
for str in "${strings[@]}"; do
  echo "Processing: $str"
  TYPE=$str
  for ITRS in "${iterations[@]}"; do
    for SLEEP_TIME in "${sleep_times[@]}"; do
      # Define the folder name with the iteration and sleep time suffix
      FOLDER_NAME="${OUTPUT_DIR}/${DATE}/${MACHINE}_multiple_roofline/${TYPE}_itr${ITRS}_sleep${SLEEP_TIME}_157"
      
      # Remove the folder if it exists
      echo $PASSWORD | sudo -S rm -rf ${FOLDER_NAME}
      
      # Create the folder
      mkdir -p $FOLDER_NAME

      SOURCE_DIR="kernels/a-roofline-model-of-energy-ubenchmarks/cpu/amd/zen3/ryzen7_5845_${TYPE}"
      
      # Run commands
      echo $PASSWORD | sudo -S cpupower frequency-info > ${FOLDER_NAME}/cpupower_frequency_info.txt 2>&1
      echo $PASSWORD | sudo -S likwid-features -l -c N > ${FOLDER_NAME}/likwid_features.txt 2>&1
      
      ./utils_roofline.py --source_dir ${SOURCE_DIR} --output_dir ${FOLDER_NAME} --machine ${MACHINE} --build_dir "${DATE}_bin_test" --password ${PASSWORD} --iterations ${ITRS} --sleep_time ${SLEEP_TIME} --env_ITR 1  #> ${FOLDER_NAME}/log.txt 2>&1      
    done
  done
done

# ps aux | grep .vscode-server | awk '{print $2}' | xargs kill

# OUTPUT_DIR="energy_results"
# DATE=$(date +'%d%b')
# MACHINE="broadwell"
# PASSWORD="nilesh"

# # List of types
# strings=("mod_fma_300" "mod_fma_500" "mod_stride_inc_500" "org_300" "org_500")

# # Loop through each string
# for str in "${strings[@]}"; do
#   echo "Processing: $str"
#   TYPE=$str
#   FOLDER_NAME="${OUTPUT_DIR}/${DATE}/${MACHINE}/${TYPE}"
#   mkdir -p $FOLDER_NAME
#   SOURCE_DIR="kernels/a-roofline-model-of-energy-ubenchmarks/cpu/intel/broadwell/Intel(R)_Xeon(R)_CPU_E5_1650_v4_@_3.60GHz_${TYPE}"
  
#   sleep 120
#   ./utils_roofline.py --source_dir ${SOURCE_DIR} --output_dir ${FOLDER_NAME} --machine ${MACHINE} --build_dir "${DATE}_bin_test" --password ${PASSWORD} > ${FOLDER_NAME}/log.txt 2>&1
#   # ./energy_results/plot_energy_comp.py --result_folder ${FOLDER_NAME} --machine ${MACHINE} --output_folder ${FOLDER_NAME} 
# done
