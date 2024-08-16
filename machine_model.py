#! /usr/bin/env python3

# ------------------------------------------- Important Units Disclosures -------------------------------------------
# 1. Performance is measured in GFLOPS/s
# 2. Bandwidth is measured in GBytes/s
# 3. Time is measured in seconds

# MegaByte = 10*6 Bytes
# GigaByte = 10*9 Bytes
# Units Stored Would Be in GBytes/s, GFlops/s, MBytes/s, MFlops/s




import json
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import os

def get_required_roofline_files(folder,frequency):
    #get the files in the folder
    frequency = str(frequency)
    files = os.listdir(folder)
    for file in files:
        # check if the extention of the file is csv
        if frequency in file and (file.endswith(".csv") or file.endswith(".json")):
            if "likwid" in file:
                likwid_file = os.path.abspath(os.path.join(folder,file))
            elif "ERT" in file:
                ERT_file = os.path.abspath(os.path.join(folder,file))
            elif "a_roofline_model_for_energy" in file:
                energy_file = os.path.abspath(os.path.join(folder,file))
    
    return {
        "likwid" : likwid_file,
        "ERT" : ERT_file,
        "energy" : energy_file
    }

def get_required_kernel_files(folder,frequency):
    #get the files in the folder
    frequency = str(frequency)
    files = os.listdir(folder)
    for file in files:
        # check if the extention of the file is csv
        if frequency in file and (file.endswith(".csv") or file.endswith(".json")):
            if "likwid" in file:
                likwid_file = os.path.abspath(os.path.join(folder,file))
            elif "ERT" in file:
                ERT_file = os.path.abspath(os.path.join(folder,file))
            elif "a_roofline_model_for_energy" in file:
                energy_file = os.path.abspath(os.path.join(folder,file))
    
    return {
        "likwid" : likwid_file,
        "ERT" : ERT_file,
        "energy" : energy_file
    }



