/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include "my.h"

char *list_op_nb(char **av, int i, int y, int j)
{
    if (av[j][1] == 43) {
        add(av, i, y);
        }
    if (av[j][1] == 45) {
        sous(av, i, y);
        }
    return (av);
}

char *list_op_nb2(char **av, int i, int y, int j)
{
    if (av[j][1] == 42) {
        mult(av, i, y);
        }
    if (av[j][1] == 47) {
        div(av, i, y);
        }
    if (av[j][1] == 37) {
        mod(av, i, y);
        }
    return (av);   
}

char *sous_add(char **av, int i, int y)
{
    int count =  0;
    
    for (int j = 0; av[j][1] != '\0'; j++) {
        if (av[j][1] < 58 && av[j][1] > 47) {
            count++;
            }
        if (av[j][1] == 43 || av[j][1] == 45) {
			list_op_nb(av[j][1], i, y, j);
		return (av);
		}
			list_op_nb(av, i, y, j);
			list_op_nb2(av, i, y, j);
			}	
}	

char *mutl_div_mod(char **av, int i, int y)
{
    int count = 0;
    
    for (int j = 0; av[j][1] != '\0'; j++) {
        if (av[j][1] < 58 && av[j][1] > 47) {
            count++;
            }
        if (av[j][1] == 42 || av[j][1] == 47
            || av[j][1] == 37) {
			list_op_nb(av[j][1], i, y, j);
		return (av);
		}
			list_op_nb(av, i, y, j);
			list_op_nb2(av, i, y, j);
			}	
}

