/*
** EPITECH PROJECT, 2022
** solver.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "solver.h"

static bool is_solve(pos_t epos, int y, int x)
{
    if (y == epos.y && x == epos.x)
        return true;
    return false;
}

static int ** explore(int ** maze, int y, int x, pos_t epos)
{
    int ** cpy = NULL;
    maze[y][x] = SLOT_PATH;
    if (is_solve(epos, y, x))
        return maze;
    if (x + 1 <= epos.x && maze[y][x + 1] == SLOT_FREE)
        if ((cpy = explore(maze, y, x + 1, epos)) != NULL)
            return cpy;
    if (y + 1 <= epos.y && maze[y + 1][x] == SLOT_FREE)
        if ((cpy = explore(maze, y + 1, x, epos)) != NULL)
            return cpy;
    if (x - 1 >= 0 && maze[y][x - 1] == SLOT_FREE)
        if ((cpy = explore(maze, y, x - 1, epos)) != NULL)
            return cpy;
    if (y - 1 >= 0 && maze[y - 1][x] == SLOT_FREE)
        if ((cpy = explore(maze, y - 1, x, epos)) != NULL)
            return cpy;
    maze[y][x] = SLOT_FREE;
    return NULL;
}

int solve_maze(solver_t * sol)
{
    if (!sol)
        return 84;
    pos_t epos;
    epos.x = sol->width;
    epos.y = sol->height;
    sol->maze = explore(sol->maze, 0, 0, epos);
    if (!sol->maze)
        return 84;
    return 0;
}
