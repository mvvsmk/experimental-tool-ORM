#! /usr/bin/env bash

ps aux | grep .vscode-server | awk '{print $2}' | xargs kill

OUTPUT_DIR="energy_results"
DATE=$(date +'%d%b')
MACHINE="broadwell"
PASSWORD="nilesh"

# List of types
strings=("mod_fma_300" "mod_fma_500" "mod_stride_inc_500" "org_300" "org_500")

# Loop through each string
for str in "${strings[@]}"; do
  echo "Processing: $str"
  TYPE=$str
  FOLDER_NAME="${OUTPUT_DIR}/${DATE}/${MACHINE}/${TYPE}"
  mkdir -p $FOLDER_NAME
  SOURCE_DIR="kernels/a-roofline-model-of-energy-ubenchmarks/cpu/intel/broadwell/Intel(R)_Xeon(R)_CPU_E5_1650_v4_@_3.60GHz_${TYPE}"
  
  sleep 120
  ./energy_validate.py --source_dir ${SOURCE_DIR} --output_dir ${FOLDER_NAME} --machine ${MACHINE} --build_dir "${DATE}_bin_test" --password ${PASSWORD} > ${FOLDER_NAME}/log.txt 2>&1
  ./energy_results/plot_energy_comp.py --result_folder ${FOLDER_NAME} --machine ${MACHINE} --output_folder ${FOLDER_NAME} 
done
