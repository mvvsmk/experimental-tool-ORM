#! /usr/bin/env python3

from common_imports import *
from common_files import *
from common_machine import *
from common_color_markers import *

#function to combine all the polybench data
def combine_polybench_data(reading_csv : str, counter_csv :str ,machine_name : str,caches_to_plot : list = ["L1D", "L2", "L3", "DRAM"],make_cache_ois = False):
    readings = pd.read_csv(reading_csv)
    counters = pd.read_csv(counter_csv)
    # sort dataframes by Name
    readings = readings.sort_values(by=["Name"])
    counters = counters.sort_values(by=["Name"])
    counters.reset_index(drop=True, inplace=True)
    readings.reset_index(drop=True, inplace=True)
    print(readings)
    print(counters)
    # exit()
    readings["Power(W)"] = readings["Energy(J)"]/ readings["Time(s)"]
    if make_cache_ois:
        for cache in caches_to_plot:
            counter = machine_data_counters[machine_name][cache]
            print(counter)
            # exit()
            flop_counter = machine_data_counters[machine_name]["Flops"]
            
            readings[f"OI({cache})"] = counters[flop_counter] / (counters[counter] * 64 )
    merged_df = pd.merge(readings, counters, on=["Name"], suffixes=("_reading", "_counter"))
    merged_df["Performance(GFLOP/s)"] = merged_df[f"{machine_data_counters[machine_name]['Flops']}"] / merged_df["Time(s)"] / 10**9
    print(merged_df)
    return merged_df

def combine_static_and_dynamic_data(df_merged_static,df_merged_dynamic):
    merged_df = pd.merge(df_merged_static, df_merged_dynamic, on=["Name"], suffixes=("_static", "_dynamic"))
    return merged_df

# function to plot oracle power
def plot_all_polybench_parameter_vs_oi_given_cache(ax, polybench_df : str, parameter : str,caches_to_plot: list = ["L1D", "L2", "L3", "DRAM"]):
    colors = get_cache_color_list(caches_to_plot)
    cache_col = {}
    for i, cache in enumerate(caches_to_plot):
        for col in polybench_df.columns:
            if cache in col and "OI" in col:
                cache_col[cache] = col

    for i , cache in enumerate(caches_to_plot):
        if parameter == "power":
            ax.scatter(polybench_df[cache_col[cache]], polybench_df["Power(W)"], label=f"{cache}", color=colors[cache], marker="o")
            ax.set_ylabel("Power(W)")
        elif parameter == "performance":
            ax.scatter(polybench_df[cache_col[cache]], polybench_df["Performance(GFLOP/s)"], label=f"{cache}", color=colors[cache], marker="o")
            ax.set_ylabel("Performance(GFLOP/s)")
        ax.set_xlabel("Operational Intensity (FLOPs/Byte)")


def plot_indivisual_polybench_parameter_vs_oi_given_cache(ax, polybench_df : str, parameter : str, Name : str,caches_to_plot: list = ["L1D", "L2", "L3", "DRAM"],scatter=True):
    df = polybench_df[polybench_df["Name"] == Name]
    # grouby name and take median of all other columns
    df = df.groupby("Name").median()
    cache_col = {}
    for i, cache in enumerate(caches_to_plot):
        for col in polybench_df.columns:
            if cache in col and "OI" in col:
                cache_col[cache] = col
    
    colors = get_cache_color_list(caches_to_plot)
    markers = get_marker_database_for_polybench(Name, polybench_df)
    x_vals = []
    y_vals = []
    for i , cache in enumerate(caches_to_plot):
        if parameter == "power":
            x_vals.append(df[cache_col[cache]])
            y_vals.append(df["Power(W)"])
            if scatter:
                ax.scatter(df[cache_col[cache]], df["Power(W)"], label=f"{Name} at {cache}", color=colors[cache],marker=markers[Name])
            ax.set_ylabel("Power(W)")
        elif parameter == "performance":
            x_vals.append(df[cache_col[cache]])
            y_vals.append(df["Performance(GFLOP/s)"])
            if scatter:
                ax.scatter(df[cache_col[cache]], df["Performance(GFLOP/s)"], label=f"{Name} at {cache}", color=colors[cache], marker=markers[Name])
            ax.set_ylabel("Performance(GFLOP/s)")
        ax.set_xlabel("Operational Intensity (FLOPs/Byte)")
    if not scatter:
        ax.plot(x_vals,y_vals,label=f"{Name}",marker="o")

def combine_polybench_across_dataset_sizes(large_df = None, 
                                           XL_df = None, 
                                           XL1_1 = None, 
                                           XL1_2 = None ,
                                           XL1_3 = None ,
                                           XL1_4 = None ,
                                           XL1_5 = None ,
                                           DoubleXL_df = None):
    data = {
        "L" : large_df,
        "XL" : XL_df,
        "XL1_1" : XL1_1,
        "XL1_2" : XL1_2,
        "XL1_3" : XL1_3,
        "XL1_4" : XL1_4,
        "XL1_5" : XL1_5,
        "Double_XL" : DoubleXL_df
    }
    for key in data.keys():
        if data[key] is not None:
            del data[key]
        else:
            #add a column for the dataset size and set it to the key
            data[key]["Dataset Size"] = key

    return data

def plot_indivisual_polybench_parameter_vs_dataset(ax,data_combined_polybench,parameter,Name):
    for key in data_combined_polybench.keys():
        if data_combined_polybench[key] is not None:
            df = data_combined_polybench[key]
            df = df[df["Name"] == Name]
            df = df.groupby("Name").median()
            if parameter == "power":
                ax.scatter(df["Dataset Size"], df["Power(W)"], label=f"{key}", marker="o")
                ax.set_ylabel("Power(W)")
            elif parameter == "performance":
                ax.scatter(df["Dataset Size"], df["Performance(GFLOP/s)"], label=f"{key}", marker="o")
                ax.set_ylabel("Performance(GFLOP/s)")
            ax.set_xlabel("Dataset Size")




if __name__ == "__main__" :
    dynamic_csv = "/home/achilles/code/RooflineModel/Final_Results/Broadwell/Baseline/2024-08-13_14-28-19_oracle_broadwell_EXTRALARGE_DATASET_median.csv"
    dynamic_papi_csv = "/home/achilles/code/RooflineModel/Final_Results/Broadwell/KernelData/kernel_data_PolyBenchC-4.2.1_Hier_papi_Polybench2024-08-28_09-00-09.csv"
    df_dynamic = combine_polybench_data(dynamic_csv, dynamic_papi_csv, "broadwell",make_cache_ois=True)
    df_merged = df_dynamic
    df_merged.to_csv("polybench_merged.csv",index=False)
    print(df_merged)
    fig, ax = plt.subplots(1, 1)
    # plot_all_polybench_parameter_vs_oi_given_cache(ax, df_merged, "power")
    ax.set_xscale("log")
    ax.set_yscale("log")
    plot_indivisual_polybench_parameter_vs_oi_given_cache(ax, df_merged, "performance","2mm")
    plot_indivisual_polybench_parameter_vs_oi_given_cache(ax, df_merged, "performance","3mm")
    plot_indivisual_polybench_parameter_vs_oi_given_cache(ax, df_merged, "performance","lu")
    plt.legend()
    plt.show()


        
    