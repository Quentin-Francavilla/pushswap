/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/push_swap.h"
#include "../include/lib.h"

int found_error(int ac, char **av, t_glo *a)
{
    if (ac == 1)
        return (84);
    if (ac == 2) {
        my_putchar('\n');
        return (0);
    }
    while (a->i < ac) {
        a->_arg->arg_sorted = my_getnbr(av[a->i]);
        if (av[a->i + 1] != NULL) {
            a->_arg->arg_sorted_next = my_getnbr(av[a->i + 1]);
        }
        if (a->_arg->arg_sorted <= a->_arg->arg_sorted_next)
            a->_arg->is_sorted += 1;
        a->i += 1;
    }
    if (a->_arg->is_sorted == ac - 1) {
        my_putchar('\n');
        return (0);
    }
    return (1);
}