import pandas as pd
import os
import json

# decription of a class which keeps track of all files associated with a machine
# things to track:
# 1. machine name
# 2. power cap results csv
# 3. energy roofline results csv
# 4. oracle csv
# 5. oracle csv with diff frequencies

class MachineRec:
    machine = ""
    power_cap_results = ""
    energy_roofline_results = ""
    oracle = ""
    oracle_diff_freq = ""
    
    def __init__(self,machine,power_cap_results,energy_roofline_results,oracle,oracle_diff_freq):
        self.machine = machine
        self.power_cap_results = power_cap_results
        self.energy_roofline_results = energy_roofline_results
        self.oracle = oracle
        self.oracle_diff_freq = oracle_diff_freq
    
    #def export to json file with name {machine}_rec.json
    def export(self,output_dir = None):
        data = {
            "machine" : self.machine,
            "power_cap_results" : self.power_cap_results,
            "energy_roofline_results" : self.energy_roofline_results,
            "oracle" : self.oracle,
            "oracle_diff_freq" : self.oracle_diff_freq
        }
        output_file = f"{self.machine}_rec.json"
        if output_dir is not None:
            output_file = os.path.join(output_dir,output_file)
        with open(output_file,"w") as f:
            json.dump(data,f)
            
    #def import from json file
    @staticmethod
    def import_from_json(file):
        with open(file,"r") :
            data = json.load(file)
        return MachineRec(data["machine"],data["power_cap_results"],data["energy_roofline_results"],data["oracle"],data["oracle_diff_freq"])
    