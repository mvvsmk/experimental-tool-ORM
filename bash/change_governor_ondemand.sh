sudo -v

echo "====================================================================="
sudo cpupower frequency-set -g ondemand
echo "governor set to ondemand"
echo "$(cpupower frequency-info)"
echo "for raptorlake the hardware prefetchers and trubo should be disabled manually"
echo "$(likwid-features -s)"
echo "here you can check if the hardware prefetchers are disabled"
echo "====================================================================="