/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** pierre1.delavigne@epitech.eu
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    } if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } if (nb < 10) {
        my_putchar(nb + '0');
    }
    return (0);
}
