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

