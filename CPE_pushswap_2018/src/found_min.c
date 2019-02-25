/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/push_swap.h"
#include "../include/lib.h"

void found_min(t_glo *a, t_la **la)
{
    while ((*la)->tmp_a != NULL) {
        a->_arg->arg = (*la)->tmp_a->value;
        (*la)->tmp_a = (*la)->tmp_a->next;
        if ((*la)->tmp_a != NULL)
            a->_arg->arg_next = (*la)->tmp_a->value;
        if (a->_arg->arg < a->_arg->arg_next && a->z == 0) {
            a->min_nb = a->_arg->arg;
            a->z = 1;
        }
        else if (a->_arg->arg > a->_arg->arg_next && a->z == 0) {
            a->min_nb = a->_arg->arg_next;
        }
        if (a->_arg->arg < a->_arg->arg_next && a->z == 1 &&
        a->_arg->arg < a->min_nb) {
            a->min_nb = a->_arg->arg;
        }
        if (a->last < a->min_nb)
            a->min_nb = a->last;
    }
    a->size_list_a = list_len_a(*la);
}