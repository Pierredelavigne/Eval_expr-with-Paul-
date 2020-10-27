/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
**  string as parameter which reprents mathematical expression and evaluates
*/

#include <stdlib.h>
#include "my.h"
#include <string.h>

char *find_par(char **av)
{
    int dbz = strlen(av);
    int i = 0;

    while (i < dbz) {        
        if (av[i] == 41)
            return (0);
        i++;
    }
    int y = i;
    while (y < av[y]) {
        if (av[y] == 40)
            return (0);
        y--;
    }
    sous_add(av, i, y);
    mult_div_mod(av, i, y);
}

char *add_par(char const *str)
{
    int i = 1;
    char *av = malloc(sizeof(char *) * my_strlen(str) + 2);

    av[0] = 40;
    while (i < my_strlen(str)) {
        av[i] = str[i] - 1;
        i++;
    }
    av[i] = 41;
    find_par(av);
}

char *remove_par(char **av, int i, char *result, int c)
{    
    while (c <= i) {
        if (result[c] != '\0') {
            av[c] = result[c];
        } else {
            free(av[c]);
        c++;
        }
    }
    return (result);
    return (av);
    if (strlen(av) != strlen(result))
        find_par(av);
    else
        my_putstr(result);
}

int eval_expr(char const *str)
{
    add_par(str);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
