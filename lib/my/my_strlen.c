/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** pierre1.delavigne@epitech.eu
*/

#include "my.h"

int my_strlen(char const *str)
{
    int counts = 0;

    for (; *str != '\0'; str += 1)
        counts += 1;
    return (counts);
}
