/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_la *pop_back_a(t_la *la)
{
    t_la *tmp = la;
    t_la *before = la;

    if (la== NULL)
        return (NULL);

    if (la->next == NULL) {
        free(la);
        return (NULL);
    }

    while (tmp->next != NULL) {
        before = tmp;
        tmp = tmp->next;
    }

    before->next = NULL;
    free(tmp);

    return (la);
}