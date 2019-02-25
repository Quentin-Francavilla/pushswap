/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

void rra(t_la **la)
{
    t_la *element = *la;
    t_la *tmp = *la;

    if (*la == NULL) {
        my_putstr("rra ");
        return;
    }

    element = malloc(sizeof(t_la));
    while (tmp != NULL) {
        element->value = tmp->value;
        tmp = tmp->next;
    }
    *la = pop_back_a(*la);
    element->next = *la;
    *la = element;
    my_putstr("rra ");
}