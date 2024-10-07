#ifndef PAPI_ENERGY_OPENEARTH
#define PAPI_ENERGY_OPENEARTH

#include <chrono>
#include <iostream>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#define start_instrumentaion
#define stop_instrumentation
#define print_instruments

// #ifdef ENERGY_TIME_OPENEARTH

double time_reading_ns = 0;
double time_reading = 0;
long long energy_reading = 0;
std::chrono::time_point<std::chrono::high_resolution_clock> start_time_counter;
std::chrono::time_point<std::chrono::high_resolution_clock> end_time_counter;
long long start_energy_counter = 0;
long long end_energy_counter = 0;

long long get_energy() {
  FILE *fp;
  char path[1035];
  long long value;

  /* Open the command for reading. */
  fp = popen("rdmsr -u 1553 | xargs -0 -I{} echo {}", "r");
  if (fp == NULL) {
    fprintf(stderr, "Failed to run command\n");
    exit(1);
  }

  /* Read the output a line at a time - it should be just one line. */
  if (fgets(path, sizeof(path) - 1, fp) != NULL) {
    // fprintf(stderr, "Output: %s", path);
    value = atoll(path); // Convert the output to an integer
  }

  /* Close the pipe and print the value. */
  pclose(fp);
  // fprintf(stderr, "Value: %lld\n", value);

  return value;
}

void start_energy_time() {
  start_time_counter = std::chrono::high_resolution_clock::now();
  start_energy_counter = get_energy();
}

void end_energy_time() {
  end_energy_counter = get_energy();
  end_time_counter = std::chrono::high_resolution_clock::now();
}

void print_energy_time() {
  std::chrono::duration<double> timing = end_time_counter - start_time_counter;
  energy_reading = end_energy_counter - start_energy_counter;
  time_reading_ns =
      std::chrono::duration_cast<std::chrono::nanoseconds>(timing).count();
  time_reading = double(time_reading_ns) / 1000000000;
#ifdef HUMAN_READABLE
  fprintf(stderr, "Measured Energy : %lld \n", energy_reading);
  fprintf(stderr, "Measured Time : %lf \n", time_reading);
  fprintf(stderr, "Start Energy : %lld \n", start_energy_counter);
  fprintf(stderr, "End Energy : %lld \n", end_energy_counter);
#endif
  fprintf(stdout, "%lld\n", energy_reading);
  fprintf(stdout, "%lf\n", time_reading);
  fprintf(stdout, "%lld\n", start_energy_counter);
  fprintf(stdout, "%lld\n", end_energy_counter);
}

#undef start_instrumentaion
#undef stop_instrumentation
#undef print_instruments

#define start_instrumentaion start_energy_time();

#define stop_instrumentation end_energy_time();

#define print_instruments print_energy_time();

// #endif

#endif /* PAPI_ENERGY_OPENEARTH */