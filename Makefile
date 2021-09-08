##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

all:
	cd generator && make
	cd solver && make

clean:
	cd generator && make clean
	cd solver && make clean

fclean:
	cd generator && make fclean
	cd solver && make fclean

re:	all
	rm lib/my/*.o
	rm solver/*.o
	rm generator/*.o
