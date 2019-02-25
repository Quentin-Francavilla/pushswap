/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

void pa_and_last_pa(t_glo *a, t_la **la, t_lb **lb)
{
    a->i = 0;
    a->size_list_b = list_len_b(*lb);
    while (a->i < a->size_list_b) {
        if (a->i == a->size_list_b - 1)
            last_pa(la, lb);
        else
            pa(la, lb);
        a->i +=1;
    }
    my_putchar('\n');
}