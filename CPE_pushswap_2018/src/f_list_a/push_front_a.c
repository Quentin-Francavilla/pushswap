/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_la *push_front_a(t_la *la, int value)
{
    t_la *element;

    element = malloc(sizeof(t_la));

    if (element != NULL) {
        element->value = value;
        element->next = la;
    }

    return (element);
}