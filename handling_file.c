/*
** EPITECH PROJECT, 2023
** settingup.c main
** File description:
** Placeholder
*/

#include "my.h"

static int is_valid(char *buf, int *offset2)
{
    int offset = 0;
    int line = 0;
    int lines = my_getnbr(buf);
    int j;

    if (!('0' <= *buf && *buf <= '9') || lines <= 0)
        return 0;
    for (; buf[offset++] != '\n';);
    for (; buf[offset + line] != '\n'; line++);
    for (int i = 0; i < lines; i++) {
        for (j = 0; buf[offset + i * (line + 1) + j] != '\n'; j++);
        if (j != line)
            return 0;
    }
    for (int i = 0; i < (line + 1) * lines; i++)
        if (buf[offset + i] != 'o' && buf[offset + i] != '.' &&
            buf[offset + i] != '\n')
            return 0;
    *offset2 = offset;
    return 1;
}

static int get_size(char const *path)
{
    struct stat file;

    stat(path, &file);
    return file.st_size;
}

int read_file(char const *path)
{
    char *buf = NULL;
    int fd = open(path, O_RDONLY);
    int size = get_size(path);
    int len = 0;
    int offset = 0;

    buf = malloc(size + 1);
    if (!buf || fd == -1)
        return 84;
    len = read(fd, buf, size);
    if (len == -1 || !is_valid(buf, &offset))
        return 84;
    buf[len] = 0;
    find_largest(buf + offset, size - offset - my_getnbr(buf));
    free(buf);
    return 0;
}
