/*
** EPITECH PROJECT, 2020
** my_vn_putbin
** File description:
** put_in_bin
*/

#include <stdbool.h>
#include <stdarg.h>
#include <my_printf.h>

void my_putnbr_base_unsigned(unsigned int nb, int base, bool uppercase);

int get_nb_size_unsigned(unsigned long long nb, int base);

int my_vn_putbin(va_list *arg, flag_modifiers_t modification_flag)
{
    unsigned int new_data = va_arg(*arg, unsigned int);

    (void)modification_flag;
    my_putnbr_base_unsigned(new_data, 2, 0);
    return (get_nb_size_unsigned(new_data, 2));
}
