#! /usr/bin/env python3
import json
import subprocess
import os
import re
import time
import argparse
import pandas as pd
from typing import Union

class Likwid:
    def __init__(self) -> None:
        subprocess.run(["likwid-topology", "-o", "topo.json"])
        with open("topo.json") as f:
            self.dict_sections = json.load(f)

    def dump_data(self) -> None:
        print(json.dumps(self.dict_sections, indent=4))

    #fucntion to convert the every chache topology size to be a number and a put a new key called unit
    def convert_cache_size_to_number(self) -> None:
        for key in self.dict_sections:
            if "Cache Topology " in key:
                self.dict_sections[key]["unit"] = self.dict_sections[key]["Size:"].split()[1]
                self.dict_sections[key]["Size:"] = int(self.dict_sections[key]["Size:"].split()[0])

    #define a function to check if all the cores are availible 
    def check_availible_cores(self) -> bool:
        for core in self.dict_sections["Topology"]:
            if core["Available"] != "*":
                print(f"Core {core['Core']} is not availible")
                print("check your grub settings and try again")
                return False
        return True
    
    #define a function to get the cache topology with a given level
    def get_cache_topology(self, level):
        cache = []
        for key in self.dict_sections:
            if "Cache Topology " in key:
                if self.dict_sections[key]["Level:"] == level:
                    cache.append(self.dict_sections[key])
        return cache

    #define a function to get the last level cache number and key
    def get_last_level_cache(self):
        last_level_cache = 0
        last_level_cache_key = ""
        for key in self.dict_sections:
            if "Cache Topology " in key:
                if(last_level_cache < self.dict_sections[key]["Level:"]):
                    last_level_cache = self.dict_sections[key]["Level:"]
                    last_level_cache_key = key

        return last_level_cache, last_level_cache_key
    

    
