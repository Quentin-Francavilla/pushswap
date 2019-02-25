/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/push_swap.h"
#include "../include/lib.h"

void where_is_min(t_glo *a, t_la **la)
{
    (*la)->tmp_a = *la;
    while ((*la)->tmp_a != NULL) {
        if ((*la)->tmp_a->value != a->min_nb && a->check_min == 0) {
            a->count_min += 1;
        }
        else
            a->check_min = 1;
        (*la)->tmp_a = (*la)->tmp_a->next;
    }
}