class Roofline_Const_Time:
    frequency : str = ""
    Machine_name : str = ""
    emperical_roofline = {
        "collected" : False,
        "bandwidth": {
            "l4":0,
            "dram":0,
            "units":"Gbytes/s"
        },
        "performance":0,
        "performance_units":"GFlops/s",
        "collected file": ""
    }
    a_roofline_model_for_energy_roofline = {
        "collected" : False,
        "bandwidth":0,
        "bandwidth_units":"Gbytes/s",
        "performance":0,
        "performance_units":"GFlops/s",
        "collected file": ""
    }
    likwid = {
        "collected" : False,
        "bandwidth":0,
        "bandwidth_units":"MBytes/s",
        "performance":0,
        "performance_units":"MFlops/s",
        "collected file": ""
    }

    units = {
        "MBytes/s" : 10**6,
        "MFlops/s" : 10**6,
        "GBytes/s" : 10**9,
        "GFlops/s" : 10**9
    }

    convert_units = {
        "MBytes/s" : 10**-3,
        "MFlops/s" : 10**-3,
        "GBytes/s" : 10**0,
        "GFlops/s" : 10**0
    }


    def __init__(self,name,ert_filename,energy_filename,likwid_filename,frequency,likwid_parameters={}):
        self.name = name
        self.frequency = frequency
        self.emperical_roofline = self.get_emperical_roofline(ert_filename)
        self.a_roofline_model_for_energy_roofline = self.get_a_roofline_model_for_energy_roofline(energy_filename)
        if likwid_parameters == {}:
            likwid_parameters = self.determine_likwid_parameters(likwid_filename)
        self.likwid = self.get_likwid(likwid_filename,likwid_parameters)
    
    @staticmethod
    def get_emperical_roofline(filename):
        with open(filename) as f:
            data = json.load(f)
        emperical_bandwidth_l4 = data["empirical"]["gbytes"]["data"][3][1]
        emperical_bandwidth_dram = data["empirical"]["gbytes"]["data"][-1][1]
        emperical_bandwidth_perforamce = data["empirical"]["gflops"]["data"][0][1]
        return {
            "collected" : True,
            "bandwidth": {
                "l4":emperical_bandwidth_l4,
                "dram":emperical_bandwidth_dram,
                "units":"GBytes/s"
            },
            "performance":emperical_bandwidth_perforamce,
            "performance_units":"GFlops/s",
            "collected file": filename
        }

    @staticmethod
    def get_a_roofline_model_for_energy_roofline(filename):
        df = pd.read_csv(filename)
        energy_roofline_dram = df["Bandwidth(GB/s)"].values[0]
        energy_roofline_performace = df["Performance(GFLOPS/s)"].values[-1]
        return {
            "collected" : True,
            "bandwidth":energy_roofline_dram,
            "bandwidth_units":"GBytes/s",
            "performance":energy_roofline_performace,
            "performance_units":"GFlops/s",
            "collected file": filename
        }

    @staticmethod
    def get_likwid(filename,parameters):
        df_likwid = pd.read_csv(filename)
        likwid_bandwidth = parameters["max_bandwidth"]
        likwid_performance = parameters["max_performance"]
        return {
            "collected" : True,
            "bandwidth":likwid_bandwidth,
            "bandwidth_units":"MBytes/s",
            "performance":likwid_performance,
            "performance_units":"MFlops/s",
            "collected file": filename
        }

    @staticmethod
    def determine_likwid_parameters(filename):
        df = pd.DataFrame()
        df = pd.read_csv(filename)
        max_bandwidth = 0
        max_performance = 0
        bandwidth_param = ""
        performance_param = ""
        for index, row in df.iterrows():
            if "Byte" in row["Unit"] :
                if row["Value"] > max_bandwidth:
                    max_bandwidth = row["Value"]
                    bandwidth_param = row["Name"]
            elif "Flop" in row["Unit"] :
                if row["Value"] > max_performance:
                    max_performance = row["Value"]
                    performance_param = row["Name"]
        return {
            "bandwidth":bandwidth_param,
            "max_bandwidth":max_bandwidth,
            "performance":performance_param,
            "max_performance":max_performance
        }
    
    #function to give the likwid compute and memory bandwidth
    def get_likwid_GFLOPS_GBYTES(self):
        return {
            "Bandwidth" : self.likwid["bandwidth"] * self.convert_units[self.likwid["bandwidth_units"]],
            "Performance" : self.likwid["performance"] * self.convert_units[self.likwid["performance_units"]]
        }
    
    def get_emperical_GFLOPS_GBYTES(self,bandwidth_type="l4"):
        return {
            "Bandwidth" : self.emperical_roofline["bandwidth"][bandwidth_type] * self.convert_units[self.emperical_roofline["bandwidth"]["units"]],
            "Performance" : self.emperical_roofline["performance"] * self.convert_units[self.emperical_roofline["performance_units"]]
        }
    
    def get_energy_GFLOPS_GBYTES(self):
        return {
            "Bandwidth" : self.a_roofline_model_for_energy_roofline["bandwidth"] * self.convert_units[self.a_roofline_model_for_energy_roofline["bandwidth_units"]],
            "Performance" : self.a_roofline_model_for_energy_roofline["performance"] * self.convert_units[self.a_roofline_model_for_energy_roofline["performance_units"]]
        }
    
    #function to pretty dump all the data collected in the class
    def pretty_dump(self):
        print(f"Machine Name: {self.name}")
        print(f"Emperical Roofline Data: {self.emperical_roofline}")
        print(f"Energy Roofline Data: {self.a_roofline_model_for_energy_roofline}")
        print(f"Likwid Roofline Data: {self.likwid}")
        print(f"Frequency: {self.frequency}")
        print(f"Units: {self.units}")
        print(f"Convert Units: {self.convert_units}")


    #function to validate all the detials of the class to check if all the files in the class exist
    def validate(self):
        if not os.path.exists(self.emperical_roofline["collected file"]):
            self.emperical_roofline["collected"] = False
            return False
        if not os.path.exists(self.a_roofline_model_for_energy_roofline["collected file"]):
            self.a_roofline_model_for_energy_roofline["collected"] = False
            return False
        if not os.path.exists(self.likwid["collected file"]):
            self.likwid["collected"] = False
            return False
        return True



