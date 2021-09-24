/*
** EPITECH PROJECT, 2020
** clock.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_clock(v_var *a)
{
    a->_select->clock = sfClock_create();
    a->_select->clock2 = sfClock_create();
    a->_select->clock3 = sfClock_create();
    a->_paralax1->clock = sfClock_create();
    a->_paralax1->clock2 = sfClock_create();
    a->_paralax1->clock3 = sfClock_create();
    a->_lvl1->clock = sfClock_create();
    a->_lvl1->clock2 = sfClock_create();
    a->_lvl1->clockjn = sfClock_create();
    a->_lvl1->clockji = sfClock_create();
    a->_paralax1->clock_1 = sfClock_create();
    a->_paralax1->clock2_2 = sfClock_create();
    a->_paralax1->clock3_3 = sfClock_create();
    a->_lvl2->clock = sfClock_create();
    a->_lvl2->clock2 = sfClock_create();
    a->_lvl2->clockjk = sfClock_create();
    a->_lvl2->clockjj = sfClock_create();
    a->_menu->clockp = sfClock_create();
    a->_map->clock = sfClock_create();
    my_clock2(a);
}

void my_clock2(v_var *a)
{
    a->_map->clockb = sfClock_create();
    a->_end->clockd = sfClock_create();
    a->_end->clockd2 = sfClock_create();
    a->_end->clockb = sfClock_create();
    a->_end->clocke = sfClock_create();
    a->_end->clockp = sfClock_create();
    a->_end->clockh = sfClock_create();
    a->_map->clockc = sfClock_create();
    a->_map->clockp = sfClock_create();
    a->_map->clockh = sfClock_create();
    a->_lvl2->clockp = sfClock_create();
    a->_lvl2->clockp2 = sfClock_create();
}