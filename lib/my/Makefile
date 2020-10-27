##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## pierre1.delavigne@epitech.eu
##

SRC = my_getnbr.c	\
	my_putchar.c	\
	my_put_nbr.c	\
	my_putstr.c	\
	my_strlen.c	\


OBJ = $(SRC:.c=.o)

NAME =  libmy.a

all: $(NAME)

$(NAME): 	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	cp my.h ../../include

clean: rm -f $(OBJ)

fclean: clean
	rm-f $(NAME)
