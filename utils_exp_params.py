#! /usr/bin/env python3
"""
The script checks all the parameters of the current running system. This script should be run before running the Likwid_roofline.py script.
The script checks the following parameters:
1. The number of cores available for testing.
2. Is hyper threading disabled.
3. If the driver is acpi_cpufreq.
4. If the current governer is userspace.
5. If the turbo boost is disabled.
"""

import subprocess



def helper_check_current_governer(gov = "userspace"):
    """
    Check if the current governer is userspace
    """
    governer = subprocess.check_output("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor", shell=True).decode("utf-8")
    if governer.strip() != gov:
        print("Current governer is not userspace.")
        return False
    else :
        print("Current governer is userspace")
        return True

def helper_check_hyper_threading():
    """
    Check if hyper threading is enabled
    """
    hyper_threading = subprocess.check_output("lscpu | grep 'Thread(s) per core:'", shell=True).decode("utf-8")
    hyper_threading = int(hyper_threading.split(":")[1].strip())
    if hyper_threading != 1:
        print("Hyper threading is enabled")
        return False
    else :
        print("Hyper threading is disabled")
        return True

def helper_check_driver_acpi():
    """
    Check if the driver is acpi_cpufreq
    """
    driver = subprocess.check_output("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_driver", shell=True).decode("utf-8")
    if driver.strip() != "acpi_cpufreq" and driver.strip() != "acpi-cpufreq" :
        print("Driver is not acpi_cpufreq")
        return False
    else :
        print("Driver is acpi_cpufreq")
        return True

def helper_check_driver_intel_pstate():
    """
    Check if the driver is acpi_cpufreq
    """
    driver = subprocess.check_output("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_driver", shell=True).decode("utf-8")
    if driver.strip() != "intel_pstate" and driver.strip() != "intel-pstate" :
        print("Driver is not intel_pstate")
        return False
    else :
        print("Driver is intel_pstate")
        return True

def check_exp_setup():
    """
    Check if all the parameters are correct
    """
    if(helper_check_current_governer() and helper_check_hyper_threading() and helper_check_driver_acpi()):
        print("All parameters are correct. Proceeding...")
        return True
    print("Experimental setup is not correct. Exiting...")
    return False

def check_exp_setup_powerCap():
    if((helper_check_current_governer("performance") or helper_check_current_governer("powersave")) and not helper_check_hyper_threading() and helper_check_driver_intel_pstate()):
        print("All parameters are correct. Proceeding...")
        return True


if __name__ == "__main__":
    if not check_exp_setup():
        exit(1)
    print("All parameters are correct. Proceeding...")
    exit(0)