class PolyBench:
    machine : str = ""
    files : list[str] = []
    type : str = ""
    data : dict [str , pd.DataFrame] = {}
    flops_param : str = ""
    bytes_param : str = ""

    def __init__(self,machine,kernel_dir,type="dynamic",flops_param="FP_ARITH_INST_RETIRED:SCALAR_DOUBLE",bytes_param="perf::PERF_COUNT_HW_CACHE_LL:MISS"):
        self.machine = machine
        for file in os.listdir(kernel_dir):
            if not file.endswith(".csv"):
                continue
            dataset = file.split("_")[-2].split(".")[0]
            filepath = os.path.abspath(os.path.join(kernel_dir,file))
            self.data[dataset] = pd.read_csv(filepath)
            self.files.append(filepath)
        self.type = type
        self.flops_param = flops_param
        self.bytes_param = bytes_param

    #function to change the bytes parameter used in the class
    def change_bytes_param(self,new_param):
        self.bytes_param = new_param

    #function to change the flops parameter used in the class
    def change_flops_param(self,new_param):
        self.flops_param = new_param

    #function to pretty dump all the data collected in the class
    def pretty_dump(self):
        print(f"Machine Name: {self.machine}")
        print(f"Type: {self.type}")
        print(f"Files: {self.files}")
        print(f"Data: {self.data}")
        print(f"Flops Param: {self.flops_param}")
        print(f"Bytes Param: {self.bytes_param}")
    
    #function to validate all the detials of the class to check if all the files in the class exist
    def validate(self):
        for file in self.files:
            if not os.path.exists(file):
                return False
        return True
    
    #function to return flops
    def get_flops(self,dataset):
        return self.data[dataset][self.flops_param].values[0]
    
    def get_bytes(self,dataset):
        return self.data[dataset][self.bytes_param].values[0]
    
    def get_time(self,dataset):
        if self.type == "oracle":
            return self.data[dataset]["Time(s)"].values[0]
    
    def get_name(self,dataset):
        return self.data[dataset]["Name"].values[0]


class machine:
    name = ""
    Roofline_data : dict[str , Roofline_Const_Time] = {}
    PolyBench_data : dict[str , PolyBench] = {}
    frequency_list : list[str] = []

    def __init__(self,roofline_folder,kernel_folder,frequency_list,name) -> None:
        self.frequency_list = frequency_list
        self.name = name
        for frequency in frequency_list:
            roofline_files = get_required_roofline_files(roofline_folder,frequency)
            self.Roofline_data[frequency] = Roofline_Const_Time(name=name,ert_filename=roofline_files["ERT"],energy_filename=roofline_files["energy"],likwid_filename=roofline_files["likwid"],frequency=frequency)
            self.PolyBench_data["dynamic"] = PolyBench(machine=name,kernel_dir=kernel_folder,type="dynamic")

    #function to add static polybench data
    def add_static_polybench(self,kernel_folder):
        self.PolyBench_data["static"] = PolyBench(machine=self.name,kernel_dir=kernel_folder,type="static")
    
    def add_oracle_polybench(self,oracle_folder):
        self.PolyBench_data["oracle"] = PolyBench(machine=self.name,kernel_dir=oracle_folder,type="oracle")

    #function to pretty dump all the data collected in the class
    def pretty_dump(self):
        print(f"Machine Name: {self.name}")
        print(f"Frequency List: {self.frequency_list}")
        print(f"Roofline Data: {self.Roofline_data}")
        for key in self.Roofline_data:
            self.Roofline_data[key].pretty_dump()
        print(f"PolyBench Data: {self.PolyBench_data}")
        for key in self.PolyBench_data:
            self.PolyBench_data[key].pretty_dump()
    
    #function to dump all the data to a json file
    def dump_to_json(self):
        data = {
            "Machine Name": self.name,
            "Frequency List": self.frequency_list,
            "Roofline Data": self.Roofline_data,
            "PolyBench Data": self.PolyBench_data
        }
        with open(f"{self.name}_data.json","w") as f:
            json.dump(data,f,indent=4)
    
    #function to read data from a json file and load it into the class
    def load_from_json(self,filename):
        with open(filename) as f:
            data = json.load(f)
        self.name = data["Machine Name"]
        self.frequency_list = data["Frequency List"]
        self.Roofline_data = data["Roofline Data"]
        # validate all entries in the roofline data
        for key in self.Roofline_data:
            if not self.Roofline_data[key].validate():
                print(f"Error: Roofline Data for {key} is not valid")
                return
        self.PolyBench_data = data["PolyBench Data"]
        # validate all entries in the polybench data
        for key in self.PolyBench_data:
            if not self.PolyBench_data[key].validate():
                print(f"Error: PolyBench Data for {key} is not valid")
                return
    
    # function to generate calculated data for pridicted time
    def generate_calculated_data(self,filename):
        df = {
            "Kernel Name" : [],
            "Predicted Time(s)" : [],
        }
        for key in self.PolyBench_data:
            if key == "oracle":
                df[f"{key} Time"] = []
            else:
                df[f"{key} Flops"] = []
                df[f"{key} Flops Units"] = []
                df[f"{key} Bytes"] = []
                df[f"{key} Bytes Units"] = []
                df[f"{key} OI"] = []
            
            for dataset in self.PolyBench_data[key].data:
                flops = self.PolyBench_data[key].get_flops(dataset)
                bytes = self.PolyBench_data[key].get_bytes(dataset)
                name = self.PolyBench_data[key].get_name(dataset)
                df["Kernel Name"].append(name)
                for frequency in self.frequency_list:
                    for key in self.PolyBench_data:
                        if key == "oracle":
                            time_oracle = self.PolyBench_data[key].get_time(dataset)
                            df[f"{key} Time"].append(time_oracle)
                        else:
                            df[f"{key} Flops"].append(flops / 1000_000_000)
                            df[f"{key} Flops Units"].append("GFlops")
                            df[f"{key} Bytes"].append(bytes / 1000_000_000) 
                            df[f"{key} Bytes Units"].append("GBytes")
                            oi = flops / bytes
                            df[f"{key} OI"].append(oi)
                    
                    for key in self.Roofline_data:
                        df["Likwid Bandwidth"] = []
                        
                        if key == "likwid":
                            likwid_bandwidth = self.Roofline_data[key].get_likwid_GFLOPS_GBYTES()["Bandwidth"]
                            likwid_performance = self.Roofline_data[key].get_likwid_GFLOPS_GBYTES()["Performance"]
                            
                        elif key == "emperical":
                            emperical_data = self.Roofline_data[key].get_emperical_GFLOPS_GBYTES()
                            time_emperical = emperical_data["Bandwidth"] / emperical_data["Performance"]
                            df["Predicted Time(s)"].append(time_emperical)
                        elif key == "energy":
                            energy_data = self.Roofline_data[key].get_energy_GFLOPS_GBYTES()
                            time_energy = energy_data["Bandwidth"] / energy_data["Performance"]
                            df["Predicted Time(s)"].append(time_energy)



    


