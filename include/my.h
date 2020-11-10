/*
** EPITECH PROJECT, 2018
** include
** File description:
** my
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void bsq(char *file_path);
int find_biggest_square(char **map, int *row_col, int row, int col);
int check_size(int r, int *taille_c);
int verif_egal(int *taille_c, int i, int r);
int get_size(char **map, int nb_cols, int *coord, int r);
char *mem_alloc(char const *a, char const *b);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
int my_strlen(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
int open_file(char const *filepath);
int get_nbr_rows(char const *filepath);
int get_nbr_col(char const *filepath);
int open_file(char const *filepath);
char *my_revstr(char *str);
int str_to_int(char *nbr);
char *int_to_str(int nbr);
void my_put_nbr(int nb);
