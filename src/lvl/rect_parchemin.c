/*
** EPITECH PROJECT, 2020
** rect_parchemin.c
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_parchemin(v_var *a)
{
    a->_lvl1->time = sfClock_getElapsedTime(a->_menu->clockp);
    a->_select->second = a->_lvl1->time.microseconds / 1000000.0;
    if (a->_select->second > 0.20) {
        if (a->_menu->rect_parchemin.left != 3612) {
            a->_menu->rect_parchemin.left += 602;
        }
        sfClock_restart(a->_menu->clockp);
    }
}