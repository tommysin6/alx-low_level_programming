#!/bin/bash

# Compile each .c file into a .o (object) file
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

# Create the static library liball.a from the generated .o files
ar rcs liball.a *.o

# Clean up by removing the generated .o files
rm *.o
