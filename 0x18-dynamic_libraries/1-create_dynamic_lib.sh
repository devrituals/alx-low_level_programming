#!/bin/bash
# AUTHOR : ABDELBAR AD
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
