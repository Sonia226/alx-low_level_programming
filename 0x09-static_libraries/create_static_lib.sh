#!/bin/bash

1. Compile all .c files into object files
   gcc -Wall -Werror -Wextra -pedantic -c *.c

2. create the static library from the object files
    ar -rc liball.a *.o

3. indexing
   ranlib liball.a

4.  clean up by removing all the object files
    rm *.o
