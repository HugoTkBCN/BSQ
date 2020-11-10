/*
** EPITECH PROJECT, 2018
** load 2d arr
** File description:
** bsq
*/

#include "../include/my.h"

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols)
{
    int fd = open(filepath, O_RDONLY);
    char **array = mem_alloc_2d_array(nb_rows + 1, nb_cols + 1);
    char *tmp = malloc(sizeof(char) * 1 + 1);

    while (tmp[0] != '\n')
        read(fd, tmp, 1);
    for (int r = 0; r < nb_rows; r++) {
        for (int c = 0; c < nb_cols; c++) {
            read(fd, tmp, 1);
            array[r] = tmp[0] != '\n' ? mem_alloc(array[r], tmp) : array[r];
            c = tmp[0] == '\n' ? c - 1 : c;
        }
    }
    array[nb_rows][nb_cols] = '\0';
    free(tmp);
    close(fd);
    return (array);
}
