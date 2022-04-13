/*
** EPITECH PROJECT, 2022
** open_maze.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "../include/solver.h"
#include <sys/stat.h>
#include <fcntl.h>

int get_nb_line(solver_t *sol)
{
    int x = 0;
    if (sol->raw_maze == NULL || sol->raw_maze[0] == '\0')
        return get_nb_line(sol);
    for (int i = 0; sol->raw_maze[i] != '\0'; i++) {
        if (sol->raw_maze[i] == '\n')
            x++;
    }
    return x;
}

int get_line_len(int i, char *buffer)
{
    int x = 0;
    for (; buffer[i] != '\n' && buffer[i] != '\0'; i++, x++);
    return x;
}

static int analyse_char_op(char c)
{
    switch (c) {
        case '*':
            return SLOT_FREE;
        case 'X':
            return SLOT_WALL;
        case '\n':
            return SLOT_WALL;
        default:
            exit(84);
    }
}

int maze_array(solver_t *sol)
{
    int x = 0;
    if (!sol)
        return 84;
    sol->height = get_nb_line(sol);
    if (!(sol->maze = malloc(sizeof(int *) * sol->height + 1)))
        return 84;
    for (int i = 0; sol->raw_maze[i] != '\0'; i++, x++) {
        sol->width = get_line_len(i, sol->raw_maze) - 1;
        sol->maze[x] = malloc(sizeof(int) * sol->width);
        for (int j = 0; sol->raw_maze[i] != '\0' &&
            sol->raw_maze[i] != '\n'; j++, i++) {
            sol->maze[x][j] = analyse_char_op(sol->raw_maze[i]);
        }
    }
    free(sol->raw_maze);
    return 0;
}

int open_maze(const char *path, solver_t *sol)
{
    int fd;
    struct stat sa;
    if (stat(path, &sa) == -1)
        return 84;
    fd = open(path, O_RDONLY);
    sol->raw_maze = malloc(sizeof(char) * sa.st_size);
    if (read(fd, sol->raw_maze, sa.st_size) != sa.st_size)
        return 84;
    return maze_array(sol);
}
