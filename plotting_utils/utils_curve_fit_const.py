import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from numpy.polynomial import Polynomial
from sklearn.metrics import r2_score

# Load CSV data
file_name = '/home/achilles/code/RooflineModel/plotting_utils/temp_f.csv'  # Change this to your CSV file path

def get_curve_fit_equations(file_name, parameter,plot = False):
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
    
    data = pd.read_csv(file_name)

    # Calculate performance: total_flops / execution time
    data['Performance'] = data['total_flops'] / data['Execution Time(s)']
    data['Bandwidth'] = data['total_missed_bytes'] / data['Execution Time(s)']
    
    # Extract frequency and performance
    x = data['Frequency(kHz)'].values
    # y = data['Performance'].values
    y = data['Bandwidth'].values
    if parameter == "performance":
        y = data['Performance'].values
    elif parameter == "power":
        y = data['Power(W)'].values
    elif parameter == "energy":
        y = data['Energy(J)'].values
    elif parameter == "Bandwidth":
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
    print("{parameter}'s Linear fit equation: y = {:.5f} + {:.5f}x".format(p1.coef[0], p1.coef[1], parameter=parameter))
    print("{parameter}'s Quadratic fit equation: y = {:.5f} + {:.5f}x + {:.5f}x^2".format(p2.coef[0], p2.coef[1], p2.coef[2],parameter=parameter))
    print("{parameter}'s Cubic fit equation: y = {:.5f} + {:.5f}x + {:.5f}x^2 + {:.5f}x^3".format(p3.coef[0], p3.coef[1], p3.coef[2], p3.coef[3], parameter=parameter))

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

    
    
