/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef PS_H
#define PS_H

#include "../lib/my/lib.h"

typedef struct s_la
{
    int value;
    struct s_la *next;
    struct s_la *tmp_a;
} t_la;

typedef struct s_lb
{
    int value;
    struct s_lb *next;
} t_lb;

typedef struct s_arg
{
    int arg;
    int arg_next;
    int arg_sorted;
    int arg_sorted_next;
    int is_sorted;
} t_arg;

typedef struct s_glo
{
    int i;
    int len;
    int size_list_a;
    int size_list_b;
    int min_nb;
    int count_min;
    int z;
    int last;
    int y;
    int check_min;
    int rra_count;
    int error_check;
    t_arg      *_arg;
} t_glo;

t_la    *push_front_a(t_la *la, int value);
t_la    *push_back_a(t_la *la, int value);
t_la    *pop_back_a(t_la *la);
t_la    *pop_front_a(t_la *la);
t_la    *clear_list_a(t_la *la);
void    print_list_a(t_la *la);

t_lb    *push_front_b(t_lb *lb, int value);
t_lb    *push_back_b(t_lb *lb, int value);
t_lb    *pop_back_b(t_lb *lb);
t_lb    *pop_front_b(t_lb *lb);
t_lb    *clear_list_b(t_lb *lb);
void    print_list_b(t_lb *lb);

//?actions
void pb(t_la **la, t_lb **lb);
void pa(t_la **la, t_lb **lb);
void rra(t_la **la);
void last_pa(t_la **la, t_lb **lb);

int     list_len_a(t_la *la);
int     list_len_b(t_lb *lb);

//?fonctions globales
void variable(t_glo *a);
int found_error(int ac, char **av, t_glo *a);

//?fonction liste globales
void push_in_list(int ac, char **av, t_glo *a, t_la **la);
void get_last(t_glo *a, t_la **la);
void found_min(t_glo *a, t_la **la);
void where_is_min(t_glo *a, t_la **la);
void actions_and_reset(t_glo *a, t_la **la, t_lb **lb);
void pa_and_last_pa(t_glo *a, t_la **la, t_lb **lb);

#endif