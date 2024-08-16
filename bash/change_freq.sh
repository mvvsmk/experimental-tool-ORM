sudo -v

echo "====================================================================="
cpupower frequency-info
echo "====================================================================="
sudo cpupower frequency-set -u $1
sudo cpupower frequency-set -d $1
echo "frequency set to $1"
echo "====================================================================="
cpupower frequency-info
echo "====================================================================="