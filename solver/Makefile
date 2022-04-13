##
## EPITECH PROJECT, 2022
## solver Makefile
## File description:
## Makefile for dante solver
##

MAIN	=	src/main.c			 	\

SRC     = 	src/solver.c 			\
			src/open_maze.c 		\
			src/find_exit.c 		\
			src/display.c 			\

TEST	=	tests/redirect_out.c 	\
			tests/test_solver.c 	\
			tests/test_display.c 	\

OBJ     =	$(SRC:.c=.o)				\
			$(MAIN:.c=.o)

NAME    =	solver

CPPFLAGS +=		-Iinclude

CFLAGS	+=		-g -Wall -Wextra

all: $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean :
	-rm -f $(OBJ)

fclean:     clean
	-rm -f $(NAME)
	-rm -rf unit*

re:     fclean all

tests_run:  re
	gcc -o unit_tests $(SRC) $(TEST) -Iinclude -lcriterion --coverage
	./unit_tests

.PHONY:
	make re clean fclean all tests_run
