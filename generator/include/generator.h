/*
** EPITECH PROJECT, 2022
** generator.h
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#ifndef B_CPE_200_BDX_2_1_DANTE_ALEXIS_FAURE_GENERATOR_H
    #define B_CPE_200_BDX_2_1_DANTE_ALEXIS_FAURE_GENERATOR_H
    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stdlib.h>

int generator(int x, int y, bool perfect);

char **complet_line_perfect(char **map, int x, int i);

char **complet_line_unperfect(char **map, int x, int i);

char **complet_map_un(char **map, int x, int y);

int unperfecto(int x, int y);

void str_cplt(char *map, int i, int len);

char **is_paire(char **map, int x, int y);

#endif