if __name__ == "__main__" :

    file = "/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Roofline_Data/oracle_time_data_PolyBenchC-4.2.1_3600000_2024-05-09_11-10-08_MINI_DATASET.csv"
    # PolyBench.rewrite_file_after_median(file=file)
    # kernel_dir = "/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Kernel_Data"
    # roofline_dir = "/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Roofline_Data"
    # machine1 = machine(roofline_folder=roofline_dir,kernel_folder=kernel_dir,frequency_list=[3600000],name="Broadwell")
    # # machine1.Roofline_data[3600000].pretty_dump()
    # # machine1.PolyBench_data["dynamic"].pretty_dump()
    # machine1.pretty_dump()

    exit()
    print(f"Current Working Directory: {os.listdir(folder)}, type: {type(os.listdir(folder))}")
    for file in os.listdir(folder):
        if file.endswith(".csv"):
            # file.split("_")[-2].split(".")[0]
            print(f"File: {file} Dataset: {file.split('_')[-2].split('.')[0]}")
    
    exit()

    print(f"Current Working Directory: {os.getcwd()}")
    requred_files = get_required_files("/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Roofline_Data",3600000)
    print(f"Required Files: {requred_files}")
    # likwid_file = "/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Roofline_Data/likwid_bechmarks_3600000kHz.csv"
    # energy_file = "/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Roofline_Data/30_04_2024_1553.csv"
    # ERT_file = "/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Roofline_Data/roofline.json"

    # data = Roofline_Const(name="Broadwell",frequency=3600000,ert_filename=ERT_file,energy_filename=energy_file,likwid_filename=likwid_file)
    # data.pretty_dump()
    # PolyBench.rewrite_file_after_median("/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Kernel_Data/kernel_data_PolyBenchC-4.2.1_3600000_2024-05-05_23-30-10_LARGE_DATASET copy.csv")