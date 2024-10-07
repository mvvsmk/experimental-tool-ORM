#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void set_frequency_cap(long int frequency) {
    char command[256];

    // Construct the shell command to set CPU frequency
    snprintf(command, sizeof(command),
             "echo %ld | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_max_freq",
             frequency);

    // Run the command using system()
    int ret = system(command);

    if (ret == -1) {
        fprintf(stderr, "Failed to set CPU frequency to %ld\n", frequency);
    }else {
        printf("Max core frequency set to %ld\n", frequency);
    }
}

void set_max_uncore_freq_intel(long int frequency) {
    char command[256];

    // Construct the shell command to set uncore frequency
    snprintf(command, sizeof(command),
             "echo %ld | tee /sys/devices/system/cpu/intel_uncore_frequency/package_00_die_00/max_freq_khz",
             frequency);

    // Run the command using system()
    int ret = system(command);

    if (ret == -1) {
        fprintf(stderr, "Failed to set max uncore frequency to %ld\n", frequency);
    } else {
        printf("Max uncore frequency set to %ld\n", frequency);
    }
}


// Global variables to store start and end times
clock_t start_time, end_time;

// Function to start the timer
void start_timer() {
    start_time = clock();
}

// Function to stop the timer
void stop_timer() {
    end_time = clock();
}

// Function to calculate and print the elapsed time in seconds
void print_elapsed_time() {
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;  // Calculate time in seconds
    printf("Elapsed time: %.6f seconds\n", time_taken);
}
