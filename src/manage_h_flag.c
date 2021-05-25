/*
** EPITECH PROJECT, 2020
** manage_h_flag.c
** File description:
** manage the -h
*/

#include "my.h"
#include <stdio.h>

char *h_flag(void)
{
    printf("USAGE\n");
    printf("   ./103cipher message key flag\n\n");
    printf("DESCRIPTION\n");
    printf("   message    a message, made of ASCII characters\n");
    printf("   key        the encryption key, made of ASCII characters\n");
    printf("   flag       0 for the message to be encrypted, 1 to be decrypted\n");
}

void manage_h_flag(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'){
        h_flag();
    }
}
