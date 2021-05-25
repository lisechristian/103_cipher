/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main function 103cipher
*/

#include <ctype.h>
#include "my.h"

int main(int ac, char **av)
{
    int size_message = 0;
    float **key_matrix;
    float **message_matrix;

    manage_h_flag(ac, av);
    errors(ac, av);
    if (ac == 4 && av[3][0] == '0') {
        key_matrix = transcrpit_key(av[2]);
        size_message = get_size_of_matrix(av[2]);
        message_matrix = retrieve_encrypted_message(av[1], size_message);
        multiple_matrix(av[1], av[2], key_matrix, message_matrix);
    }
    return (0);
}
