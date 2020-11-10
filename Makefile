##
## EPITECH PROJECT, 2018
## makefile
## File description:
## compile
##

SRC	=	bsq.c	\
		utils/convert.c	\
		utils/find_biggest_square.c	\
		utils/get_number_row_col.c	\
		utils/load_2d_arr_from_file.c	\
		utils/mem_alloc.c	\
		utils/mem_alloc_2d_array.c	\
		utils/my_putchar.c	\
		utils/my_put_nbr.c	\
		utils/my_putstr.c	\
		utils/my_revstr.c	\
		utils/my_strlen.c	\
		utils/open_file.c

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) main.c $(OBJ)

clean:
	rm -rf $(OBJ)
fclean:		clean
	rm -rf $(NAME)

re:	fclean all
