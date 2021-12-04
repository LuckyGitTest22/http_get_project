#!/bin/bash
if [ -z $1 ] || [ ! -z $3 ]
then
	echo "Error!"
	exit
fi
if ! [ -a $1.c ]
then
	echo "Error!"
	exit
fi
gcc $1.c -lchilkat -ldl -o $1 &&
./$1 $2 &&
rm ./$1
