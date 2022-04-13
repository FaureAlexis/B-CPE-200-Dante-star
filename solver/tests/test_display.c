/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "solver.h"

Test (display, analyse_char_free) {
    cr_assert_eq(analyse_char(SLOT_FREE), '*');
}

Test (display, analyse_char_wall) {
    cr_assert_eq(analyse_char(SLOT_WALL), 'X');
}

Test (display, analyse_char_path) {
    cr_assert_eq(analyse_char(SLOT_PATH), 'o');
}

Test (display, analyse_char_default) {
    cr_assert_eq(analyse_char(404), 'X');
}
