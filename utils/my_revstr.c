/*
** EPITECH PROJECT, 2018
** myrevstr
** File description:
** rev str
*/

#include "../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int y = 0;
    char *tmp;

    y = my_strlen(str);
    tmp = malloc(sizeof(char) * (y + 1));
    y--;
    while (y >= 0) {
        tmp[i] = str[y];
        y--;
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}
