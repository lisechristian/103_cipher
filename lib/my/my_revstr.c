/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** Reverses a string.
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char c;

    while (j > i) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return (str);
}
