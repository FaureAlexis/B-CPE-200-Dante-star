##
## EPITECH PROJECT, 2022
## generator Makefile
## File description:
## Makefile for dante generator
##

MAIN	=	src/main.c			 	\

SRC     = 	src/generator.c 		\
			src/unperfect.c

TEST	=	    \

OBJ     =	$(SRC:.c=.o)				\
			$(MAIN:.c=.o)

NAME    =	generator

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
