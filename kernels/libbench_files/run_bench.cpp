#ifndef PAPI_TIME_INST
#define PAPI_TIME_INST

#include <atomic>
#include <chrono>
#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stddef.h>
#include <stdexcept>
#include <stdint.h>
#include <sys/wait.h>
#include <thread>
#include <unistd.h>
#include <vector>

namespace energy_time {

double time_reading_ns = 0;
double time_reading = 0;
long long unsigned energy_reading = 0;
std::chrono::time_point<std::chrono::high_resolution_clock> start_time_counter;
std::chrono::time_point<std::chrono::high_resolution_clock> end_time_counter;
long long unsigned start_energy_counter = 0;
long long unsigned end_energy_counter = 0;
// Global max energy value
long long unsigned energy_max = (1ULL << 32) - 1;
std::atomic<bool> stop_event(false);
std::thread counter_overflows;
std::vector<int> energy_overflows = {-1};
double energy_j = 0.0;

} // namespace energy_time

extern "C" unsigned long long _mlir_ciface_get_energy();

// Function for the counter thread
void counter_thread(std::vector<int> &count) {

  std::cout << "Energy overflow thread running" << std::endl;
  uint64_t energy_start = energy_time::energy_max;

  if (energy_time::stop_event)
    std::cout << "Energy overflow stop event set to true";

  while (!energy_time::stop_event) {
    try {
      unsigned long long energy = _mlir_ciface_get_energy();
      if (energy < energy_start) {
        count[0]++;
        if (count[0] != 0) {
          std::cout << "Energy overflows" << std::endl;
        }
      }
      energy_start = energy;
    } catch (const std::exception &e) {
      std::cerr << "Error in reading the energy: " << e.what() << std::endl;
      std::exit(1);
    }
    std::this_thread::sleep_for(std::chrono::seconds(10));
  }
}

unsigned long long get_max_energy() {
  unsigned long long energy_uj;
  std::ifstream energy_file(
      "/sys/class/powercap/intel-rapl:0/max_energy_range_uj");

  // Check if the file was opened successfully
  if (!energy_file.is_open()) {
    std::cerr << "Failed to open energy_uj file" << std::endl;
    throw std::runtime_error("File opening failed");
  }

  // Read the energy value
  energy_file >> energy_uj;
  if (energy_file.fail()) {
    std::cerr << "Failed to read energy" << std::endl;
    energy_file.close();
    throw std::runtime_error("File reading failed");
  }
#ifdef HUMAN_READABLE
  std::cout << "Max core energy : " << energy_uj << " uJ" << std::endl;
#endif
  // Close the file
  energy_file.close();
  return energy_uj;
}

extern "C" {
unsigned long long _mlir_ciface_get_energy() {
  unsigned long long energy_uj;
  std::ifstream energy_file("/sys/class/powercap/intel-rapl:0/energy_uj");

  // Check if the file was opened successfully
  if (!energy_file.is_open()) {
    std::cerr << "Failed to open energy_uj file" << std::endl;
    throw std::runtime_error("File opening failed");
  }

  // Read the energy value
  energy_file >> energy_uj;
  if (energy_file.fail()) {
    std::cerr << "Failed to read energy" << std::endl;
    energy_file.close();
    throw std::runtime_error("File reading failed");
  }
#ifdef HUMAN_READABLE
  std::cout << "Energy core: " << energy_uj << " uJ" << std::endl;
#endif
  // Close the file
  energy_file.close();
  return energy_uj;
}

void _mlir_ciface_start_energy_time() {
  energy_time::start_time_counter = std::chrono::high_resolution_clock::now();
  energy_time::energy_max = get_max_energy();
  energy_time::start_energy_counter = _mlir_ciface_get_energy();
  if (energy_time::stop_event) {
    std::cout << "Energy overflow check thread stop event set to true might be "
                 "an error";
    energy_time::stop_event = false;
  }
  energy_time::counter_overflows =
      std::thread(counter_thread, std::ref(energy_time::energy_overflows));
}

void _mlir_ciface_stop_energy_time() {
  energy_time::end_energy_counter = _mlir_ciface_get_energy();
  energy_time::end_time_counter = std::chrono::high_resolution_clock::now();
  energy_time::stop_event = true;
  energy_time::counter_overflows.join();
}

void _mlir_ciface_print_energy_time() {
  std::chrono::duration<double> timing =
      energy_time::end_time_counter - energy_time::start_time_counter;
  if (energy_time::energy_overflows[0] > 0) {
    std::cout << "Number of times Energy Overflowed : "
              << energy_time::energy_overflows[0] << std::endl;
    energy_time::energy_reading =
        (energy_time::end_energy_counter - energy_time::start_energy_counter) +
        (energy_time::energy_overflows[0] * energy_time::energy_max);
  } else {
    energy_time::energy_reading =
        energy_time::end_energy_counter - energy_time::start_energy_counter;
  }
  energy_time::time_reading_ns =
      std::chrono::duration_cast<std::chrono::nanoseconds>(timing).count();
  energy_time::time_reading = double(energy_time::time_reading_ns) / 1000000000;
  energy_time::energy_j = double(energy_time::energy_reading) / 1000000;
#ifdef HUMAN_READABLE
  std::cerr << "Measured Energy (J) : " << energy_time::energy_j << std::endl;
  std::cerr << "Measured Time (s) : " << energy_time::time_reading << std::endl;
  std::cerr << "Measured Energy (J) : " << energy_time::energy_reading
            << std::endl;
  std::cerr << "Start Energy (uJ) " << energy_time::start_energy_counter
            << std::endl;
  std::cerr << "End Energy (uJ) " << energy_time::end_energy_counter
            << std::endl;
#endif
  std::cout << energy_time::energy_j << std::endl;
  std::cout << energy_time::time_reading << std::endl;
  std::cout << energy_time::energy_reading << std::endl;
  std::cout << energy_time::start_energy_counter << std::endl;
  std::cout << energy_time::end_energy_counter << std::endl;
}

void set_frequency_cap_core(long int frequency) {
  char command[256];

  // Construct the shell command to set CPU frequency
  std::snprintf(
      command, sizeof(command),
      "echo %ld | tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_max_freq",
      frequency);

  // Run the command using system()
  int ret = std::system(command);

  // Check if the command executed successfully
  if (ret == -1) {
    std::cerr << "Failed to set CPU frequency to " << frequency << std::endl;
  } else {
    std::cout << "Max core frequency set to " << frequency << std::endl;
  }
}

// Function to set the uncore frequency cap
void set_frequency_cap_uncore(long int frequency) {
  char command[256];

  // Construct the shell command to set uncore frequency
  std::snprintf(command, sizeof(command),
                "echo %ld | tee "
                "/sys/devices/system/cpu/intel_uncore_frequency/"
                "package_00_die_00/max_freq_khz",
                frequency);

  // Run the command using system()
  int ret = std::system(command);

  // Check if the command executed successfully
  if (ret == -1) {
    std::cerr << "Failed to set max uncore frequency to " << frequency
              << std::endl;
  } else {
    std::cout << "Max uncore frequency set to " << frequency << std::endl;
  }
}

void _mlir_ciface_set_frequency_caps(long int core, long uncore) {
  set_frequency_cap_core(core);
  set_frequency_cap_uncore(uncore);
  return;
}
}
#endif /* PAPI_TIME_INST */
