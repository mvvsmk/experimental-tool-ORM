#! /usr/bin/env python3

from common_imports import *
from common_files import *
from common_machine import *

#function to extract the data from the roofline folder
def get_roofline_data_from_folder(result_folder : str):
    files = os.listdir(result_folder)
    files = [f for f in files if f.endswith(".csv") and "a_roofline_model" in f]
    caches = [f.split("_")[-1].split(".")[0] for f in files]
    print(caches)
    data = []
    for f in files:
        cache = f.split("_")[-1].split(".")[0]
        data.append([cache,pd.read_csv(os.path.join(result_folder, f))])
    return data, caches

# function to take axes, a list of caches to plot roofline for, roofline folder, and machine name,  and prameter (energy, performance, or power) and plot the roofline
def scatter_plot_hier_roofline(axes : mpl.axes._axes.Axes, caches_to_plot : list, roofline_folder : str, machine : str ,parameter : str, scatter=True):
    data, caches = get_roofline_data_from_folder(roofline_folder)
    colors = plt.cm.viridis(np.linspace(0, 1, len(caches)))
    if parameter == "energy":
        for i, cache in enumerate(caches):
            if cache not in caches_to_plot:
                continue
            if scatter:
                axes.scatter(data[i][1]["OI"], data[i][1]["Energy(J)"], label=f"{cache}", color=colors[i], marker="o")
            else:
                axes.plot(data[i][1]["OI"], data[i][1]["Energy(J)"], label=f"{cache}", color=colors[i], marker="o")
            axes.set_ylabel("Energy (J)")
            axes.set_xlabel("Operational Intensity (FLOPs/Byte)")
            
    elif parameter == "performance":
        for i, cache in enumerate(caches):
            if scatter:
                axes.scatter(data[i][1]["OI"], (data[i][1]["total_flops"] / data[i][1]["Execution Time(s)"]) / 10**9, label=f"{cache}", color=colors[i], marker="o")
            else:
                axes.plot(data[i][1]["OI"], (data[i][1]["total_flops"] / data[i][1]["Execution Time(s)"]) / 10**9, label=f"{cache}", color=colors[i], marker="o")
            
            axes.set_ylabel("Performance (GFLOP/s)")
            axes.set_xlabel("Operational Intensity (FLOPs/Byte)")
    
    elif parameter == "power":
        for i, cache in enumerate(caches):
            if scatter:
                axes.scatter(data[i][1]["OI"], data[i][1]["Power(W)"], label=f"{cache}", color=colors[i], marker="o")
            else:
                axes.plot(data[i][1]["OI"], data[i][1]["Power(W)"], label=f"{cache}", color=colors[i], marker="o")
            axes.set_ylabel("Power (W)")
            axes.set_xlabel("Operational Intensity (FLOPs/Byte)")

def get_hier_constants(data :list, caches : list):
    constants_data = {
        "Cache": [],
        "Time Per Flop [s/ops]": [],
        "Time Per Byte [s/ops]": [],
        "Energy Per Flop [J/ops]": [],
        "Energy Per Byte [J/ops]": [],
        "Power Per Flop [W/ops]" : [],
        "Power Per Byte [W/ops]" : [],
        "Time balance [OI]" : [],
        "Energy balance [OI]" : [],
        "Constant Power [W]" : [],
        "Constant Energy Per Flop [J/ops]" : [],
        "Constant Flop Energy Efficiency" : [],
        "New Balance Energy" : [],
    }
    
    for i, cache in enumerate(caches):
        data[i][1]["Time Per Flop [s/ops]"] = data[i][1]["Execution Time(s)"] / data[i][1]["total_flops"]
        data[i][1]["Time Per Byte [s/ops]"] = data[i][1]["Execution Time(s)"] / data[i][1]["total_missed_bytes"]
        data[i][1]["Energy Per Flop [J/ops]"] = data[i][1]["Energy(J)"] / data[i][1]["total_flops"]
        data[i][1]["Energy Per Byte [J/ops]"] = data[i][1]["Energy(J)"] / data[i][1]["total_missed_bytes"]
        total_flops = data[i][1]["total_flops"]
        time_per_flop = data[i][1]["Time Per Flop [s/ops]"].iloc[-1]
        time_per_byte = data[i][1]["Time Per Byte [s/ops]"].iloc[0]
        energy_per_flop = data[i][1]["Energy Per Flop [J/ops]"].iloc[-1]
        energy_per_byte = data[i][1]["Energy Per Byte [J/ops]"].iloc[0]
        power_per_flop = energy_per_flop / time_per_flop
        power_per_byte = energy_per_byte / time_per_byte
        constant_power = data[i][1]["Constant Power (W)"].median()
        constant_energy_per_flop = constant_power * time_per_flop
        constant_flop_energy_efficiency = energy_per_flop / (energy_per_flop + constant_energy_per_flop)
        balance_time = time_per_byte / time_per_flop
        balance_energy = energy_per_byte / time_per_byte
        
        for j, row in data[i][1].iterrows():
            print(row["Power(W)"])
            new_balance_energy = (constant_flop_energy_efficiency * balance_energy) + ((1 - constant_flop_energy_efficiency) * max(0,(balance_time - row["OI"])))
            row["Power(W)"] = (power_per_flop / constant_flop_energy_efficiency) * ((min(row["OI"], balance_time) / balance_time) + new_balance_energy / max(row["OI"], balance_time))
            data[i][1].loc[j] = row
            print(row["Power(W)"])
            # exit()
        print(data[i][1]["Power(W)"])
        # exit()
        constants_data["Time Per Flop [s/ops]"].append(time_per_flop)
        constants_data["Time Per Byte [s/ops]"].append(time_per_byte)
        constants_data["Energy Per Flop [J/ops]"].append(energy_per_flop)
        constants_data["Energy Per Byte [J/ops]"].append(energy_per_byte)
        constants_data["Power Per Flop [W/ops]"].append(power_per_flop)
        constants_data["Power Per Byte [W/ops]"].append(power_per_byte)
        constants_data["Time balance [OI]"].append(time_per_byte / time_per_flop)
        constants_data["Energy balance [OI]"].append(energy_per_byte / energy_per_flop)
        constants_data["Constant Power [W]"].append(constant_power)
        constants_data["Constant Energy Per Flop [J/ops]"].append(constant_energy_per_flop)
        constants_data["Constant Flop Energy Efficiency"].append(constant_flop_energy_efficiency)
        constants_data["New Balance Energy"].append(new_balance_energy)
        constants_data["Cache"].append(data[i][0])
        
    df = pd.DataFrame(constants_data)
    return df
        
        
    

