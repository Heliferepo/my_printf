/*
** EPITECH PROJECT, 2020
** process_exception
** File description:
** exception
*/

#include <my_printf.h>
#include <my_stdio.h>
#include <my_math.h>
#include <my_str.h>
#include <stdlib.h>

int my_printf_exception(char const **str, va_list *arg,
                        flag_modifiers_t flag_modificater, int count_char)
{
    int i = 0;

    if (flag_modificater.last_flag != NULL) {
        (*str) += flag_modificater.offset;
        return (my_vn_get_send_to_stdio(arg, count_char));
    }
    if (*(*str + flag_modificater.offset + 1)) {
        my_putchar('%');
        for (i = 0; i < flag_modificater.offset; i++)
            my_putchar(*(*str)++);
    }
    (*str) += flag_modificater.offset + 1;
    return ((**str) ? i : 255);
}