# <---------------------------------------------------------------------------------------- static members after this line ------------------------------------------->
    #disable prefecthers
    @staticmethod
    def disable_prefetchers(sudo_password) -> None:
        #likwid-features -d HW_PREFETCHER,CL_PREFETCHER,DCU_PREFETCHER,IP_PREFETCHER -c N command disables the prefetchers
        try:
            subprocess.run(["sudo -S likwid-features -d HW_PREFETCHER,CL_PREFETCHER,DCU_PREFETCHER,IP_PREFETCHER -c N"],input=sudo_password.encode('utf-8'),shell=True)
            print("[[Prefetchers disabled]]")
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-features -d HW_PREFETCHER,CL_PREFETCHER,DCU_PREFETCHER,IP_PREFETCHER -c N command disables the prefetchers \n Error :", e.output)


    @staticmethod
    def enable_prefetchers(sudo_password) -> None:
        #likwid-features -e HW_PREFETCHER,CL_PREFETCHER,DCU_PREFETCHER,IP_PREFETCHER -c N command enables the prefetchers
        try:
            subprocess.run(["sudo -S likwid-features -e HW_PREFETCHER,CL_PREFETCHER,DCU_PREFETCHER,IP_PREFETCHER -c N"],input=sudo_password.encode('utf-8'),shell=True)
            print("[[Prefetchers enabled]]")
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-features -e HW_PREFETCHER,CL_PREFETCHER,DCU_PREFETCHER,IP_PREFETCHER -c N command enables the prefetchers \n Error :", e.output)

    #disable turbo boost
    @staticmethod
    def disable_turbo_boost(sudo_password) -> None:
        #likwid-setFrequencies -t 0 
        try:
            subprocess.run(["sudo -S likwid-setFrequencies -t 0"],input=sudo_password.encode('utf-8'),shell=True)
            print("[[Turbo boost disabled]]")
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-setFrequencies -t 0 command disables the turbo boost \n Error :", e.output)

    #enable turbo boost
    @staticmethod
    def enable_turbo_boost(sudo_password) -> None:
        #likwid-setFrequencies -t 1
        try:
            subprocess.run(["sudo -S likwid-setFrequencies -t 1"],input=sudo_password.encode('utf-8'),shell=True)
            print("[[Turbo boost enabled]]")
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-setFrequencies -t 1 command enables the turbo boost \n Error :", e.output)
    
    #function to run likwid-perfctr with given command and group and socket
    @staticmethod
    def run_perfctr(command,group,c_arg,sudo_password) -> dict[str, str]:
        #likwid-perfctr -g group -s socket command
        try:
            output = subprocess.run([f"likwid-perfctr -g {group} -s {c_arg} {command}"],
                                    input=sudo_password.encode('utf-8'),
                                    shell=True,
                                    text=True,
                                    capture_output=True,
                                    check=True)
            return {"output": output.stdout}
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-perfctr -g group -s socket command runs the perfctr \n Error :", e.output)
            return {"output": "error"}

    #function to run likwid-perfctr with given command and group and socket with marker
    @staticmethod
    def run_perfctr_with_marker(command,group,c_arg,sudo_password) -> dict[str, str]:
        #likwid-perfctr -g group -s socket command
        try:
            output = subprocess.run([f"likwid-perfctr -m -g {group} -s {c_arg} {command}"],
                                    input=sudo_password.encode('utf-8'),
                                    shell=True,
                                    text=True,
                                    capture_output=True,
                                    check=True)
            return {"output": output.stdout}
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-perfctr -g group -s socket command runs the perfctr \n Error :", e.output)
            return {"output": "error"}

    #fucntion to change governor to userspace
    @staticmethod
    def change_governor_to_userspace(sudo_password) -> None:
        #likwid-setFrequencies -g userspace
        try:
            subprocess.run(["sudo -S likwid-setFrequencies -g userspace"],input=sudo_password.encode('utf-8'),shell=True)
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-setFrequencies -g userspace command changes the governor to userspace \n Error :", e.output)
    
    #fuction to reset the governor to performance
    @staticmethod
    def reset_governor_to_performance(sudo_password) -> None:
        #likwid-setFrequencies -reset
        try:
            subprocess.run(["sudo -S likwid-setFrequencies -reset"],input=sudo_password.encode('utf-8'),shell=True)
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-setFrequencies -reset command resets the governor to performance \n Error :", e.output)
    
    #function to give list of all availible likwid-bench kernels
    @staticmethod
    def get_availible_bench_kernels() -> list[str]:
        #likwid-bench -a
        try:
            output = subprocess.check_output(["likwid-bench", "-a"], text=True)
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-bench -l command gets the availible benchmarks \n Error :", e.output)
        avail_bench_kernels = output.split("\n")
        avail_bench_kernels = [x.split() for x in avail_bench_kernels]
        avail_bench_kernels = [x[0] for x in avail_bench_kernels if len(x) > 0]
        print(f"{avail_bench_kernels}")
        return avail_bench_kernels

    #function to get the availible frequencies as a list
    @staticmethod
    def get_availible_frequencies() -> list[float]:
        #likwid-setFrequencies -l
        try:
            output = subprocess.check_output(["likwid-setFrequencies", "-l"], text=True)
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-setFrequencies -l command gets the availible frequencies \n Error :", e.output)
        avail_frequencies = re.findall(r'\d+\.\d+', output)
        print(f"availible frequencies are {avail_frequencies}")
        # avail_frequencies = [float(x) for x in avail_frequencies]
        return avail_frequencies

    #function to set the frequency
    @staticmethod
    def set_frequency(sudo_password, frequency) -> None:
        #likwid-setFrequencies -f frequency
        try:
            subprocess.run(["sudo -S likwid-setFrequencies -f", frequency],input=sudo_password.encode('utf-8'))
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-setFrequencies -f frequency command sets the frequency \n Error :", e.output)
    
    #function to run the benchmark which accepts the kernel and 
    @staticmethod
    def run_bench(kernel,W_agrs,cache_flush=True) -> Union[subprocess.CompletedProcess[str],None]:
        if cache_flush:
            Likwid.clear_cache()
        #likwid-bench -t kernel -W W_agrs
        try:
            likwid_process_output = subprocess.run([f"likwid-bench -t {kernel} -W {W_agrs}"], text=True, capture_output=True, check=True)
            return likwid_process_output
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-bench -t kernel -W W_args command runs the benchmark \n Error :", e.output)
    
    #function to run performace benchmark and return the greped output
    @staticmethod
    def run_performance_bench(kernel,W_args,cache_flush=True) -> dict[str, Union[float, str]]:
        if cache_flush:
            Likwid.clear_cache()
        #likwid-bench -t kernel -W W_agrs
        try:
            likwid_performance_output = subprocess.run([f"likwid-bench -t {kernel} -W {W_args} | grep Flops/s"], shell=True, text=True, capture_output=True, check=True)
            values = {"value": float(likwid_performance_output.stdout.split(':')[1].strip()), "unit": likwid_performance_output.stdout.split(':')[0].strip()}
            return values
        except subprocess.CalledProcessError as e:
            print(f"Error executing command :likwid-bench -t {kernel} -W {W_args} command runs the benchmark \n Error :", e.output)
            return {"bad kernel": kernel}
    
    #function to run bandwidth benchmark and return the greped output
    @staticmethod
    def run_bandwidth_bench(kernel,W_args,cache_flush=True) -> dict[str, Union[float, str]]:
        if cache_flush:
            Likwid.clear_cache()
        #likwid-bench -t kernel -W W_agrs
        try:
            likwid_bandwidth_output = subprocess.run([f"likwid-bench -t {kernel} -W {W_args} | grep Byte/s"], shell=True, text=True, capture_output=True, check=True)
            values = {"value": float(likwid_bandwidth_output.stdout.split(':')[1].strip()), "unit": likwid_bandwidth_output.stdout.split(':')[0].strip()}
            return values
        except subprocess.CalledProcessError as e:
            print(f"Error executing command :likwid-bench -t {kernel} -W {W_args} command runs the benchmark \n Error :", e.output)
            return {"bad kernel": kernel}

    #clear cache using likwid-pin
    @staticmethod
    def clear_cache() -> None:

        #likwid-memsweeper
        try:
            subprocess.run(["likwid-memsweeper"])
        except subprocess.CalledProcessError as e:
            print("Error executing command :likwid-memsweeper command clears the cache \n Error :", e.output)

    # these use the custom likwid made to measure energy and power
    @staticmethod
    def run_energy_bench(kernel,W_args,password,cache_flush=True,likwid_bench_path="") -> dict[str, Union[int, str]]:
        energy_output = 0
        while energy_output <=0 :
            if cache_flush:
                Likwid.clear_cache()
            #likwid-bench -t kernel -W W_agrs
            try:
                likwid_energy_output = subprocess.run([f"MY_SUDO_PASSWORD={password} {likwid_bench_path} -t {kernel} -W {W_args}"], shell=True, text=True, capture_output=True, check=True)
                text_output = likwid_energy_output.stdout
                return { "output" : text_output}
            except subprocess.CalledProcessError as e:
                print(f"Error executing command :likwid-bench -t {kernel} -W {W_args} command runs the benchmark \n Error :", e.output)
                return {"bad kernel": kernel}
        return {"bad kernel": kernel}
    
    # def run_energy_bench(kernel,W_args,password,cache_flush=True,likwid_bench_path="") -> dict[str, Union[int, str]]:
    #     energy_output = 0
    #     while energy_output <=0 :
    #         if cache_flush:
    #             Likwid.clear_cache()
    #         #likwid-bench -t kernel -W W_agrs
    #         try:
    #             likwid_energy_output = subprocess.run([f"MY_SUDO_PASSWORD={password} {likwid_bench_path} -t {kernel} -W {W_args} | grep Energy:"], shell=True, text=True, capture_output=True, check=True)
    #             values = {"value": int(likwid_energy_output.stdout.split()[1]), "unit": likwid_energy_output.stdout.split()[2] + likwid_energy_output.stdout.split()[3]}
    #             energy_output = values["value"]
    #             return values
    #         except subprocess.CalledProcessError as e:
    #             print(f"Error executing command :likwid-bench -t {kernel} -W {W_args} command runs the benchmark \n Error :", e.output)
    #             return {"bad kernel": kernel}
    #     return {"bad kernel": kernel}

    # @staticmethod
    # def run_power_bench(kernel,W_args,password,cache_flush=True,likwid_bench_path="") -> dict[str, Union[float, str]]:
    #     energy_output = 0
    #     while energy_output <=0 :
    #         if cache_flush:
    #             Likwid.clear_cache()
    #         #likwid-bench -t kernel -W W_agrs
    #         try:
    #             likwid_energy_output = subprocess.run([f"MY_SUDO_PASSWORD={password} {likwid_bench_path} -t {kernel} -W {W_args} | grep Energy:"],
    #                                                    shell=True,
    #                                                    text=True, capture_output=True, check=True)
    #             values = {
    #                       "value": float(likwid_energy_output.stdout.split()[1]), 
    #                       "unit": likwid_energy_output.stdout.split()[2] + likwid_energy_output.stdout.split()[3] + likwid_energy_output.stdout.split()[4]
    #                       }
    #             energy_output = values["value"]
    #             return values
    #         #output.stdout.split()[2] + output.stdout.split()[3] + output.stdout.split()[4]
    #         except subprocess.CalledProcessError as e:
    #             print(f"Error executing command :likwid-bench -t {kernel} -W {W_args} command runs the benchmark \n Error :", e.output)
    #             return {"bad kernel": kernel}
    #     return {"bad kernel": kernel}


