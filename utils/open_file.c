/*
** EPITECH PROJECT, 2018
** open file
** File description:
** ouvre fichier
*/

#include "../include/my.h"

int open_file(char const *filepath)
{
    int fd;

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        exit(84);
    return (fd);
}
