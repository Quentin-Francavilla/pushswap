/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../../include/push_swap.h"
#include "../../include/lib.h"

int list_len_b(t_lb *lb)
{
    int size = 0;

    if (lb == NULL)
        return (84);
    while (lb != NULL) {
        size += 1;
        lb = lb->next;
    }
    return (size);
}