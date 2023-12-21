#!/bin/bash

rm -f output.txt
make -C../ fclean && rm -f ./setting_up
echo "All clean!"
