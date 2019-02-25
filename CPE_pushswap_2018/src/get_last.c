/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/push_swap.h"
#include "../include/lib.h"

void get_last(t_glo *a, t_la **la)
{
    (*la)->tmp_a = *la;
    while ((*la)->tmp_a != NULL) {
        if ((*la)->tmp_a != NULL) {
            a->last = (*la)->tmp_a->value;
            (*la)->tmp_a = (*la)->tmp_a->next;
        }
        a->len += 1;
    }
    (*la)->tmp_a = *la;
}