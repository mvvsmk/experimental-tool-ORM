#! /usr/bin/env bash

echo $1 | sudo -S rdmsr -u 1553 | xargs -0 -I {} echo "{}"
sleep $2
echo $1 | sudo -S rdmsr -u 1553 | xargs -0 -I {} echo "{}"
