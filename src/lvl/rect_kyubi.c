/*
** EPITECH PROJECT, 2020
** rect_kyubi.c
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_kyubi(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_lvl2->clock);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.06) {
        if (a->_lvl2->rect_kyubi.left != 500) {
            a->_lvl2->rect_kyubi.left += 100;
        } else {
            a->_lvl2->rect_kyubi.left = 0;
        }
        sfClock_restart(a->_lvl2->clock);
    }
}

void rect_jump_kyubi(v_var *a)
{
    if (a->_lvl2->jump == sfTrue)
        a->_lvl2->rect_kjump.left = 0;
    a->_lvl2->time = sfClock_getElapsedTime(a->_lvl2->clockjk);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.10) {
        if (a->_lvl2->rect_kjump.left != 700) {
            a->_lvl2->rect_kjump.left += 100;
        } else {
            a->_lvl2->rect_kjump.left = 0;
            a->_lvl2->jump = sfTrue;
        }
        sfClock_restart(a->_lvl2->clockjk);
    }
}

void rect_poing_kyubi(v_var *a)
{
    if (a->_lvl2->poing == sfFalse)
        a->_lvl2->rect_kpoing.left = 0;
    a->_lvl2->time = sfClock_getElapsedTime(a->_lvl2->clockp);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.10) {
        if (a->_lvl2->rect_kpoing.left != 200) {
            a->_lvl2->rect_kpoing.left += 100;
        } else {
            a->_lvl2->rect_kpoing.left = 0;
            a->_lvl2->poing = sfFalse;
        }
        sfClock_restart(a->_lvl2->clockp);
    }
}