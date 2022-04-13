/*
** EPITECH PROJECT, 2022
** solver.h
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#ifndef B_CPE_200_BDX_2_1_DANTE_ALEXIS_FAURE_SOLVER_H
    #define B_CPE_200_BDX_2_1_DANTE_ALEXIS_FAURE_SOLVER_H
    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #define SLOT_FREE   0
    #define SLOT_WALL   1
    #define SLOT_PATH   2

typedef struct my_solver {
    char *raw_maze;
    int **maze;
    int height;
    int width;
} solver_t;

typedef struct my_end_pos {
    int y;
    int x;
} pos_t;

int solver(const char * path);
int open_maze(const char *path, solver_t *sol);
int solve_maze(solver_t * sol);
void display(solver_t * sol);
void display_color(solver_t * sol);

void redirect_all_stdout(void);
char analyse_char(int cell);
#endif
