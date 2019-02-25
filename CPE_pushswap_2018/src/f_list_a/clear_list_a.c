/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

t_la *clear_list_a(t_la *la)
{
    if (la == NULL)
        return (NULL);

    while (la != NULL) {
        la = pop_front_a(la);
    }
}