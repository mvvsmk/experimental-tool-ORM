#! /usr/bin/env python3

from plot_polybench import *
from utils_roofline_plotting import *

def simple_sampling():
    fig, ax = plt.subplots(1,1, figsize=(10,10))
    roofline_folder = "/home/achilles/code/experimental-tool-ORM/plotting_utils/temp_res/energy_results/08Sep/raptorlake_multiple_roofline/fma_avx_300_itr10_sleep1_176/2700000kHz"
    roofline_folder2 = "/home/achilles/code/experimental-tool-ORM/plotting_utils/temp_res/energy_results/08Sep/raptorlake_multiple_roofline/fma_avx_300_itr10_sleep1_176/2100000kHz"
    # dynamic_csv = "/home/achilles/code/RooflineModel/Final_Results/Broadwell/Baseline/2024-08-13_14-28-19_oracle_broadwell_EXTRALARGE_DATASET_median.csv"
    # dynamic_papi_csv = "/home/achilles/code/RooflineModel/Final_Results/Broadwell/KernelData/kernel_data_PolyBenchC-4.2.1_Hier_papi_Polybench2024-08-28_09-00-09.csv"
    # df_dynamic = combine_polybench_data(dynamic_csv, dynamic_papi_csv, "broadwell",make_cache_ois=True)
    # df_merged = df_dynamic
    # plot_all_polybench_parameter_vs_oi_given_cache(ax, df_merged, "performance")
    # scatter_plot_hier_roofline(ax, [ "L1D", "L2", "L3", "DRAM"], roofline_folder, "raptorlake", "performance")
    line_plot_hier_roofline_calculated(ax, [ "L1D", "L2", "L3", "DRAM"], roofline_folder, "raptorlake", "performance")
    # line_plot_hier_roofline_calculated(ax, [ "L1D", "L2", "L3", "DRAM"], roofline_folder2, "raptorlake", "performance")
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.legend()
    plt.show()

if __name__ == "__main__":
    simple_sampling()