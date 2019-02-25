/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

void pb(t_la **la, t_lb **lb)
{
    t_la *element_a;
    t_lb *element_b;
    t_lb *tmp_b;

    if (*la == NULL) {
        my_putstr("pb ");
        return;
    }

    element_a = malloc(sizeof(t_la));
    element_b = malloc(sizeof(t_lb));

    element_b = push_front_b(*lb, (*la)->value);
    *la = pop_front_a(*la);
    tmp_b = *lb;
    *lb = element_b;
    my_putstr("pb ");
}