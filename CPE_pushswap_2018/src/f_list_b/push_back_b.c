/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_lb *push_back_b(t_lb *lb, int value)
{
    t_lb *element;
    t_lb *tmp;

    element = malloc(sizeof(t_lb));

    if (element == NULL) {
        return (element);
    }
    element->value = value;
    element->next = NULL;

    if (lb == NULL)
        return (element);
    tmp = lb;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = element;
    return (lb);
}