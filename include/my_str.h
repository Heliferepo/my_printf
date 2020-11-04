/*
** EPITECH PROJECT, 2020
** my_str_libmy
** File description:
** libmy_for_the_epitech_curriculum
*/

#ifndef _MY_STR_H_
#define _MY_STR_H_
#include <stdbool.h>
#include <stddef.h>
char *concat_params(int argc, char **argv);
bool is_an_alpha_letter(char const c);
bool is_capital_letter(char const c);
bool is_lowercase_letter(char const c);
bool is_num_letter(char const c);
bool is_printable(char const c);
bool is_char_alphanum(char const c);
size_t my_len_array(size_t nb_elements, char **array);
char *my_put_in_str(char *str, size_t index, char to_add);
char *my_revstr(char *str);
void my_showstr(char const *str);
void my_show_word_array(char *const *tab);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
char my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
size_t my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, size_t nb);
int my_strncmp(char const *s1, char const *s2, size_t n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
int my_word_count(char const *str);
void print_char_in_hex(unsigned char c);
void print_char_in_oct(unsigned char c);
#endif
