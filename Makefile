##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 103 cipher
##

SRC	=	src/main.c\
		src/manage_h_flag.c\
		src/transcript_key.c\
		src/multiple_matrix.c\
		src/errors.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS =	-I ./include

NAME	=	103cipher

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) -L ./lib/my -lmy -lm -I ./include

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f lib/my/*~
		rm -f lib/my/*.o
		rm -f include/*~
		rm -f src/*~
		rm -f *~
		rm -f lib/my/libmy.a
		rm -f src/*~
		rm -f src/*.o
		rm -f *~
		rm -f *.o
		rm -f tests/*.gcno
		rm -f tests/unit_tests

re:		fclean all

.PHONY:		all clean fclean re
