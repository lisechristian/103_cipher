/*
** EPITECH PROJECT, 2020
** transcript_key.c
** File description:
** Transcript the key into numbers using the ASCII table
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int get_size_of_matrix(char *str)
{
    int size = sqrt(my_strlen(str));

    if(size * size == my_strlen(str))
       return(size);

    return (size + 1);
}

float **transcrpit_key(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int size = get_size_of_matrix(str);
    float **matrix = malloc(sizeof(float *) * (size + 1));
    matrix[size] = NULL;

    printf("Key matrix:\n");
    while (i != size) {
        matrix[i] = malloc(sizeof(float) * size);
        while (j != size) {
            if (str[k] == '\0')
                matrix[i][j] = 0;
            else {
                matrix[i][j] = str[k];
                k ++;
            }
            if (j == (size - 1)) {
                printf("%.0f", matrix[i][j]);
            } else {
                printf("%.0f\t", matrix[i][j]);
            }
            j ++;
        }
        j = 0;
        i ++;
        printf("\n");
    }
    printf("\n");
    return (matrix);
}

int get_nb_line(int size_line_message, int size_key)
{
    if (size_line_message % 2 == 0 && size_key % 2 == 0)
        return (size_line_message / size_key);
    return(size_line_message /size_key + 1);
}

float **retrieve_encrypted_message(char *str, int size_key)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int nb_line = get_nb_line(my_strlen(str), size_key);
    float **matrix = malloc(sizeof(float *) * (nb_line));
    
    printf("Encrypted message:\n");
    while (i != nb_line) {
        matrix[i] = malloc(sizeof(float) * nb_line);
        while (j != size_key) {
            if (str[k] == '\0')
                matrix[i][j] = 0;
            else {
                matrix[i][j] = str[k];
                k ++;
            }
            j ++;
        }
        j = 0;
        i ++;
    }
    return (matrix);
}
