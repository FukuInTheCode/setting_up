#!/bin/bash

make -C../ re && cp ../setting_up ./

if [ "$#" -eq 1 ] && [ "$1" -ge 1 ] && [ "$1" -le 100 ]; then
    densities=("$1")
else
    densities=({1..100})
fi

for x in {1..10000}; do
    for y in {1..10000}; do
        for density in "${densities[@]}"; do
            echo "Testing with x=$x, y=$y and density=$density."
            ./B-CPE-110_Setting_Up_Generator.pl $x $y $density > "output.txt"

            ./setting_up output.txt > /dev/null

            if [ $? -ne 0 ]; then
                echo "Error: The './setting_up' program did not return 0 for x=$x, y=$y, density=$density."
                rm -f "output.txt"
                make -C../fclean && rm -f ./setting_up
                exit 1
            fi

            rm -f "output.txt"
        done
    done
done

make -C../ fclean && rm -f ./setting_up
echo "Success: All tests passed."
