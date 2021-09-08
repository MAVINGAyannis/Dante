##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./solver.h	\
		./solver.c	\
		./movement.c	\
		./blocked.c	\
		./size_reader.c	\
		./game.c	\
		./main.c	\
		./my_txt_to_map.c	\
		./../lib/my.h	\
		./../lib/my/my_printf.c	\
		./../lib/my/my_putchar.c	\
		./../lib/my/my_put_nbr.c	\
		./../lib/my/my_putstr.c	\
		./../lib/my/my_getnbr.c		\
		./../lib/my/my_str_isnum.c	\
		./../lib/my/my_strstr.c	\
		./../lib/my/my_strcmp.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -o $(NAME)

clean:
	rm *.o
	rm ../lib/my/*.o

fclean: clean
	rm $(NAME)

re:	all
	rm *.o
	rm ../lib/my/*.o
