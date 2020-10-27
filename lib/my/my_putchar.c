/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** pierre1.delavigne@epitech.eu
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
