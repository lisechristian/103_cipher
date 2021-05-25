##
## EPITECH PROJECT, 2020
## 
## File description:
## 
##

SRC	=	my_strlen.c\
		my_getnbr.c\
		my_strcpy.c\
		my_putchar.c\
		my_put_nbr.c\
		my_putstr.c\
		my_revstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:	
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
