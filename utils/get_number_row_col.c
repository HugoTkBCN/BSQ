/*
** EPITECH PROJECT, 2018
** get nbr from first line
** File description:
** bsq
*/

#include "../include/my.h"

int get_nbr_rows(char const *filepath)
{
    int fd = open_file(filepath);
    char *buffer = malloc(2);
    int len = 0;
    int nbr = 0;

    while (buffer[0] != '\n') {
        len = len + read(fd, buffer, 1);
        if (len == -1 || len == 0)
            return (-1);
        else if (buffer[0] == '\n' || (buffer[0] >= '0' && buffer[0] <= '9'))
            nbr = buffer[0] != '\n' ? (nbr * 10) + (buffer[0] - '0') : nbr;
        else
            return (-1);
    }
    close(fd);
    free(buffer);
    return (nbr);
}

int get_nbr_col(char const *filepath)
{
    int col = 0;
    int fd = open_file(filepath);
    char *buffer = malloc(2);
    int len = 0;

    while (buffer[0] != '\n') {
        read(fd, buffer, 1);
    }
    read(fd, buffer, 1);
    while (buffer[0] != '\n') {
        len = len + read(fd, buffer, 1);
        if (len == -1 || len == 0)
            exit(84);
        else
            col++;
    }
    close(fd);
    free(buffer);
    return (col);
}
