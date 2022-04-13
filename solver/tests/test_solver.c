/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "solver.h"

Test (solver, solver_path_null) {
    cr_assert_eq(solver(NULL), 84);
}

Test (solver, wrong_path) {
    cr_assert_eq(solver("404.txt"), 84);
}

Test (solver, noentry_maze) {
    cr_assert_eq(solver("../bonus/tests/noentry_maze.txt"), 84);
}

Test (solver, noexit_maze) {
    cr_assert_eq(solver("../bonus/tests/noexit_maze.txt"), 84);
}

Test (solver, nosolution_maze) {
    cr_assert_eq(solver("../bonus/tests/nosolution_maze.txt"), 84);
}
