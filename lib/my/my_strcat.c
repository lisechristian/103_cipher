/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** cat the strings given
*/

#include <stdlib.h>
#include "../../include/my.h"
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int size_dest = my_strlen(dest);
    int size_src = my_strlen(src);
    char *final = malloc(sizeof(char) * (size_dest + size_src + 1));
    int i = 0;
    int j = 0;
    
    for (; dest[i] != '\0'; i++) {
        final[i] = dest[i];
    }
    for (; src[j] != '\0'; j++) {
        final[i] = src[j];
        i++;
    }
    final[i] = '\0';
    return(final);
}
