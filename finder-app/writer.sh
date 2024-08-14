#!/bin/bash

writefile=$1
writestr=$2

if [ $# -lt 2 ];then
echo"Arguments are not enough"
exit 1
fi


dirpath=$(dirname "$writefile")

if [ ! -d "$dirpath" ]; then 
mkdir -p "$dirpath"
fi

echo "$writestr" > "$writefile"


echo "file created and written successfully "

