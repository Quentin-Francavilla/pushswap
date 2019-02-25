/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_lb *clear_list_b(t_lb *lb)
{
    if (lb == NULL)
        return (NULL);

    while (lb != NULL) {
        lb = pop_front_b(lb);
    }
}