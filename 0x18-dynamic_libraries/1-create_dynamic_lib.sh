#!/bin/bash

# Compile all .c files into object files with position-independent code (PIC).
gcc -c -fPIC *.c

# Create the dynamic library from the compiled object files.
gcc -shared -o liball.so *.o

# Clean up the temporary object files (optional).
rm *.o
