/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

void actions_and_reset(t_glo *a, t_la **la, t_lb **lb)
{
    while (a->rra_count < a->size_list_a - a->count_min) {
        rra(la);
        a->rra_count += 1;
    }
    pb(la, lb);
    a->rra_count = 0;
    a->count_min = 0;
    a->check_min = 0;
    a->z = 0;
    a->y += 1;
}