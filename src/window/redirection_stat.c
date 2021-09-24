/*
** EPITECH PROJECT, 2020
** redirection_stat.c
** File description:
** t
*/

#include "../../include/prototype.h"

void menu(v_var *a)
{
    my_menu(a);
    my_parchemin(a);
    my_cursor(a);
    display(a);
}

void champ_select(v_var *a)
{
    my_champ_select(a);
    my_cursor(a);
    display(a);
}

void level_one(v_var *a)
{
    my_paralax1(a);
    my_naruto(a);
    my_itachi(a);
    my_cursor(a);
    my_obstacles(a);
    my_win(a);
    my_end(a);
    display(a);
}

void level_two(v_var *a)
{
    my_paralax2(a);
    my_kyubi(a);
    my_jiraya(a);
    my_maplvl2(a);
    my_cursor(a);
    my_end(a);
    display(a);
}
