/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

void rrb(t_lb **lb)
{
    t_lb *element = *lb;
    t_lb *tmp = *lb;

    if (*lb == NULL) {
        my_putstr("rrb ");
        return;
    }

    element = malloc(sizeof(t_lb));
    while (tmp != NULL) {
        element->value = tmp->value;
        tmp = tmp->next;
    }
    *lb = pop_back_b(*lb);
    element->next = *lb;
    *lb = element;
    my_putstr("rrb ");
}