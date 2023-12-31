/*
** EPITECH PROJECT, 2023
** settingup.c gen map
** File description:
** Placeholder
*/

#include "my.h"

int gen_map(int count, char *pattern)
{
    char *buf = NULL;

    if (count <= 0 || my_strlen(pattern) == 0)
        return 84;
    buf = malloc(count * (count + 1) + 1);
    if (!buf)
        return 84;
    for (int i = 0; i < my_strlen(pattern); i++)
        if (pattern[i] != '.' && pattern[i] != 'o')
            return 84;
    for (int i = 0; i++ < count * (count + 1); buf[i - 1] = 'a');
    buf[count * (count + 1)] = 0;
    for (int i = 0; i < count * (count + 1); i++)
        buf[i] = '\n' * ((i + 1) % (count + 1) == 0) +
            ((i + 1) % (count + 1) != 0) *
            pattern[(i - i / (count + 1)) % my_strlen(pattern)];
    find_largest(buf, count * count);
    free(buf);
    return 0;
}
