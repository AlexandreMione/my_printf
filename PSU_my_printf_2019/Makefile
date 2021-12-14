##
## EPITECH PROJECT, 2018
## Print_f
## File description:
## makefile
##

SRC =	my_printf.c \
        my_putchar.c    \
	my_put_binary.c	\
	my_put_hexa.c	\
	my_put_octal.c	\
        my_put_nbr.c    \
        my_put_float.c  \
        my_putstr.c \
        my_put_unsigned.c   \
        my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)	
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
