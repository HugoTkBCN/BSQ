/*
** EPITECH PROJECT, 2018
** main
** File description:
** bsq
*/

#include "include/my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    bsq(av[1]);
    return (0);
}
