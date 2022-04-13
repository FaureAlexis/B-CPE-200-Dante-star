/*
** EPITECH PROJECT, 2022
** generator.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "../include/generator.h"
#include "generator.h"
#include <stdlib.h>

void str_cplt(char *map, int i, int len)
{
    for (int j = 0; j <= len; j += 1) {
        if (i == 0 || j == 0) {
            map[j] = '*';
        } else {
            map[j] = 'X';
        }
    }
    map[len] = '\0';
}

char **complet_map(char **map, int x, int y)
{
    for (int i = 2; i < y; i += 2) {
        map = complet_line_perfect(map, x, i);
    }
    return map;
}

char **is_paire(char **map, int x, int y)
{
    if (x % 2 == 0) {
        map[y - 1][x - 1] = '*';
    }
    if (y % 2 == 0) {
        map[y - 1][x - 1] = '*';
        map[y - 2][x - 1] = '*';
    }
    return map;
}

int perfecto(int x, int y)
{
    char **map = malloc(sizeof(char *) * (y + 1));

    for (int i = 0; i < y; i += 1) {
        map[i] = malloc(sizeof(char) * (x + 1));
        str_cplt(map[i], i, x);
    }
    map[y] = NULL;
    map = is_paire(map, x, y);
    map = complet_map(map, x, y);
    for (int h = 0; map[h + 1] != NULL; h += 1) {
        write(1, map[h], x);
        write(1, "\n", 1);
    }
    write(1, map[y - 1], x);
    return 0;
}

int generator(int x, int y, bool perfect)
{
    if (x < 1 || y < 1)
        return 84;
    if (perfect == true)
        return perfecto(x, y);
    return unperfecto(x, y);
}
