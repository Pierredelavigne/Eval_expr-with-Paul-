/*
** EPITECH PROJECT, 2020
** 
** File description:
** calcule des operations
*/

#include "my.h"

int add(char *av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);

    while (y < i) {
        if (av[y] != 43) {
            first = first + av[y];
        y++;
        }
    }
    y = my_strlen(first) + 1;
    while (y < i) {
        second = second + av[y];
        y++;
    }
    result = my_getnbr(first) + my_getnbr(second);
    remove_par(av, i, y, result);
    return (result);
    return (av);
}

int sous(char *av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);

    while (y < i) {
        if (av[y] != 45) {
            first = first - av[y];
            y++;
        }
    }
    y = my_strlen(first) + 1;
    while (y < i) {
        second = second - av[y];
        y++;
    }
        
    result = my_getnbr(first) - my_getnbr(second);
    remove_par(av, i, y, result);
    return (result);
    return (av);
}

int div(char *av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);

    while (y < i) {
        if (av[y] != 47) {
            first = first / av[y];
            y++;
        }
    }
    y = my_strlen(first) + 1;
    while (y < i) {
        second = second / av[y];
        y++;
    }
        
    result = my_getnbr(first) / my_getnbr(second);
    remove_par(av, i, y, result);
    return (result);
    return (av)
}

int mult(char *av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);

    while (y < i) {
        if (av[y] != 42) {
            first = first * av[y];
            y++;
        }
    }

    y = my_strlen(first) + 1;
    while (y < i) {
        second = second * av[y];
        y++;
    }
   
    result = my_getnbr(first) * my_getnbr(second);
    remove_par(av, i, y, result);
    return (result);
    return (av);
}

int mod(char *av, int i, int y)
{
    int src = my_strlen(av);
    char *first = malloc(sizeof(char) * src);
    char *second = malloc(sizeof(char) * src);
    char *result = malloc(sizeof(char) * src);

    while (y < i) {
        if (av[y] != 37) {
            first = first % av[y];
            y++;
        }
    }

    y = my_strlen(first) + 1;
    while (y < i) {
        second = second % av[y];
        y++;
    }
    
    result = my_getnbr(first) % my_getnbr(second);
    remove_par(av, i, y, result);
    return (result);
    return (av);
}
