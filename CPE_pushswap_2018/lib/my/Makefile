##
## EPITECH PROJECT, 2018
## makefile
## File description:
## 
##

SRC	=	my_put_nbr.c \
		my_putstr.c \
		my_putchar.c \
		my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)
	cp $(NAME) ../$(NAME)
	cp lib.h ../../include/lib.h
	rm -f       my_putchar.o \
                my_put_nbr.o \
                my_putstr.o \

clean:
	rm -f $(OBJ)
	rm -f *.o
	rm -f *~

fclean:	clean
	rm -f $(NAME)
	rm -f *.o

re:	fclean all
