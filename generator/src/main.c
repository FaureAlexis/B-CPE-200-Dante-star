/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "../include/generator.h"

int main(int ac, char **av, char **env)
{
    if (!env || ac < 3 || !av)
        return 84;
    bool perfect = false;
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    if (ac == 4 && strcmp(av[3], "perfect") == 0)
        perfect = true;
    return generator(x, y, perfect);
}
