#! /usr/bin/env bash

echo $1 | sudo -S rdmsr -u $2 | xargs -0 -I {} echo "{}"
sleep $3
echo $1 | sudo -S rdmsr -u $2 | xargs -0 -I {} echo "{}"
