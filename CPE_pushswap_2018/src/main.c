/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** sokoban
*/

#include "../include/push_swap.h"
#include "../include/lib.h"

void malloc_struct(t_glo *a)
{
    a->_arg= malloc(sizeof(t_arg));
}

int main(int ac, char **av)
{
        t_la *la;
    t_lb *lb;
    t_glo *a = malloc(sizeof(t_glo));
    malloc_struct(a);
    variable(a);
    lb = NULL;
    la = NULL;
    a->error_check = found_error(ac, av, a);

    if (a->error_check != 1)
        return (a->error_check);
    push_in_list(ac, av, a, &la);
    while (a->y < ac) {
        my_putchar('\n');
        print_list_a(la);
        my_putchar('\n');
        print_list_b(lb);
        my_putchar('\n');
        get_last(a, &la);
        found_min(a, &la);
        where_is_min(a, &la);
        actions_and_reset(a, &la, &lb);
    }
    pa_and_last_pa(a, &la, &lb);
    return (0);
}
