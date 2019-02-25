/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_la *push_back_a(t_la *la, int value)
{
    t_la *element;
    t_la *tmp;

    element = malloc(sizeof(t_la));

    if (element == NULL) {
        return (element);
    }
    element->value = value;
    element->next = NULL;

    if (la == NULL)
        return (element);
    tmp = la;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = element;
    return (la);
}