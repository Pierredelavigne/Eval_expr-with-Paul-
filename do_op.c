/*
** EPITECH PROJECT, 2020
** 
** File description:
** calcule des operations
*/

#include "my.h"
#include <stdlib.h>

void add(char **av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);
    int c = y;

    while (y < i) {
        if (av[y] != 43) {
            first[y] = av[y];
            y++;
        }
    }
    y = my_strlen(first) + 1;
    while (y < i) {
        second[y] = av[y];
        y++;
    }
    result = my_getnbr(first) + my_getnbr(second);
    remove_par(av, i, y, result);
}
void sous(char **av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);
    int c = y;

    while (y < i) {
        if (av[y] != 45) {
            first[y] = av[y];
            y++;
        }
    }
    y = my_strlen(first) + 1;
    while (y < i) {
        second[y] = av[y];
        y++;
    }    
    result = my_getnbr(first) - my_getnbr(second);
    remove_par(av, i, y, result);
}

void division(char **av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);
    int c = y;

    while (y < i) {
        if (av[y] != 47) {
            first[y] = av[y];
            y++;
        }
    }
    y = my_strlen(first) + 1;
    while (y < i) {
        second[y] = av[y];
        y++;
    }
    result = my_getnbr(first) / my_getnbr(second);
    remove_par(av, i, y, result);
}

void mult(char **av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);
    int c = y;

    while (y < i) {
        if (av[y] != 42) {
            first[y] = av[y];
            y++;
        }
    }    
    y = my_strlen(first) + 1;
    while (y < i) {
        second[y] = av[y];
        y++;
    }
    result = my_getnbr(first) * my_getnbr(second);
    remove_par(av, i, y, result);
}

void mod(char **av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);
    int c = y;

    while (y < i) {
        if (av[y] != 37) {
            first[y] = av[y];
            y++;
        }
    }
    y = my_strlen(first) + 1;
    while (y < i) {
        second[y] = av[y];
        y++;
    }
    result = my_getnbr(first) % my_getnbr(second);
    remove_par(av, i, y, result);
}
