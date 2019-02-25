/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"


void pa(t_la **la, t_lb **lb)
{
    t_la *element_a;
    t_lb *element_b;
    t_la *tmp_a;

    if (*lb == NULL) {
        my_putstr("pa ");
        return;
    }

    element_a = malloc(sizeof(t_la));
    element_b = malloc(sizeof(t_lb));

    element_a = push_front_a(*la, (*lb)->value);
    *lb = pop_front_b(*lb);
    tmp_a = *la;
    *la = element_a;
    my_putstr("pa ");
}

void last_pa(t_la **la, t_lb **lb)
{
    t_la *element_a;
    t_lb *element_b;
    t_la *tmp_a;

    if (*lb == NULL) {
        my_putstr("pa");
        return;
    }

    element_a = malloc(sizeof(t_la));
    element_b = malloc(sizeof(t_lb));

    element_a = push_front_a(*la, (*lb)->value);
    *lb = pop_front_b(*lb);
    tmp_a = *la;
    *la = element_a;
    my_putstr("pa");
}