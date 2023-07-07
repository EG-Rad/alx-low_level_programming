#!/bin/bash

# Create object files from all .c files in the current directory
gcc -c *.c

# Create the static library
ar rcs liball.a *.o

# Clean up by removing the object files
rm *.o

# Display a success message
echo "Static library liball.a created successfully!"
