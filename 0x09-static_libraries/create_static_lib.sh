#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liaball.a *.o
ranlib liball.a
