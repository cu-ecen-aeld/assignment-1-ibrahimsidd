#!/bin/bash

filesdir=$1
searchstr=$2

if [ $# -lt 1 ];then
	echo"No. of arguments are less"
	echo"$0 requires <filesdir> & <searchstr>"
	return 1
fi

if [ ! -d "$filesdir" ];then
	echo "No such directory as $filesdir in the file system"
return 1 
fi

X=$(find "$filesdir" -type f |wc -l)

Y=$(grep -r "$searchstr" "$filesdir" |wc -l)
echo "The number of files are $X and the number of matching lines are $Y"














