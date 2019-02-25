/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_lb *pop_front_b(t_lb *lb)
{
    t_lb *element;

    element = malloc(sizeof(t_lb));

    if (lb == NULL)
        return (lb);

    if (element != NULL) {
        element = lb->next;
        free(lb);
    }
    return (element);
}