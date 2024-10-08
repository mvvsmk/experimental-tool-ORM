
# red =  #ac3847
# darkgree = #1c5954
# brown = #744238
# orange = #d35637
# purple = #662c6d
# deep pink = #352e36
# deep green = #496357

#---
# 338b9a
# 648458
# 8db956
# f7b24c
#---

def get_cache_color_list(caches_to_plot):
    colors ={
        "L1D" : "#338b9a",
        "L2" : "#648458",
        "L3" : "#f7b24c",
        "DRAM" : "#ac3847"
    }
    return colors

def get_marker_database_for_polybench(Name, polybench_df):
    markers_l = ['o', 'v', '^', '<', '>', '1', '2', '3', '4', '8', 's', 'p', '*', 'h', 'H', '+', 'x', 'D', 'd', '|', '_', '.', ',', 'P', 'X']

    # Add some random markers by repeating and extending the list
    while len(markers_l) < 30:
        markers_l += markers_l
    
    list_of_polybench = polybench_df["Name"].unique()
    #create a dictionary of markers for each polybench kernel
    markers = {}
    for i, kernel in enumerate(list_of_polybench):
        markers[kernel] = markers_l[i]   
    
    return markers   
