/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_lb *push_front_b(t_lb *lb, int value)
{
    t_lb *element;

    element = malloc(sizeof(t_lb));

    if (element != NULL) {
        element->value = value;
        element->next = lb;
    }

    return (element);
}