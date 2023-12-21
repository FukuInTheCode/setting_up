/*
** EPITECH PROJECT, 2023
** settingup.c main
** File description:
** Placeholder
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc < 2)
        return 84;
    if (argc == 2)
        return read_file(argv[1]);
    return 0;
}
