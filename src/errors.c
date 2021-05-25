/*
** EPITECH PROJECT, 2020
** errors.c
** File description:
** erros handling
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int incorrect_arg(int ac, char **av)
{
    int i = 0;

    for (; av[2][i] != '\0'; i ++)
    {
        if (isalpha (av[2][i]) == 0 && av[2][i] != ' ') {
            my_putstr("error : Incorrect arguments\n");
            exit (84);
        }
    }
    if (av[3][0] != '0' && av[3][0] != '1') {
        my_putstr("incorrect argument\n");
        exit (84);
        }
}

int errors(int ac, char **av)
{
    if (ac == 1) {
        my_putstr("error : No arguments\n");
        exit (84);
    }
    if (ac > 4){
        my_putstr("error : too many arguments\n");
        exit(84);
    }
    if (ac < 4){
        my_putstr("error : not enough arguments\n");
        exit(84);
    }
    incorrect_arg(ac, av);
    return 0;
}
