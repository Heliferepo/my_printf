/*
** EPITECH PROJECT, 2020
** concat_params.c
** File description:
** concatenate parameters
*/

#include <stdlib.h>
#include <stddef.h>

char *my_strcat(char *dest, char const *src);

size_t my_len_array(size_t nb_elements, char **array);

char *concat_params(int argc, char **argv)
{
    char *concat = malloc(sizeof(char) * (my_len_array(argc, argv) + argc - 1));

    for (int i = 0; argv[i]; i++) {
        my_strcat(concat, argv[i]);
        if (argv[i + 1])
            my_strcat(concat, "\n");
    }
    return (concat);
}
