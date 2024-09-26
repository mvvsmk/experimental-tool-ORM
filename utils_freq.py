#!/usr/bin/env python3

"""
This module is used to set the governer to userspace
and set the frequency of the cpu to a specific value
"""

import subprocess
import os

#get max uncore frequency intel
def get_max_uncore_freq_intel() -> int:
    try:
        output = subprocess.check_output("cat /sys/devices/system/cpu/intel_uncore_frequency/package_00_die_00/initial_max_freq_khz", shell=True)
        return int(output.decode())
    except subprocess.CalledProcessError as e:
        print(f"Error running cpupower frequency-info: {e}")
        return 0


def set_uncore_freq_intel(frequency,password) -> None:
    command1 = f"echo '{frequency}'  | sudo tee  /sys/devices/system/cpu/intel_uncore_frequency/package_00_die_00/max_freq_khz"
    command2 = f"echo '{frequency}'  | sudo tee  /sys/devices/system/cpu/intel_uncore_frequency/package_00_die_00/min_freq_khz"
    try:
        subprocess.run([command1],input=password.encode('utf-8'),shell=True,check=True)
        subprocess.run([command2],input=password.encode('utf-8'),shell=True,check=True)
        print(f"Uncore Frequency set to {frequency}")
    except subprocess.CalledProcessError as e:
        print(f"Error setting uncore frequency to {frequency}: {e}")

def set_max_uncore_freq_intel(frequency,password) -> None:
    command1 = f"echo '{frequency}'  | sudo tee  /sys/devices/system/cpu/intel_uncore_frequency/package_00_die_00/max_freq_khz"
    try:
        subprocess.run([command1],input=password.encode('utf-8'),shell=True,check=True)
        print(f"Max uncore Frequency set to {frequency}")
    except subprocess.CalledProcessError as e:
        print(f"Error setting max uncore frequency to {frequency}: {e}")

"""
Use `initial_max_freq_khz` and `initial_min_freq_khz` to reset uncore frequecies
to default values
"""
def reset_uncore_freq_intel(password) -> None:
    command1 = f"cat /sys/devices/system/cpu/intel_uncore_frequency/initial_max_freq_khz | sudo tee  /sys/devices/system/cpu/intel_uncore_frequency/package_00_die_00/max_freq_khz"
    command2 = f"cat /sys/devices/system/cpu/intel_uncore_frequency/initial_min_freq_khz | sudo tee  /sys/devices/system/cpu/intel_uncore_frequency/package_00_die_00/min_freq_khz"
    try:
        subprocess.run([command1],input=password.encode('utf-8'),shell=True,check=True)
        subprocess.run([command2],input=password.encode('utf-8'),shell=True,check=True)
        print(f"Uncore Frequency set to default")
    except subprocess.CalledProcessError as e:
        print(f"Error setting uncore frequency to default: {e}")

def convert_frequency(frequencies) -> list[int]:
    converted_frequencies = []
    for freq in frequencies:
        
        ch = freq[-3]
        if ch.isalpha():
            value, unit = float(freq[:-3]), freq[-3:]
            if unit == 'kHz':
                converted_frequencies.append(int(value))
            elif unit == 'MHz':
                converted_frequencies.append(int(value * 1000))
            elif unit == 'GHz':
                converted_frequencies.append(int(value * 1000000))
            elif unit == 'THz':
                converted_frequencies.append(int(value * 1000000000))
            else:
                converted_frequencies.append("Invalid unit")
                print(f"Invalid unit: {unit}")
                print(f"Valid units are Hz, kHz, MHz, GHz, THz")
        else :
            value, unit = float(freq[:-2]), freq[-2:]
            print(unit)
            if unit == 'Hz':
                converted_frequencies.append(int(value * 0.001))
            if value == 0:
                print(f"This value was in Hz: {value} , please check if the value is correct")
                

    return  converted_frequencies

def set_governer(governer,sudo_password) -> None:
    """
    Set the governer to userspace
    """
    try:
        # subprocess.call("sudo sh -c 'echo userspace > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor'",stdin=password.encode() ,shell=True).communicate()
        subprocess.run([f"sudo -S LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64 cpupower frequency-set -g {governer}"],input=sudo_password.encode('utf-8'),shell=True,check=True)
        print("Governer set to userspace")
    except subprocess.CalledProcessError as e:
        print(f"Error setting governer to {governer}: {e}")


def display_freq_info() -> None:
    """
    Display the current governer
    """
    try:
        output = subprocess.check_output(["cpupower","frequency-info"], text=True)
        print("---------------------------------------")
        print(f"exec cpupower frequency-info\n{output}")
        print("---------------------------------------")
    except subprocess.CalledProcessError as e:
        print(f"Error running cpupower frequency-info: {e}")

# give any arguments to cpupower
def sudo_call_cpupower(password,args) -> None:
    """
    Display the current governer
    """
    try :
        output = subprocess.run([f"sudo -S LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64 cpupower {args}"], input=password.encode('utf-8'),shell=True,capture_output=True,check=True)
        print("---------------------------------------")
        print(f"exec cpupower frequency-info\n stdout : {output.stdout.decode('utf-8')} \n stderr : {output.stderr.decode('utf-8')}")
        print("---------------------------------------")
        return output
    except subprocess.CalledProcessError as e:
        print(f"Error running cpupower frequency-info with {args}: {e}")

