/*
** EPITECH PROJECT, 2023
** settingup.c main
** File description:
** Placeholder
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 3)
        return 84;
    if (argc == 2)
        return read_file(argv[1]);
    if (argc == 3)
        return gen_map(my_getnbr(argv[1]), argv[2]);
    return 0;
}
