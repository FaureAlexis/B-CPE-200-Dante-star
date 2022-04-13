/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "../include/solver.h"

int main(int ac, const char * const * av, char **env)
{
    if (!env || ac != 2 || !av || !av[1])
        return 84;
    const char * path = av[1];
    return solver(path);
}
