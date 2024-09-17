#!/usr/bin/env python
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from numpy.polynomial import Polynomial
from sklearn.metrics import r2_score
from utils_curve_data import *
import time
import argparse

# Load CSV data
file_name = '/home/achilles/code/RooflineModel/plotting_utils/temp_f.csv'  # Change this to your CSV file path

def get_curve_fit_equations(data, parameter,plot = False):
    return_data = {
        "Linear" : {
            "Equation" : None,
            "R2" : None,
            "coff1": 0,
            "coff3": 0,
            "coff2": 0,
            "const" : 0
        },
        "Quadratic" : {
            "Equation" : None,
            "R2" : None,
            "coff1": 0,
            "coff3": 0,
            "coff2": 0,
            "const" : 0
        },
        "Cubic" : {
            "Equation" : None,
            "R2" : None,
            "coff1": 0,
            "coff3": 0,
            "coff2": 0,
            "const" : 0
        }
    }
    
    # data = pd.read_csv(file_name)

    # Calculate performance: total_flops / execution time

    # time.sleep(5)
    print(data)
    
    # Extract frequency and performance
    x = data['Frequency(kHz)'].values
    # y = data['Performance'].values
    if parameter == "performance":
        y = data['Performance'].values
    elif parameter == "power":
        y = data['Power(W)'].values
    elif parameter == "energy":
        y = data['Energy(J)'].values
    elif parameter == "Bandwidth":
        y = data['Bandwidth'].values
    elif parameter == "Time per flop":
        y = data['Time per flop'].values
    elif parameter == "Time per byte":
        y = data['Time per byte'].values
    elif parameter == "Energy per flop":
        y = data['Energy per flop'].values
    elif parameter == "Energy per byte":
        y = data['Energy per byte'].values
    elif parameter == "Peak Power flop":
        y = data['Peak Power flop'].values
    elif parameter == "Peak Power byte":
        y = data['Peak Power byte'].values
    elif parameter == "Time Balance":
        y = data['Time Balance'].values
    elif parameter == "Energy Balance":
        y = data['Energy Balance'].values
    else:
        y = data['Bandwidth'].values
    
    # Curve fitting with different polynomials

    # Linear (degree 1)
    poly1 = Polynomial.fit(x, y, 1)
    y_pred_linear = poly1(x)
    r2_linear = r2_score(y, y_pred_linear)

    # Quadratic (degree 2)
    poly2 = Polynomial.fit(x, y, 2)
    y_pred_quadratic = poly2(x)
    r2_quadratic = r2_score(y, y_pred_quadratic)

    # Cubic (degree 3)
    poly3 = Polynomial.fit(x, y, 3)
    y_pred_cubic = poly3(x)
    r2_cubic = r2_score(y, y_pred_cubic)

    # Convert the fitted polynomials into standard polynomial form
    p1 = poly1.convert()
    p2 = poly2.convert()
    p3 = poly3.convert()

    # Print polynomial equations
    # print("{parameter}'s Linear fit equation: y = {:.5f} + {:.5f}x".format(p1.coef[0], p1.coef[1], parameter=parameter))
    # print("{parameter}'s Quadratic fit equation: y = {:.5f} + {:.5f}x + {:.5f}x^2".format(p2.coef[0], p2.coef[1], p2.coef[2],parameter=parameter))
    # print("{parameter}'s Cubic fit equation: y = {:.5f} + {:.5f}x + {:.5f}x^2 + {:.5f}x^3".format(p3.coef[0], p3.coef[1], p3.coef[2], p3.coef[3], parameter=parameter))

    # Extrapolate the fitted curves

    if plot:
    # Plot the results
        x_extrapolated = np.linspace(min(x) - 2000000, max(x) + 2000000, 1000)
        plt.figure(figsize=(10, 6))
        plt.scatter(x, y, color='blue', label='Actual Data')

        # Plot fitted curves (including extrapolation)
        plt.plot(x_extrapolated, poly1(x_extrapolated), label=f'Linear Fit (R²={r2_linear:.2f})', color='red')
        plt.plot(x_extrapolated, poly2(x_extrapolated), label=f'Quadratic Fit (R²={r2_quadratic:.2f})', color='green')
        plt.plot(x_extrapolated, poly3(x_extrapolated), label=f'Cubic Fit (R²={r2_cubic:.2f})', color='orange')

        plt.title('Curve Fitting: Frequency vs Performance (Extrapolated)')
        plt.xlabel('Frequency (kHz)')
        plt.ylabel('Performance (FLOPs / Execution Time)')
        plt.legend()
        plt.grid(True)
        plt.savefig(f"{parameter}_curve_fitting.png")
        
    return_data["Linear"]["Equation"] = "{parameter}'s Linear fit equation: y = {:.5f} + {:.5f}x".format(p1.coef[0], p1.coef[1], parameter=parameter)
    return_data["Linear"]["R2"] = r2_linear
    return_data["Linear"]["const"] = p1.coef[0]
    return_data["Linear"]["coff1"] = p1.coef[1]
    return_data["Linear"]["coff2"] = 0
    return_data["Linear"]["coff3"] = 0
    return_data["Quadratic"]["Equation"] = "{parameter}'s Quadratic fit equation: y = {:.5f} + {:.5f}x + {:.5f}x^2".format(p2.coef[0], p2.coef[1], p2.coef[2],parameter=parameter)
    return_data["Quadratic"]["R2"] = r2_quadratic
    return_data["Quadratic"]["const"] = p2.coef[0]
    return_data["Quadratic"]["coff1"] = p2.coef[1]
    return_data["Quadratic"]["coff2"] = p2.coef[2]
    return_data["Quadratic"]["coff3"] = 0
    return_data["Cubic"]["Equation"] = "{parameter}'s Cubic fit equation: y = {:.5f} + {:.5f}x + {:.5f}x^2 + {:.5f}x^3".format(p3.coef[0], p3.coef[1], p3.coef[2], p3.coef[3], parameter=parameter)
    return_data["Cubic"]["R2"] = r2_cubic
    return_data["Cubic"]["const"] = p3.coef[0]
    return_data["Cubic"]["coff1"] = p3.coef[1]
    return_data["Cubic"]["coff2"] = p3.coef[2]
    return_data["Cubic"]["coff3"] = p3.coef[3]
    return return_data

