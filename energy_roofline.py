import pandas as pd
import os
import json
import sys
import numpy as np
import matplotlib.pyplot as plt
from polybench_kernels import rewrite_file_after_median

if __name__ == "__main__":
    # Read the data from the csv file
    df_ex = pd.read_csv("/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Kernel_Data/kernel_data_PolyBenchC-4.2.1_3600000_2024-05-05_23-30-10_EXTRALARGE_DATASET.csv")
    df_l = pd.read_csv("/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Kernel_Data/kernel_data_PolyBenchC-4.2.1_3600000_2024-05-05_23-30-10_LARGE_DATASET.csv")
    df_ex = df_ex.groupby("Name").median().reset_index()
    df_l = df_l.groupby("Name").median().reset_index()
    oi_ex  = []
    oi_l = []
    byte_param = "perf::PERF_COUNT_HW_CACHE_LL:MISS"
    flop_param = "FP_ARITH_INST_RETIRED:SCALAR_DOUBLE"

    for i in range(len(df_ex)):
        oi_ex.append(df_ex.iloc[i][flop_param]/(df_ex.iloc[i][byte_param] * 64))

    for i in range(len(df_l)):
        oi_l.append(df_l.iloc[i][flop_param]/(df_l.iloc[i][byte_param] * 64))

    df_ex["OI"] = oi_ex
    df_l["OI"] = oi_l
    df_ex.to_csv("/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Kernel_Data/EXTRALARGE_OI.csv",index=False)
    df_l.to_csv("/home/achilles/code/RooflineModel/New_itr/results/broadwell/Testing/Kernel_Data/LARGE_OI.csv",index=False)
    # plt.xlim(10**-3,10**3)
    plt.ylim(10**-3,80)
    # for i in range(len(df_ex)):
    #     plt.scatter(df_ex.iloc[i]["Name"],df_ex.iloc[i]["OI"],label=df_ex.iloc[i]["Name"],color="red")
    # for i in range(len(df_l)):
    #     plt.scatter(df_ex.iloc[i]["Name"],df_l.iloc[i]["OI"],label=df_l.iloc[i]["Name"],color="blue")
    plt.scatter(df_ex["Name"],df_ex["OI"],label="EXTRALARGE",color="red")
    plt.scatter(df_l["Name"],df_l["OI"],label="LARGE",color="blue")
    plt.xticks(rotation=45)
    plt.ylabel("Operational Intensity")
    plt.xlabel("Kernel Name")
    plt.legend()
    plt.show()