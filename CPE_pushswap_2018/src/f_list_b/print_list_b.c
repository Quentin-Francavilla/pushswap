/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

void print_list_b(t_lb *lb)
{
    if (lb == NULL) {
        my_putstr("La liste est vide.\n");
        return;
    }
    while (lb != NULL) {
        my_put_nbr(lb->value);
        lb = lb->next;
        my_putchar(' ');
    }
    my_putchar('\n');
}