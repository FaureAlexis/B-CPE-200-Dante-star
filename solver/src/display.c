/*
** EPITECH PROJECT, 2022
** solver.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include "../include/solver.h"

static const char * analyse_char_color(int cell)
{
    switch (cell) {
        case SLOT_FREE:
            return "\x1b[33m*";
        case SLOT_WALL:
            return "\x1b[91mX";
        case SLOT_PATH:
            return "\x1b[92mo";
        default:
            return "\x1b[91mX";
    }
}

char analyse_char(int cell)
{
    switch (cell) {
        case SLOT_FREE:
            return '*';
        case SLOT_WALL:
            return 'X';
        case SLOT_PATH:
            return 'o';
        default:
            return 'X';
    }
}

void display_color(solver_t * sol)
{
    for (int y = 0; y <= sol->height; y += 1) {
        for (int x = 0; x <= sol->width; x += 1) {
            printf("%s", analyse_char_color(sol->maze[y][x]));
        }
        printf("\n");
    }
}

void display(solver_t * sol)
{
    for (int y = 0; y < sol->height; y += 1) {
        for (int x = 0; x <= sol->width; x += 1) {
            printf("%c", analyse_char(sol->maze[y][x]));
        }
        printf("\n");
    }
    for (int x = 0; x <= sol->width; x += 1) {
        printf("%c", analyse_char(sol->maze[sol->height][x]));
    }
}
