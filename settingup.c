/*
** EPITECH PROJECT, 2023
** settingup.c main
** File description:
** Placeholder
*/

#include "my.h"

static int my_min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    if (b <= c)
        return b;
    return c;
}

static int set_largest(char *buffer, int *tab, int dims[2])
{
    int max = 0;
    int max_buf = 0;

    for (int i = 1; i < dims[0] * dims[1]; i++)
        (tab[i] > tab[max]) && (max = i);
    max_buf = max +  max / dims[0];
    for (int i = 0; i < tab[max]; i++)
        for (int j = 0; j < tab[max]; j++)
            buffer[max_buf - i * (dims[0] + 1) - j] = 'x';
    return 0;
}

