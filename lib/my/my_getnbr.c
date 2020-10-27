/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** pierre1.delavigne@epitech.eu
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int length = my_strlen(str) - 1;
    int nb_number = 0;
    int pos_number = 0;
    int pos_number1 = 0;

    for (int i = 0; i <= length; i += 1) {
        if (str[i] >= '0' && str[i] <= '9')
            nb_number += 1;
        if (nb_number == 1)
            pos_number = i;
    }
    pos_number1 = pos_number;
    nb = my_getnbr(str);
    if (nb < -2147483647 || nb > 214783647)
        return (0);
}
