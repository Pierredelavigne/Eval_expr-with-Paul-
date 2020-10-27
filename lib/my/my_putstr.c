/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** pierre1.delavigne@epitech.eu
*/

#include "my.h"

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str += 1;
    }
    return (0);
}
