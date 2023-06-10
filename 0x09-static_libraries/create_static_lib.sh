#!/bin/bash

1. Compile all .c files into object files
 gcc-Wall-Werror-Wextra-pedanric -c *.c

2. create the static library from the object files
    ar -rc liball.a*.c

3. index the static library
   ranlib liball.a

4.  clean up by removing all the object files
    rm *.o
