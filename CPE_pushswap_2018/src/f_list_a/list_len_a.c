/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

int list_len_a(t_la *la)
{
    int size = 0;

    if (la == NULL)
        return (84);
    while (la != NULL) {
        size += 1;
        la = la->next;
    }
    return (size);
}