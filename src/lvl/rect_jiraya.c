/*
** EPITECH PROJECT, 2020
** rect_itachi.c
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_jiraya(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_lvl2->clock2);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.06) {
        if (a->_lvl2->rect_jiraya.left != 250) {
            a->_lvl2->rect_jiraya.left += 50;
        } else {
            a->_lvl2->rect_jiraya.left = 0;
        }
        sfClock_restart(a->_lvl2->clock2);
    }
}

void rect_jump_jiraya(v_var *a)
{
    if (a->_lvl2->jump == sfTrue)
        a->_lvl2->rect_jjump.left = 0;
    a->_lvl2->time = sfClock_getElapsedTime(a->_lvl2->clockjj);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.10) {
        if (a->_lvl2->rect_jjump.left != 350) {
            a->_lvl2->rect_jjump.left += 50;
        } else {
            a->_lvl2->rect_jjump.left = 0;
            a->_lvl2->jump = sfTrue;
        }
        sfClock_restart(a->_lvl2->clockjj);
    }
}

void rect_poing_jiraya(v_var *a)
{
    if (a->_lvl2->poing == sfFalse)
        a->_lvl2->rect_jpoing.left = 0;
    a->_lvl2->time = sfClock_getElapsedTime(a->_lvl2->clockp2);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.10) {
        if (a->_lvl2->rect_jpoing.left != 225) {
            a->_lvl2->rect_jpoing.left += 75;
        } else {
            a->_lvl2->rect_jpoing.left = 0;
            a->_lvl2->poing = sfFalse;
        }
        sfClock_restart(a->_lvl2->clockp2);
    }
}