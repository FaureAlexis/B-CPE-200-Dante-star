/*
** EPITECH PROJECT, 2022
** solver.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "../include/solver.h"

static int free_all(solver_t *sol)
{
    if (!sol || !sol->maze)
        return 84;
    free(sol->maze);
    free(sol);
    return 0;
}

int solver(const char *path)
{
    if (!path)
        return 84;
    solver_t *sol = malloc(sizeof(solver_t));
    if (open_maze(path, sol) != 0)
        return 84;
    if (sol->maze[0][0] != SLOT_FREE
        || sol->maze[sol->height][sol->width] != SLOT_FREE) {
        printf("no solution found\n");
        free_all(sol);
        return 84;
    }
    if (solve_maze(sol) == 84) {
        printf("no solution found\n");
        free_all(sol);
        return 84;
    }
    display_color(sol);
    free_all(sol);
    return 0;
}
