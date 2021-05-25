/*
** EPITECH PROJECT, 2020
** multiple_matrix.c
** File description:
** multiple key_matrix and message_matrix
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

void multiple_matrix(char *msg, char *key, float **key_matrix, float **message_matrix)
{
    int nb_column = get_size_of_matrix(key);
    int nb_line = get_nb_line(my_strlen(msg), nb_column);
    float **res = malloc(sizeof(float*) * nb_line);
    int i = 0;
    int j = 0;
    
    for (; i < nb_line; i++) {
        res[i] = malloc(sizeof(float) * nb_column);
        for (j = 0; j < nb_column; j++) {
            res[i][j] = 0;
            for (int k = 0; k < nb_column; k++) {
                res[i][j] = res[i][j] + message_matrix[i][k] * key_matrix[k][j];
            }
            if (j == (nb_column - 1)) {
                printf("%.0f", res[i][j]);
            } else {
                printf("%.0f ", res[i][j]);
            }
        }
    }
    printf("\n");
}
