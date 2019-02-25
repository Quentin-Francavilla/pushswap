/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_lb *pop_back_b(t_lb *lb)
{
    t_lb *tmp = lb;
    t_lb *before = lb;

    if (lb == NULL)
        return (NULL);

    if (lb->next == NULL) {
        free(lb);
        return (NULL);
    }

    while (tmp->next != NULL) {
        before = tmp;
        tmp = tmp->next;
    }

    before->next = NULL;
    free(tmp);

    return (lb);
}