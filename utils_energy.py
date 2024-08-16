# NEVER DIRECTLY IMPORT THIS FILE

import subprocess
import numpy as np

def get_max_power_cap_W(machine):
    data = {
        'broadwell' : 140,
        'raptorlake' : 154,
        'rocketlake' : 65,
    }
    return data[machine]

def min_power_cap_W(machine):
    data = {
        'broadwell' : 15,
        'raptorlake' : 15,
        'rocketlake' : 15,
    }
    return data[machine]

def getcache_counter_mapping(machine,cache):
    data = {
    "broadwell" :{
        'L1' : 'PAPI_LST_INS',
        'L2' : 'PAPI_L1_DCM',
        'L3' : 'PAPI_L2_DCM',
        'DRAM' : "perf::PERF_COUNT_HW_CACHE_LL:MISS"
    },
    "raptorlake" :{
        'L1' : 'PAPI_LST_INS',
        'L2' : 'PAPI_L1_DCM',
        'L3' : 'PAPI_L2_DCM',
        'DRAM' : "perf::PERF_COUNT_HW_CACHE_LL:MISS"
    },
    "rocketlake" :{
        'L1' : 'FP_ARITH_INST_RETIRED:SCALAR',
        'L2' : 'perf::PERF_COUNT_HW_CACHE_L1D:MISS',
        'L3' : 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS', # may be we could use 'perf::PERF_COUNT_HW_CACHE_LL:ACCESS' for L3
        'DRAM' : "perf::PERF_COUNT_HW_CACHE_LL:MISS"
    },
    }
    return data[machine][cache]


def get_constant_power(machine : str,sudo_pass :str, duration :str) -> float:
    energy_output = [0,0,0]
    count = 0
    while count < 3:
        try:
            output = subprocess.run(f"./constant_power_measurement.sh {sudo_pass} {duration}",shell=True,capture_output=True,check=True)
        except subprocess.CalledProcessError as e:
            print(f"Error: running constant_power_measurement.sh failed with return code {e.returncode}")
            continue
        res = output.stdout.decode('utf-8').split("\n\n")
        res = [int(x) for x in res if x != ""]
        energy_output[count] = res[1] - res[0]
        if energy_output[count] > 0 :
            count += 1

        else:
            print("Energy is less than 0")
            continue
    
    factor = get_energy_multiplication_factor(machine)
    
    mean_energy = np.mean(energy_output) * factor
        
    data = {
        "Energy" : mean_energy,
        "Power" : mean_energy / duration,
        "Time" : duration
    }
    return data


def get_energy_multiplication_factor(machine : str) -> float:
    multiplier = {
        "raptorlake" : (1/2)**14,
        "rocketlake" : (1/2)**14,
        "skylake" : (1/2)**14,
        "broadwell" : (1/2)**14
    }
    return multiplier[machine]