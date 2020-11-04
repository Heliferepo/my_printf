/*
** EPITECH PROJECT, 2020
** my_std_libmy
** File description:
** libmy_for_the_epitech_curriculum
*/

#ifndef _MY_STDLIB_H_
#define _MY_STDLIB_H_
#include <stddef.h>
void my_bzero(void *data, size_t size);
int my_getnbr(char const *str);
void *my_calloc(size_t nmemb, size_t size);
void *my_memset(void *data, int filler, size_t size);
void my_pointer_swap(void **s1, void **s2);
void my_sort_int_array(int *array, int size);
char *my_strdup(char const *str);
char **my_str_to_word_array(char const *str);
void my_swap(int *a, int *b);
void my_itoa(int value, char *to_fill, char const *base);
void my_putpointer(long nb);
#endif
