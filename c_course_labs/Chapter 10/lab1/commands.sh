#!/bin/bash

echo "Generate the intermediate file !"
sleep 1
gcc -E lab1.c -o lab1.o
sleep 1

echo "Generate the assembly file !"
sleep 1
gcc -S lab1.c -o lab1.asm
sleep 1

echo "Generate the object file !"
sleep 1
gcc -c lab1.c -o lab1.o
sleep 1

echo "Generate the executable file !"
sleep 1
gcc lab1.c -o lab
sleep 1

echo "Task finished !"