def run_all_benchmarks_for_frequency(output_dir : str,frequency : int,zzz : int,
                                     cache_flush : bool =True,suffix : str=""):
    data ={
    "Name": [],
    "Frequency": [],
    "Value": [],
    "Unit": []
    }


    Topo = Likwid()
    Topo.convert_cache_size_to_number()
    if not Topo.check_availible_cores():
        print("Not all cores are availible for testing. Exiting...")
        exit(1)

    availible_kernels = Topo.get_availible_bench_kernels()
    not_availible_kernels = []
    kernels_run = []
    #iterate over all availible frequencies
    Total_number_threads = Topo.dict_sections["Hardware Thread Topology"]["Sockets:"] * Topo.dict_sections["Hardware Thread Topology"]["Threads per core:"] * Topo.dict_sections["Hardware Thread Topology"]["Cores per socket:"]
    Total_number_cores = Topo.dict_sections["Hardware Thread Topology"]["Sockets:"] * Topo.dict_sections["Hardware Thread Topology"]["Cores per socket:"]

    #run all benchmarks
    cache = Topo.get_cache_topology(1)
    for kernel in availible_kernels:
        time.sleep(zzz)
        if "peakflops" in kernel:
            Wargs = "N"+":"+str(cache[0]['Size:'])+cache[0]['unit']+":"+str(Total_number_threads)
            print(f"Running {kernel} with Wargs {Wargs}")
            output = Likwid.run_performance_bench(kernel,Wargs,cache_flush)
        elif "load" in kernel or "store" in kernel or "copy" in kernel or "stream" in kernel or "triad" in kernel:
            Wargs = "N:"+str(Total_number_cores)+"GB:"+str(Total_number_threads)
            print(f"Running {kernel} with Wargs {Wargs}")
            output = Likwid.run_bandwidth_bench(kernel,Wargs,cache_flush)

        if "bad kernel" in output:
            not_availible_kernels.append(kernel)
        else:
            kernels_run.append(kernel)
            data["Name"].append(kernel)
            data["Frequency"].append(frequency)
            data["Value"].append(output["value"])
            data["Unit"].append(output["unit"])
    
    print(f"Ran {kernels_run} and not ran {not_availible_kernels}")
    print(f"Data collected is {data}")
    df = pd.DataFrame(data)
    csv_file = os.path.join(output_dir,f"likwid_bechmarks_{suffix}kHz.csv")
    df.to_csv(csv_file,index=False)



if __name__ == "__main__":  
    # Likwid.run_all_benchmarks_for_frequency("nilesh",output_dir="out",frequency=2.4)
    # parser = argparse.ArgumentParser(description="Get topology information and ")
    # parser.add_argument("-d", "--dump", action="store_true", help="Dump topology information")
    # parser.add_argument("-p", "--password", help="sudo password")
    # args = parser.parse_args()
    # info = Likwid()
    # info.convert_cache_size_to_number()
    # print(Likwid.get_availible_bench_kernels())
    # # if args.password:
    #     # print(info.get_availible_frequencies())
    #     # info.disable_prefetchers(args.password)
    #     # info.disable_turbo_boost(args.password)
    #     # info.enable_prefetchers(args.password)
    #     # info.enable_turbo_boost(args.password)
    # if args.dump:
    #     info.dump_data()
    # os.remove("topo.json")
    exit()