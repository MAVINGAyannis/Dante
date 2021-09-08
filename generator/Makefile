##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./generator.c	\
		./generator.h	\
		./random_placer.c	\
		./my_txt_to_map.c	\
		./../lib/my/my_printf.c	\
		./../lib/my/my_putchar.c	\
		./../lib/my/my_put_nbr.c	\
		./../lib/my/my_putstr.c	\
		./../lib/my/my_getnbr.c		\
		./../lib/my/my_str_isnum.c	\
		./../lib/my/my_strstr.c	\
		./../lib/my/my_strcmp.c	\
		./../lib/my.h	\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -g3 -o $(NAME)

clean:
	rm *.o
	rm ../lib/my/*.o

fclean: clean
	rm $(NAME)

re:	all
	rm *.o
	rm ../lib/my/*.o
