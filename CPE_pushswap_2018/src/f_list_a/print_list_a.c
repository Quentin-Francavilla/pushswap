/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

void print_list_a(t_la *la)
{
    if (la == NULL) {
        my_putstr("La liste est vide.\n");
        return;
    }
    while (la != NULL) {
        my_put_nbr(la->value);
        la = la->next;
        my_putchar(' ');
    }
    my_putchar('\n');
}