def line_plot_hier_roofline_calculated(axes : mpl.axes._axes.Axes, caches_to_plot : list, roofline_folder : str, machine : str ,parameter : str):
    data, caches = get_roofline_data_from_folder(roofline_folder)
    colors = plt.cm.viridis(np.linspace(0, 1, len(caches)))
    
    oi_points = np.logspace(start=-4,stop=2,num=10000)
    df_constants = get_hier_constants(data, caches)
    assumed_bytes = [1000_000_000] * len(oi_points)
    assumed_flops = [oi_points_ * assumed_bytes_ for oi_points_, assumed_bytes_ in zip(oi_points, assumed_bytes)]
    for i, row in df_constants.iterrows():
        all_predicted_power = []
        all_predicted_performance = []
        cache = row["Cache"]
        time_per_flop = row["Time Per Flop [s/ops]"]
        time_per_byte = row["Time Per Byte [s/ops]"]
        energy_per_flop = row["Energy Per Flop [J/ops]"]
        energy_per_byte = row["Energy Per Byte [J/ops]"]
        power_per_flop = row["Power Per Flop [W/ops]"]
        power_per_byte = row["Power Per Byte [W/ops]"]
        time_balance = row["Time balance [OI]"]
        energy_balance = row["Energy balance [OI]"]
        constant_power = row["Constant Power [W]"]
        constant_energy_per_flop = row["Constant Energy Per Flop [J/ops]"]
        constant_flop_energy_efficiency = row["Constant Flop Energy Efficiency"]
        new_balance_energy = row["New Balance Energy"]
        predicted_times = [max(assumed_bytes_ * time_per_byte , assumed_flops_ * time_per_flop) for assumed_bytes_, assumed_flops_ in zip(assumed_bytes, assumed_flops)]
        is_memory_bound = [1 if x < time_balance else 0 for x in oi_points]
        predicted_power = [constant_power + (power_per_byte * ((1-is_memory_bound_) * (time_balance / oi_points_) + is_memory_bound_) + power_per_flop * (is_memory_bound_ * (oi_points_ / time_balance) + (1 - is_memory_bound_))) for is_memory_bound_, oi_points_ in zip(is_memory_bound, oi_points)]
        predicted_performance = [((assumed_flops_ / 1000_000_000) / predicted_times_) for assumed_flops_, predicted_times_ in zip(assumed_flops, predicted_times)]
        all_predicted_power.append(predicted_power)
        all_predicted_performance.append(predicted_performance)      
        if cache not in caches_to_plot:
            continue
        
        if parameter == "power":
            for predicted_power_ in all_predicted_power:
                axes.plot(oi_points, predicted_power_, label=f"{cache}", color=colors[i])
            axes.set_ylabel("Power (W)")
            axes.set_xlabel("Operational Intensity (FLOPs/Byte)")

        elif parameter == "performance":
            for predicted_performance_ in all_predicted_performance:
                axes.plot(oi_points, predicted_performance_, label=f"{cache}", color=colors[i])
            axes.set_ylabel("Performance (GFLOP/s)")
            axes.set_xlabel("Operational Intensity (FLOPs/Byte)")
    

if __name__ == "__main__":
    roofline_folder = "/home/achilles/code/RooflineModel/Final_Results/Raptorlake/Roofline/2700000kHz"
    fig, ax = plt.subplots(1,1, figsize=(10,10))
    scatter_plot_hier_roofline(ax, [ "L1D", "L2", "L3"], roofline_folder, "raptorlake", "performance")
    line_plot_hier_roofline_calculated(ax, [ "L1D", "L2", "L3"], roofline_folder, "raptorlake", "performance")
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.legend()
    plt.show()
    