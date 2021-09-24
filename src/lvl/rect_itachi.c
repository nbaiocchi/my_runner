/*
** EPITECH PROJECT, 2020
** rect_itachi.c
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_itachi(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_lvl1->time = sfClock_getElapsedTime(a->_lvl1->clock2);
        a->_select->second = a->_lvl1->time.microseconds / 1000000.0;
        if (a->_select->second > 0.06) {
            if (a->_lvl1->rect_itachi.left != 250) {
                a->_lvl1->rect_itachi.left += 50;
            } else {
                a->_lvl1->rect_itachi.left = 0;
            }
            sfClock_restart(a->_lvl1->clock2);
        }
    }
}

void rect_jump_itachi(v_var *a)
{
    if (a->_lvl1->jump == sfTrue)
        a->_lvl1->rect_ijump.left = 0;
    a->_lvl1->time = sfClock_getElapsedTime(a->_lvl1->clockji);
    a->_select->second = a->_lvl1->time.microseconds / 1000000.0;
    if (a->_select->second > 0.10) {
        if (a->_lvl1->rect_ijump.left != 350) {
            a->_lvl1->rect_ijump.left += 50;
        } else {
            a->_lvl1->rect_ijump.left = 0;
            a->_lvl1->jump = sfTrue;
        }
        sfClock_restart(a->_lvl1->clockji);
    }
}