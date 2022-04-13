/*
** EPITECH PROJECT, 2022
** generator.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "../include/generator.h"
#include "generator.h"
#include <stdlib.h>

char **complet_line_perfect(char **map, int x, int i)
{
    for (int j = 2; j < x; j += 2) {
        map[i][j] = '*';
        srand(rand());
        if (rand() % 2 == 1) {
            map[i - 1][j] = '*';
        } else {
            map[i][j - 1] = '*';
        }
    }
    return map;
}

char **complet_line_unperfect(char **map, int x, int i)
{
    for (int j = 2; j < x; j += 2) {
        map[i][j] = '*';
        srand(rand());
        map[i - (rand() % 2)][j] = '*';
        srand(rand());
        map[i][j - (rand() % 2)] = '*';
    }
    return map;
}

char **complet_map_un(char **map, int x, int y)
{
    for (int i = 2; i < y; i += 2) {
        map = complet_line_unperfect(map, x, i);
    }
    return map;
}

int unperfecto(int x, int y)
{
    char **map = malloc(sizeof(char *) * (y + 1));

    for (int i = 0; i < y; i += 1) {
        map[i] = malloc(sizeof(char) * (x + 1));
        str_cplt(map[i], i, x);
    }
    map[y] = NULL;
    map = is_paire(map, x, y);
    map = complet_map_un(map, x, y);
    for (int h = 0; map[h + 1] != NULL; h += 1) {
        write(1, map[h], x);
        write(1, "\n", 1);
    }
    write(1, map[y - 1], x);
    return 0;
}