def get_available_frequencies_freq_scaling_file() -> list[int]:
   """
   Get the available frequencies
   """
   try:
       output = subprocess.check_output("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies", shell=True)
       frequencies = sorted(set(map(int, output.decode().split())))
       # if the highest frequency and second highest frequency within 1000 then remove the highest frequency
       frequencies.sort()
       if len(frequencies) > 1:
           if frequencies[-1] - frequencies[-2] <= 1000:
                frequencies.pop(-1)
       print(frequencies)
       return frequencies
   except subprocess.CalledProcessError as e:
       print(f"Error running cpupower frequency-info: {e}")
       return []

#check if the file /sys/devices/system/cpu/cpu*/cpufreq/scaling_available_frequencies exists
def scaling_available_frequencies_present() -> bool:
    try:
        output = subprocess.run("ls /sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies",shell=True,check=True)
        return True
    except subprocess.CalledProcessError as e:
        print(f"Error running cpupower frequency-info: {e}")
        return False

# check if the cpupower is installed
def check_cpupower() -> bool:
    try:
        output = subprocess.run("cpupower --version",shell=True,capture_output=True,check=True)
        print(output.stdout.decode('utf-8'))
        return True
    except subprocess.CalledProcessError as e:
        print(f"Error running cpupower frequency-info: {e}")
        return False


def get_active_governor(password) -> str:
    # Run the cpupower frequency-info command
    try:
        result = sudo_call_cpupower(password=password,args="frequency-info")

        # Check if the command ran successfully
        if result.returncode != 0:
            raise Exception(f"Error: {result.stderr}")
        # print("here")
        
        # Split the output into lines
        lines = result.stdout.decode().split('\n')
        
        # Search for the line containing the active governor
        for line in lines:
            if 'The governor "' in line:
                # Extract the governor name between the quotes
                governor = line.split('"')[1]
                return governor
        
        # Return a message if no governor was found
        return "Governor information not found"
    
    except Exception as e:
        return str(e)



def get_available_frequencies_cpupower() -> list[int]:
    """
    Get the available frequencies
    """
    try:
        output = subprocess.run("LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64 cpupower frequency-info | grep \"available frequency steps\"", shell=True,capture_output=True,check=True)
        frequencies = output.stdout.decode('utf-8')
        frequencies = frequencies.split(":")[1].strip().replace(" ","").split(",")
        #if 2 entries in frequencies is same then remove one of them one of them might be a trubo frequency
        if len(frequencies) > 1:
            if frequencies[0] == frequencies[1]:
                frequencies.pop(0)
        available_freq = convert_frequency(frequencies)
        available_freq.sort()
        #convert all frequencies to int
        available_freq = list(map(int,available_freq))
        print(available_freq)
        return available_freq

    except subprocess.CalledProcessError as e:
        print(f"Error running cpupower frequency-info: {e}")
        return []


# function to get available frequencies
# check if the file /sys/devices/system/cpu/cpu*/cpufreq/scaling_available_frequencies exists
# if it exists then use get_available_frequencies_freq_scaling_file to get frequencies
# else use get_available_frequencies_cpupower to get frequencies
def get_available_frequencies() -> list[int]:
    if scaling_available_frequencies_present():
        return get_available_frequencies_freq_scaling_file()
    elif check_cpupower():
        return get_available_frequencies_cpupower()
    else:
        print("No available frequencies found")
        exit()

def exec_for_all_frequencies(func_to_exec,suffix="") -> None:
    available_frequencies = get_available_frequencies()
    for freq in available_frequencies:
        func_to_exec(freq)

def set_frequency(sudo_password,frequency) -> None:
    """
    Set the frequency of the cpu to a specific value
    """
    try:
        # subprocess.call(f"sudo sh -c 'echo {frequency} > /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed'",shell=True)
        subprocess.run([f"sudo -S LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64 cpupower frequency-set -d {frequency}"],input=sudo_password.encode('utf-8'),shell=True,check=True)
        subprocess.run([f"sudo -S LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64 cpupower frequency-set -u {frequency}"],input=sudo_password.encode('utf-8'),shell=True,check=True)
        print(f"Frequency set to {frequency}")
    except subprocess.CalledProcessError as e:
        print(f"Error setting frequency to {frequency}: {e}")

#reset frequencies
def reset_frequency(sudo_password) -> None:
    all = get_available_frequencies()
    all.sort()
    max = all[-1]
    min = all[0]
    try:
        subprocess.run([f"sudo -S LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64 cpupower frequency-set -d {min}"],input=sudo_password.encode('utf-8'),shell=True,check=True)
        subprocess.run([f"sudo -S LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64 cpupower frequency-set -u {max}"],input=sudo_password.encode('utf-8'),shell=True,check=True)
        print(f"Frequency reset to default")
    except subprocess.CalledProcessError as e:
        print(f"Error resetting frequency: {e}")




if __name__ == "__main__":
    set_governer("userspace","nilesh")
    set_governer("performance","nilesh")
    sudo_call_cpupower("nilesh","frequency-info -g")
    get_available_frequencies()
