/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** C source file for B-CPE-200-BDX-2-1-dante-alexis.faure
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
