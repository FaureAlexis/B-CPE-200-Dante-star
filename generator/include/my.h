/*
** EPITECH PROJECT, 2021
** task02
** File description:
** D09
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdio.h>
    #include <stdarg.h>

    void my_putchar(char c);

    int my_isneg(int nb);

    int my_put_nbr(int nb);

    void my_swap(int *a, int *b);

    int my_putstr(char const *str);

    int my_strlen(char const *str);

    int my_getnbr(char const *str);

    void my_sort_int_array(int *tab, int size);

    int my_compute_power_it(int nb, int power);

    int my_compute_power_rec(int nb, int power);

    int my_compute_square_root(int nb);

    int my_is_prime(int nb);

    int my_find_prime_sup(int nb);

    char *my_strcpy(char *dest, char *src);

    int my_show_word_array(char * const *tab);

    char *my_strncpy(char *dest, char const *src, int n);

    char *my_revstr(char *str);

    char *my_strstr(char *str, char const *to_find);

    int my_strcmp(char const *s1, char const *s2);

    int my_strncmp(char const *s1, char const *s2, int n);

    char *my_strupcase(char *str);

    char *my_strlowcase(char *str);

    char *my_strcapitalize(char *str);

    int my_str_isalpha(char const *str);

    int my_str_isnum(char const *str);

    int my_str_islower(char const *str);

    int my_str_isupper(char const *str);

    int my_str_isprintable(char const *str);

    int my_showstr(char const *str);

    int my_showmem(char const *str, int size);

    char *my_strcat(char *dest, char const *src);

    char *my_strncat(char *dest, char const *src, int nb);

    int my_compute_factorial_it(int nb);

    int my_compute_factorial_rec(int nb);

    char *my_evil_str(char *str);

    int my_print_alpha(void);

    int display_comb(int a, int b, int c);

    int my_print_comb(void);

    int my_print_digit(void);

    int my_print_revalpha(void);

    int my_put_nbr_base(int nb, int base, char *str);

    int char_spe(char const *str, int i);

    int my_printf(char *str, ...);

    int w_flag(char *flag, va_list ap, int i);

    int w_flag2(char *flag, va_list ap, int i);

    int w_flag3(char *flag, va_list ap, int i);

    int w_flag4(char *flag, va_list ap, int i);

    int error_input(int begin, int i, char const *str);

    int put_cross(int idx, char *str, int i);

    int my_putstr_nptr(char const *str);

#endif