def get_curve_constants(folder_name,plot = False,caches = ["L1D","L2","L3","DRAM"]):
    data = {
        "Cache Name" : [],
        "parameter" : [],
        "degree" : [],
        "coff1" : [],
        "coff2" : [],
        "coff3" : [],
        "const" : [],
    }
    
    csv, balance_csv = create_mega_csv(folder_name)
    flops, bytes = split_by_file_name(csv)
    cache_data_flop = split_by_cache_level(flops)
    cache_data_bytes = split_by_cache_level(bytes)
    cache_data_balance = split_by_cache_level(balance_csv)
    
    print(cache_data_flop)

    indivisual_cache_flop ={}
    indivisual_cache_bytes = {}
    indivisual_cache_balance = {}
    
    for cache in caches:
        indivisual_cache_flop[cache] = cache_data_flop[cache]
        indivisual_cache_bytes[cache] = cache_data_bytes[cache]
        indivisual_cache_balance[cache] = cache_data_balance[cache]
    
    # l1d_flop = cache_data_flop["L1D"]
    # l2_flop = cache_data_flop["L2"]
    # l3_flop = cache_data_flop["L3"]
    # dram_flop = cache_data_flop["DRAM"]
    # l1d_bytes = cache_data_bytes["L1D"]
    # l2_bytes = cache_data_bytes["L2"]
    # l3_bytes = cache_data_bytes["L3"]
    # dram_bytes = cache_data_bytes["DRAM"]
    # l1d_balance = cache_data_balance["L1D"]
    # l2_balance = cache_data_balance["L2"]
    # l3_balance = cache_data_balance["L3"]
    # dram_balance = cache_data_balance["DRAM"] 
    
    list_of_flop_params = ["performance","Time per flop","Energy per flop","Peak Power flop"]
    list_of_bytes_params = ["Bandwidth","Time per byte","Energy per byte","Peak Power byte"]

    data_for_balance = {
        "Frequency(kHz)" : [],
        "Time Balance" : [],
        "Energy Balance" : []
    }
    
    for cache_f in cache_data_flop:
        for cache_b in cache_data_bytes:
            # for degree in cache_data_flop[cache_f]:
                data_for_balance["Frequency(kHz)"].append(cache_data_flop[cache_f]["Frequency(kHz)"])
                data_for_balance["Time Balance"].append(cache_data_bytes[cache_b]["Time per byte"] / cache_data_flop[cache_f]["Time per flop"])
                data_for_balance["Energy Balance"].append(cache_data_bytes[cache_b]["Energy per byte"] / cache_data_flop[cache_f]["Energy per flop"])

    print(pd.DataFrame(data_for_balance))
    # exit()
    
    const_data_balance = {}
    for param in ["Time Balance","Energy Balance"]:
        print(param)
        for cache in caches:
            const_data_balance[param][cache] = get_curve_fit_equations(indivisual_cache_balance[cache],param)
        # const_data_balance[param] = {
        #     # "L1D" : get_curve_fit_equations(l1d_balance,param),
        #     # "L2" : get_curve_fit_equations(l2_balance,param),
        #     # "L3" : get_curve_fit_equations(l3_balance,param),
        #     "DRAM" : get_curve_fit_equations(dram_balance,param)
        # }
        for cache in const_data_balance[param]:
            for degree in const_data_balance[param][cache]:
                data["Cache Name"].append(cache)
                data["parameter"].append(param)
                data["degree"].append(degree)
                data["coff1"].append(const_data_balance[param][cache][degree]["coff1"])
                data["coff2"].append(const_data_balance[param][cache][degree]["coff2"])
                data["coff3"].append(const_data_balance[param][cache][degree]["coff3"])
                data["const"].append(const_data_balance[param][cache][degree]["const"])
    
    const_data_flop = {}
    const_data_bytes = {}
    for param in list_of_flop_params:
        for cache in caches:
            const_data_flop[param][cache] = get_curve_fit_equations(indivisual_cache_flop[cache],param)
        # print(param)
        # const_data_flop[param] = {
        #     # "L1D" : get_curve_fit_equations(l1d_flop,param),
        #     # "L2" : get_curve_fit_equations(l2_flop,param),
        #     # "L3" : get_curve_fit_equations(l3_flop,param),
        #     "DRAM" : get_curve_fit_equations(dram_flop,param)
        # }
        for cache in const_data_flop[param]:
            for degree in const_data_flop[param][cache]:
                data["Cache Name"].append(cache)
                data["parameter"].append(param)
                data["degree"].append(degree)
                data["coff1"].append(const_data_flop[param][cache][degree]["coff1"])
                data["coff2"].append(const_data_flop[param][cache][degree]["coff2"])
                data["coff3"].append(const_data_flop[param][cache][degree]["coff3"])
                data["const"].append(const_data_flop[param][cache][degree]["const"])
    # exit()
    
    for param in list_of_bytes_params:
        for cache in caches:
            const_data_bytes[param][cache] = get_curve_fit_equations(indivisual_cache_bytes[cache],param)
        # const_data_bytes[param] = {
        #     # "L1D" : get_curve_fit_equations(l1d_bytes,param),
        #     # "L2" : get_curve_fit_equations(l2_bytes,param),
        #     # "L3" : get_curve_fit_equations(l3_bytes,param),
        #     "DRAM" : get_curve_fit_equations(dram_bytes,param)
        # }
        for cache in const_data_bytes[param]:
            for degree in const_data_bytes[param][cache]:
                data["Cache Name"].append(cache)
                data["parameter"].append(param)
                data["degree"].append(degree)
                data["coff1"].append(const_data_bytes[param][cache][degree]["coff1"])
                data["coff2"].append(const_data_bytes[param][cache][degree]["coff2"])
                data["coff3"].append(const_data_bytes[param][cache][degree]["coff3"])
                data["const"].append(const_data_bytes[param][cache][degree]["const"])   

    
    df = pd.DataFrame(data)
    
    return df

def parseArgs():
    parser = argparse.ArgumentParser(description='Get curve fit constants')
    parser.add_argument('-f', '--folder', type=str, required=True, help='Folder containing the csv files for all frequencies')
    # add arg for machine
    parser.add_argument('-m', '--machine', type=str, required=True, help='Machine name')
    args = parser.parse_args()
    return args

if __name__ == "__main__":
    args = parseArgs()
    
    df = get_curve_constants(args.folder)
    print(df)
    df.to_csv(f"curve_constants_{args.machine}.csv",index=False)

