#!/bin/bash

# compile all .c files in the current directory
gcc -c -fPIC *.c

# create the dynamic library
gcc -shared -o liball.so *.o

# cleanup the object files
rm *.o
