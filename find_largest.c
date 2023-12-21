/*
** EPITECH PROJECT, 2023
** find_largest main
** File description:
** Placeholder
*/

#include "my.h"

static int find_min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    if (b <= a && b <= c)
        return b;
    return c;
}

static int set_cell(int xy[2], int dim[2], int *tab, char *buf)
{
    int id = xy[1] * dim[0] + xy[0];
    int id_r = xy[1] * dim[0] + xy[0] + 1;
    int id_b = (xy[1] + 1) * dim[0] + xy[0];
    int id_rb = (xy[1] + 1) * dim[0] + xy[0] + 1;

    if (xy[0] == dim[0] - 1) {
        tab[id] = (buf[id + xy[1]] == '.');
        return tab[id];
    }
    if (xy[1] == dim[1] - 1) {
        tab[id] = (buf[id + xy[1]] == '.');
        return tab[id];
    }
    if (buf[id + xy[1]] != '.') {
        tab[id] = 0;
        return tab[id];
    }
    tab[id] = find_min(tab[id_r], tab[id_b], tab[id_rb]) + 1;
    return tab[id];
}

static int find_dim(char *buf, int dim[2], int size)
{
    int i = 0;

    for (; buf[i] != '\n'; i++);
    dim[0] = i;
    dim[1] = size / i;
    return 0;
}

static int find_max(int *tab, int res[2], int dim[2])
{
    int max = tab[0];
    int size = dim[0] * dim[1];

    for (int i = 1; i < size; i++) {
        if (max < tab[i]) {
            max = tab[i];
            res[0] = i % dim[0];
            res[1] = i / dim[0];
        }
    }
    return max;
}

int find_largest(char *buf, int size)
{
    int *tab = malloc(4 * size);
    int dim[2] = {0};
    int res[2] = {0};
    int max;

    if (!tab)
        return 84;
    find_dim(buf, dim, size);
    for (int i = dim[1] - 1; i >= 0; i--)
        for (int j = dim[0] - 1; j >= 0; j--)
            set_cell((int [2]){j, i}, dim, tab, buf);
    max = find_max(tab, res, dim);
    for (int i = res[1]; i < res[1] + max; i++)
        for (int j = res[0]; j < res[0] + max; j++)
            buf[i * (dim[0] + 1) + j] = 'x';
    write(1, buf, my_strlen(buf));
    return 0;
}
