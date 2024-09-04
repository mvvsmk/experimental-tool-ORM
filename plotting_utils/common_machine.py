#! /usr/bin/env python3


machine_data_counters = {
    "broadwell" : {
        "Flops" : "FP_ARITH_INST_RETIRED:SCALAR",
        "L1D" : "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS",
        "L2" : "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
        "L3" : "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
        "DRAM" : "perf::PERF_COUNT_HW_CACHE_LL:MISS",
        "ALL" : {
            "FP_ARITH_INST_RETIRED:SCALAR_DOUBLE",
            "FP_ARITH_INST_RETIRED:SCALAR",
            "MEM_UOPS_RETIRED:ALL_LOADS",
            "MEM_UOPS_RETIRED:ALL_STORES",
            "perf::PERF_COUNT_HW_CACHE_LL:MISS",
            "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
            "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
            "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS",
        },
    },
    "raptorlake" : {
        "Flops" : "adl_glc::FP_ARITH_INST_RETIRED:SCALAR",
        "L1D" : "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS",
        "L2" : "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
        "L3" : "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
        "DRAM" : "perf::PERF_COUNT_HW_CACHE_LL:MISS",
        "ALL" : {
            "perf::PERF_COUNT_HW_CACHE_LL:MISS",
            "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
            "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
            "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS",
            "adl_glc::FP_ARITH_INST_RETIRED:SCALAR_DOUBLE",
            "adl_glc::FP_ARITH_INST_RETIRED:SCALAR",
            "adl_glc::MEM_INST_RETIRED:ALL_LOADS",
            "adl_glc::MEM_INST_RETIRED:ALL_STORES"
        },
    },
    "rocketlake" : {
        "Flops" : "FP_ARITH_INST_RETIRED:SCALAR",
        "L1D" : "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS",
        "L2" : "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
        "L3" : "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
        "DRAM" : "perf::PERF_COUNT_HW_CACHE_LL:MISS",
        "ALL" : {
                "FP_ARITH_INST_RETIRED:SCALAR_DOUBLE",
                "MEM_INST_RETIRED:ALL_LOADS",
                "MEM_INST_RETIRED:ALL_STORES",
                "MEM_INST_RETIRED:ANY",
                "perf::PERF_COUNT_HW_CACHE_LL:MISS",
                "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
                "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
                "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS"
        },
    },
    # "rocketlake" : {
        # "Flops" : "FP_ARITH_INST_RETIRED:SCALAR",
        # "L1D" : "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS",
        # "L2" : "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
        # "L3" : "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
        # "DRAM" : "perf::PERF_COUNT_HW_CACHE_LL:MISS",
        # "ALL" : {
        #         "FP_ARITH_INST_RETIRED:SCALAR_DOUBLE",
        #         "MEM_INST_RETIRED:ALL_LOADS",
        #         "MEM_INST_RETIRED:ALL_STORES",
        #         "MEM_INST_RETIRED:ANY",
        #         "perf::PERF_COUNT_HW_CACHE_LL:MISS",
        #         "perf::PERF_COUNT_HW_CACHE_LL:ACCESS",
        #         "perf::PERF_COUNT_HW_CACHE_L1D:MISS",
        #         "perf::PERF_COUNT_HW_CACHE_L1D:ACCESS"
        # },
    # },  
    
}

machine_data_cache = {
    'broadwell': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '262144',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '15728640',
            'associativity' : '20',
            'line_size' : '64',
        },
    },
    'skylake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '1', # default value assumed
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '1048576',
            'associativity' : '16',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '8650752',
            'associativity' : '11',
            'line_size' : '64',
        },
    },
    'raptorlake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '49152',
            'associativity' : '12',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '524288',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '12582912',
            'associativity' : '16',
            'line_size' : '64',
        },
    },
    'rocketlake': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '1',  # default value assumed
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '49152',
            'associativity' : '12',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '1310720',
            'associativity' : '10',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '25165824',
            'associativity' : '12',
            'line_size' : '64',
        },
    },
    'zen3': {
        'L1I' : {
            'cache_type' : 'i',
            'cache_size' : '32768',
            'associativity' : '1',  # default value assumed
            'line_size' : '64',
        },
        'L1D' : {
            'cache_type' : 'd',
            'cache_size' : '32768',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L2' : {
            'cache_type' : 'u',
            'cache_size' : '524288',
            'associativity' : '8',
            'line_size' : '64',
        },
        'L3' : {
            'cache_type' : 'u',
            'cache_size' : '33554432',
            'associativity' : '0',
            'line_size' : '64',
        },
    },

}
