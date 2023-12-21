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

static int fill_tab(int xy[2], int dims[2], char *buf, int *tab)
{
    int n = xy[1] * dims[0] + xy[0];

    if (xy[0] < 0 || xy[1] < 0 || xy[0] >= dims[0] || xy[1] >= dims[1])
        return 0;
    if (tab[n] != -1)
        return tab[n];
    if (buf[n + xy[1]] == 'o') {
        tab[n] = 0;
        fill_tab((int[2]){xy[0] + 1, xy[1] + 1}, dims, buf, tab);
        fill_tab((int[2]){xy[0] - 1, xy[1]}, dims, buf, tab);
        fill_tab((int[2]){xy[0], xy[1] - 1}, dims, buf, tab);
        return tab[n];
    }
    tab[n] = my_min(fill_tab((int[2]){xy[0] - 1, xy[1]}, dims, buf, tab),
        fill_tab((int[2]){xy[0] - 1, xy[1] - 1}, dims, buf, tab),
        fill_tab((int[2]){xy[0], xy[1] - 1}, dims, buf, tab)) + 1;
    fill_tab((int[2]){xy[0] + 1, xy[1] + 1}, dims, buf, tab);
    return tab[n];
}

