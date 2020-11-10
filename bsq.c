/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** bsq
*/

#include "include/my.h"

void print_map(char **map)
{
    for (int i = 0; map[i]; i++) {
        my_putstr(map[i]);
        map[i + 1] ? my_putchar('\n') : 0;
    }
}

char **put_x(int size, int *coord, char **map)
{
    int max_x;
    int max_y;

    for (int r = 0; map[r][0]; r++) {
        for (int c = 0; map[r][c]; c++) {
            max_x = coord[0] + size;
            max_y = coord[1] + size;
            if (r >= coord[0] && r < max_x && c >= coord[1] && c < max_y) {
                map[r][c] = 'x';
            }
        }
    }
    return (map);
}

void bsq(char *file_path)
{
    int row_col[2] = {get_nbr_rows(file_path), get_nbr_col(file_path)};
    char **map = load_2d_arr_from_file(file_path, row_col[0], row_col[1]);
    int size = 0;
    int size_tmp;
    int coord[2] = {0, 0};

    for (int r = 0; r < row_col[0]; r++) {
        for (int c = 0; c < row_col[1]; c++) {
            size_tmp = find_biggest_square(map, row_col, r, c);
            if (size_tmp > size) {
                size = size_tmp;
                coord[0] = r;
                coord[1] = c;
            }
        }
    }
    map = put_x(size, coord, map);
    print_map(map);
    free(map);
}
