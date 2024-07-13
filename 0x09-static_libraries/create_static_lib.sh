#!/bin/bash
# Create object files from .c files
gcc -c *.c

# Create the static library
ar rc liball.a *.o

# Index the library
ranlib liball.a
