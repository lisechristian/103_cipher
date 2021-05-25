/*
65;6003;1c** EPITECH PROJECT, 2020
** my.h
** File description:
** functions prototypes 103 cipher
*/

#ifndef MY_H_
#define MY_H_

//Lib
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);

//struct
typedef struct matrix_s {
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
} matrix_t;

//src
int get_size_of_matrix(char *str);
int get_nb_line(int size_line_message, int size_key);
int modify_message_matrix(int message_matrix_size);
float **transcrpit_key(char *str);
float **retrieve_encrypted_message(char *str, int size);
float *retrieve_line_message(char *str);
void multiple_matrix(char *msg, char *key, float **key_matrix, float **message_matrix);
int compare_matrix(float **key_matrix, float **message_matrix);
void manage_h_flag(int ac, char **av);
int errors(int ac, char **av);
#endif
