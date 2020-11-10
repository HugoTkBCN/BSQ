/*
** EPITECH PROJECT, 2018
** convert
** File description:
** fonction de convertion
*/

#include "../include/my.h"

int str_to_int(char *nbr)
{
    int i = 0;
    int res = 0;
    int signe = 1;

    if (nbr[i] == '-' || nbr[i] == '+') {
        signe = nbr[i] == '-' ? -1 : 1;
        i++;
    }
    while (nbr[i]) {
        res = res * 10;
        res = res + (nbr[i++] - 48);
    }
    res = res * signe;
    return (res);
}

int abs_value(int nbr)
{
    if (nbr < 0)
        nbr = -nbr;
    return (nbr);
}

char *int_to_str(int nbr)
{
    int i = 0;
    int tmp = 0;
    char *str;
    int new_nbr;

    new_nbr = abs_value(nbr);
    str = malloc(sizeof(int) * new_nbr + 1);
    while (new_nbr != 0) {
        tmp = new_nbr % 10;
        str[i++] = tmp + 48;
        new_nbr = new_nbr / 10;
    }
    if (nbr < 0) {
        str[i++] = '-';
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}
