##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for dante
##

all:
	make -C solver
	make -C generator

clean:
	make clean -C solver
	make clean -C generator

fclean:		clean
	make fclean -C solver
	make fclean -C generator

re:		fclean
	make re -C solver
	make re -C generator

solver:
	make -C solver

generator:
	make -C generator

tests_run:
	make tests_run -C solver

.PHONY:
	clean fclean all re solver generator tests_run
