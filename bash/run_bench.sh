# /usr/bin/env bash
first_rdmsr=$(rdmsr -u 1553)
taskset -c 0 $1
second_rdmsr=$(rdmsr -u 1553)
difference=$((second_rdmsr - first_rdmsr))
#result=$(echo "$difference * 0.5^14" | bc -l)
result=$(echo "$difference * 0.5^14" | bc -l)
echo $result
