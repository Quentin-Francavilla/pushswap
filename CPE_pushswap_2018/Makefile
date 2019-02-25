##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## M
##

SRC	=	./src/main.c \
		./src/f_list_a/clear_list_a.c \
		./src/f_list_a/list_len_a.c \
		./src/f_list_a/pop_back_a.c \
		./src/f_list_a/pop_front_a.c \
		./src/f_list_a/print_list_a.c \
		./src/f_list_a/push_back_a.c \
		./src/f_list_a/push_front_a.c \
		./src/f_list_b/clear_list_b.c \
		./src/f_list_b/pop_back_b.c \
		./src/f_list_b/pop_front_b.c \
		./src/f_list_b/list_len_b.c \
		./src/f_list_b/print_list_b.c \
		./src/f_list_b/push_back_b.c \
		./src/f_list_b/push_front_b.c \
		./src/act/act_rra.c \
		./src/act/act_pa.c \
		./src/act/act_pb.c \
		./src/act/act_rrb.c \
		./src/var.c \
		./src/found_error.c \
		./src/push_in_list.c \
		./src/get_last.c \
		./src/found_min.c \
		./src/where_is_min.c \
		./src/act/actions_and_reset.c \
		./src/act/pa_and_last_pa.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

FLAG	=	-W -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	gcc $(SRC) -o $(NAME) -L./lib/my -lmy
	rm -f $(OBJ)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

#.PHONY
