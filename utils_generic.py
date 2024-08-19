import subprocess
import os

def add_cpuPower_and_likwid_readings(dir,sudo_password):
    """
    Add the CPU power and likwid readings to a txt file in the directory
    """
    cpuPowertxt = os.path.join(dir, "cpuPower.txt")
    likwidtxt = os.path.join(dir, "likwid.txt")
    cpupower_command = f"echo {sudo_password} | sudo -S cpupower frequency-info > {cpuPowertxt} 2>&1"
    likwid_command = f"echo {sudo_password} | sudo -S likwid-features -c N -l > {likwidtxt} 2>&1"
    try :
        subprocess.run(cpupower_command, shell=True)
        subprocess.run(likwid_command, shell=True)
    except Exception as e:
        print(f"Error in running the cpupower and likwid commands: {e}")
        exit(1)
        
def kill_all_vs_code_server():
    try :
        subprocess.run("ps aux | grep .vscode-server | awk '{print $2}' | xargs kill",shell=True, check=True)
    except subprocess.CalledProcessError as e :
        print(f"some error while cleaning vs code server {e}")
        