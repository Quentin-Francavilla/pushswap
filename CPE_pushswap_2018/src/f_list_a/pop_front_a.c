/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_la *pop_front_a(t_la *la)
{
    t_la *element;

    element = malloc(sizeof(t_la));

    if (la == NULL)
        return (la);

    if (element != NULL) {
        element = la->next;
        free(la);
    }
    return (element);
}