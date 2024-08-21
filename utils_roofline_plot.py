#! /usr/bin/env python3

import matplotlib.pyplot as plt
import numpy as np
from matplotlib.ticker import LogLocator
import argparse
import os
import pandas as pd
import matplotlib.pyplot as plt
import enum

# function to parse arguments
def parseArg():
    # create a parser object
    parser = argparse.ArgumentParser(description="Plot energy comparison")
    # add argument result_folder which is the folder where the results are stored
    parser.add_argument("--result_folder",type=str,help="Folder where the results are stored",required=True)
    # add argument output_folder which is the folder where the plots are stored
    parser.add_argument("--output_folder",type=str,help="Folder where the plots are stored",required=True)
    #add argument machine which is the machine used to run the code
    parser.add_argument("--machine",type=str,help="Machine name",required=True)
    #generate for all
    parser.add_argument("--generate_for_all",action="store_true",help="Generate plots for all the machines")

    #check if the resutls and output folder are relative or absolute
    # if they are relative make them absolute
    args = parser.parse_args()
    if not os.path.isabs(args.result_folder):
        args.result_folder = os.path.abspath(args.result_folder)
    if not os.path.isabs(args.output_folder):
        args.output_folder = os.path.abspath(args.output_folder)

    return args



def plot_muliple_roofline(result_folder,output_folder,machine):
    # list the files in the result folder and check for files with the name a_roofline_model csvs
    files = os.listdir(result_folder)
    #filter the files with the name a_roofline_model csvs
    files = [f for f in files if f.endswith(".csv") and "a_roofline_model" in f]
    #generate list of frequencies availiable
    frequencies = [f.split("_")[-1].split(".")[0] for f in files]
    print(frequencies)
    # exit()

    # create a list to store the frequency and the respective dataframes
    data = []

    # files = sorted(files, key=lambda x: int(x.split("_")[-1].split(".")[0].split("kHz")[0]))

    for f in files:
        freq = f.split("_")[-1].split(".")[0]
        data.append([freq,pd.read_csv(os.path.join(result_folder, f))])
    
    print(os.listdir(result_folder))
    # exit()
    #sort the data by frequency
    # data = sorted(data, key=lambda x: x[0])
    
    # plot the energy comparison
    fig, ax = plt.subplots(nrows=2, ncols=2, figsize=(20, 20))
    # generate colors for the various frequencies
    colors = plt.cm.viridis(np.linspace(0, 1, len(frequencies)))
    fig.suptitle(f"Energy, Power, and Performance comparison for {machine} machine")
    fig.dpi = 1000


    for i, freq in enumerate(frequencies):
        ax[0, 0].plot(data[i][1]["OI"], data[i][1]["Energy(J)"], label=f"{data[i][0]}", color=colors[i], marker="o")
    ax[0, 0].set_xscale("log")
    ax[0, 0].set_yscale("log")
    ax[0, 0].set_xlabel("OI")
    ax[0, 0].set_ylabel("Energy(J)")
    ax[0, 0].set_title("Energy plot")
    ax[0, 0].yaxis.set_major_locator(LogLocator(base=10.0, numticks=10))
    ax[0, 0].yaxis.set_minor_locator(LogLocator(base=10.0, subs='auto', numticks=100))
    ax[0, 0].grid(which="both")
    ax[0, 0].legend()
    # xaxis.set_minor_locator(LogLocator())

    # plot the power plot
    for i, freq in enumerate(frequencies):
        ax[0, 1].plot(data[i][1]["OI"], data[i][1]["Power(W)"], label=f"{data[i][0]}", color=colors[i], marker="o")
    ax[0, 1].set_xscale("log")
    ax[0, 1].set_yscale("log")
    ax[0, 1].set_xlabel("OI")
    ax[0, 1].set_ylabel("Power(W)")
    ax[0, 1].set_title("Power plot")
    ax[0, 1].yaxis.set_major_locator(LogLocator(base=10.0, numticks=10,))
    ax[0, 1].yaxis.set_minor_locator(LogLocator(base=10.0, subs=np.arange(1, 5, 0.1), numticks=100))
    ax[0, 1].grid(which="both")
    ax[0, 1].legend()

    # plot the performance plot
    for i, freq in enumerate(frequencies):
        ax[1, 1].plot(data[i][1]["OI"], (data[i][1]["total_flops"] / data[i][1]["Execution Time(s)"]) / 10**9, label=f"{data[i][0]}", color=colors[i], marker="o")
    ax[1, 1].set_xscale("log")
    ax[1, 1].set_yscale("log")
    ax[1, 1].set_xlabel("OI")
    ax[1, 1].set_ylabel("Performance(GFlops/s)")
    ax[1, 1].set_title("Performance plot")
    ax[1, 1].yaxis.set_major_locator(LogLocator(base=10.0, numticks=10))
    ax[1, 1].yaxis.set_minor_locator(LogLocator(base=10.0, subs='auto', numticks=100))
    ax[1, 1].grid(which="both")
    ax[1, 1].legend()


    # show the plot
    # plt.show()
    # plt.close()

    # save the plot
    output_file = f"roofline_comparison_{machine}.png"
    plt.savefig(os.path.join(output_folder, output_file))
    print(f"Plot saved to {os.path.join(output_folder, output_file)}")

    # I want to create another csv file that contains the following columns
    #Frequency(kHz),Time Per Flop [s/ops],Time Per Byte [s/ops],Energy Per Flop [J/ops],Energy Per Byte [J/ops],Time Balance,Energy Balance,Power per byte,Power per flop

    # create a dictionary to store the data
    data_new = {
        "Frequency(kHz)": [],
        "Time Per Flop [s/ops]": [],
        "Time Per Byte [s/ops]": [],
        "Energy Per Flop [J/ops]": [],
        "Energy Per Byte [J/ops]": [],
        "Power Per Flop [W/ops]" : [],
        "Power Per Byte [W/ops]" : [],
        "Time balance [OI]" : [],
        "Energy balance [OI]" : [],
        "Constant Power [W]" : [],
    }

    for i, freq in enumerate(frequencies):
        # print(f'{data["df"][i]["Execution Time(s)"] / data["df"][i]["total_flops"]}')
        data_new["Frequency(kHz)"].append(data[i][0])
        data[i][1]["Time Per Flop [s/ops]"] = data[i][1]["Execution Time(s)"] / data[i][1]["total_flops"]
        data[i][1]["Time Per Byte [s/ops]"] = data[i][1]["Execution Time(s)"] / data[i][1]["total_missed_bytes"]
        data[i][1]["Energy Per Flop [J/ops]"] = data[i][1]["Energy(J)"] / data[i][1]["total_flops"]
        data[i][1]["Energy Per Byte [J/ops]"] = data[i][1]["Energy(J)"] / data[i][1]["total_missed_bytes"]

        data[i][1].sort_values(by='OI')
        # print(data[i][1])
        # exit()
        time_per_flop = data[i][1]["Time Per Flop [s/ops]"].iloc[-1]
        time_per_byte = data[i][1]["Time Per Byte [s/ops]"].iloc[0]
        energy_per_flop = data[i][1]["Energy Per Flop [J/ops]"].iloc[-1]
        energy_per_byte = data[i][1]["Energy Per Byte [J/ops]"].iloc[0]
        power_per_flop = energy_per_flop / time_per_flop
        power_per_byte = energy_per_byte / time_per_byte
        constant_power = data[i][1]["Constant Power (W)"].mean()
        
        data_new["Time Per Flop [s/ops]"].append(time_per_flop)
        data_new["Time Per Byte [s/ops]"].append(time_per_byte)
        data_new["Energy Per Flop [J/ops]"].append(energy_per_flop)
        data_new["Energy Per Byte [J/ops]"].append(energy_per_byte)
        data_new["Power Per Flop [W/ops]"].append(power_per_flop)
        data_new["Power Per Byte [W/ops]"].append(power_per_byte)
        data_new["Time balance [OI]"].append(time_per_byte / time_per_flop)
        data_new["Energy balance [OI]"].append(energy_per_byte / energy_per_flop)
        data_new["Constant Power [W]"].append(constant_power)
        
        # data_new["Time Per Flop [s/ops]"].append(data[i][1]["Time Per Flop [s/ops]"].iloc[-1])
        # data_new["Time Per Byte [s/ops]"].append(data[i][1]["Time Per Byte [s/ops]"].iloc[0])
        # data_new["Energy Per Flop [J/ops]"].append(data[i][1]["Energy Per Flop [J/ops]"].iloc[-1])
        # data_new["Energy Per Byte [J/ops]"].append(data[i][1]["Energy Per Byte [J/ops]"].iloc[0])
        # data_new["Power Per Flop [W/ops]"].append(data_new["Energy Per Flop [J/ops]"][-1] / data_new["Time Per Flop [s/ops]"][-1])
        # data_new["Power Per Byte [W/ops]"].append(data_new["Energy Per Byte [J/ops]"][-1] / data_new["Time Per Byte [s/ops]"][-1])
        # data_new["Time balance [OI]"].append(data_new["Time Per Byte [s/ops]"][-1] / data_new["Time Per Flop [s/ops]"][-1])
        # data_new["Energy balance [OI]"].append(data_new["Energy Per Byte [J/ops]"][-1] / data_new["Energy Per Flop [J/ops]"][-1])
        

    
    print(data_new)
    # # create a dataframe
    df = pd.DataFrame(data_new)
    print(df)
    # # save the dataframe to a csv file
    output_file = f"roofline_constants_{machine}.csv"
    #sort the dataframe by frequency
    df = df.sort_values(by='Frequency(kHz)')
    df.to_csv(os.path.join(output_folder, output_file), index=False)



if __name__ == "__main__":
    #parse the arguments
    args = parseArg()
    #get the result folder
    result_folder = args.result_folder
    #get the output folder
    output_folder = args.output_folder
    #get the machine name
    machine = args.machine
    
    plot_muliple_roofline(result_folder,output_folder,machine)