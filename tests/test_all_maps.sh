#!/bin/bash

# Directory paths
maps_dir="maps"
solved_dir="solved"

make -C../ re && cp ../setting_up ./

# Iterate through files in the 'maps' directory
for file in "$maps_dir"/*; do
    filename=$(basename "$file")
    ./setting_up "$file" > "output.txt"
    if ! diff -q "output.txt" "$solved_dir/$filename" > /dev/null; then
        echo "Files differ: $filename"
        rm -f ./setting_up
        make -C../ fclean
        rm -f "output.txt"
        exit 84
    fi
    rm -f "output.txt"
done

rm -f ./setting_up
make -C../ fclean
echo "All files match!"
