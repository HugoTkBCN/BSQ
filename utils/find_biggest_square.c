/*
** EPITECH PROJECT, 2018
** find biggest square
** File description:
** trouve le plus grand carré
*/

#include "../include/my.h"

int get_size(char **map, int nb_cols, int *coord, int r)
{
    for (int c = 0; c < nb_cols; c++) {
        if (map[coord[0] + r][coord[1] + c] == 'o' || coord[1] + c == nb_cols)
            return (c);
    }
}

int verif_egal(int *taille_c, int i, int r)
{
    for (i; taille_c[i]; i++) {
        if (taille_c[i] < r)
            return (0);
    }
    return (1);
}

int check_size(int r, int *taille_c)
{
    int verif_eg;

    for (int i = 0; i < r; i++) {
        if (r == taille_c[i]) {
            verif_eg = verif_egal(taille_c, i, r);
            if (verif_eg == 1)
                return (r);
        } else if (taille_c[i] < r) {
            r--;
            r = check_size(r, taille_c);
        }
    }
    return (r);
}
int find_biggest_square(char **map, int *row_col, int row, int col)
{
    int r;
    int *taille_c = malloc(sizeof(int) * row_col[0] - row + 1);
    int size;
    int coord[2] = {row, col};

    if (row_col[0] < row || row_col[1] < col)
        return (-1);
    for (r = 0; map[row + r][col]; r++) {
        if (map[row + r][col] == 'o')
            break;
        taille_c[r] = get_size(map, row_col[1], coord, r);
    }
    size = check_size(r, taille_c);
    free(taille_c);
    return (size);
}
