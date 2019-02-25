/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/push_swap.h"
#include "../include/lib.h"

void push_in_list(int ac, char **av, t_glo *a, t_la **la)
{
    a->i = 1;
    while (a->i < ac) {
        a->_arg->arg = my_getnbr(av[a->i]);
        if (av[a->i + 1] != NULL) {
            a->_arg->arg_next = my_getnbr(av[a->i + 1]);
        }
        *la = push_back_a(*la, a->_arg->arg);
        a->i += 1;
    }
}