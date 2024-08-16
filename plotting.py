import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import os
import json
import sys
from machine_model import Roofline_Const_Time, PolyBench, machine


#function to plot roofline
def roofline_plot(compute_limit,mem_limit,XMAX,XMIN,ax,label,color="black",suffix=""):
#  The x axis is the operational intensity and the y axis is the attainable performance
    x = np.linspace(XMIN,XMAX,10000)
    y = np.minimum(compute_limit, x * mem_limit)
    ax.plot(x, y, color=color, linestyle='-', linewidth=2,label=f"{label}{suffix}") 
    return ax



# compare OI from Extralarge and Large
def plotPoint(PolyBench_data,ax) :
    for i in range(len(PolyBench_data.df)):
        name = PolyBench_data.df.iloc[i]["Name"]
        flops = PolyBench_data.df.iloc[i][PolyBench_data.flops_param]
        bytes = PolyBench_data.df.iloc[i][PolyBench_data.bytes_param]
        x_val = flops/bytes
        y_val = PolyBench_data.df.iloc[i][PolyBench_data.perf_param]
        ax.plot(x_val,y_val, label=name)
    ax.set_xlabel("Operational Intensity (FLOP/Byte)")
    ax.set_ylabel("Performance (GFLOPS)")
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.legend()
    ax.set_title("Operational Intensity vs Performance")
    return ax

def plot_all_rooflines_with_all_benchmarks(machine_data: machine,ax,frequency,XMAX,XMIN,
                                           YMAX,YMIN,
                                           what_to_plot=["likwid","emperical","energy"]):
    ax.set_xlim(XMIN, XMAX)
    ax.set_xscale('log')
    ax.set_ylim(YMIN, YMAX)
    ax.set_yscale('log')
    ax.set_xlabel('Operational Intensity (FLOP/Byte)')
    ax.set_ylabel('Performance (GFLOP/s)')
    ax.set_title(f'Roofline Model for {machine_data.name} at {frequency}kHz')

    if "likwid" in what_to_plot:
        likwid_data = machine_data.Roofline_data[frequency].get_likwid_GFLOPS_GBYTES()
        ax = roofline_plot(compute_limit=likwid_data["performance"],
                           mem_limit=likwid_data["bandwidth"],
                           XMAX=XMAX,XMIN=XMIN,ax=ax,label="likwid",color="black")
    if "emperical" in what_to_plot:
        emperical_data = machine_data.Roofline_data[frequency].get_emperical_GFLOPS_GBYTES()
        ax = roofline_plot(compute_limit=emperical_data["performance"],
                           mem_limit=emperical_data["bandwidth"],
                           XMAX=XMAX,XMIN=XMIN,ax=ax,label="emperical",color="blue")
    if "energy" in what_to_plot:
        energy_data = machine_data.Roofline_data[frequency].get_energy_GFLOPS_GBYTES()
        ax = roofline_plot(compute_limit=energy_data["performance"],
                           mem_limit=energy_data["bandwidth"],
                           XMAX=XMAX,XMIN=XMIN,ax=ax,label="energy",color="red")
    return ax




