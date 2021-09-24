/*
** EPITECH PROJECT, 2020
** rect_naruto.c
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_naruto(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_lvl1->time = sfClock_getElapsedTime(a->_lvl1->clock);
        a->_select->second = a->_lvl1->time.microseconds / 1000000.0;
        if (a->_select->second > 0.06) {
            if (a->_lvl1->rect_nauto.left != 200) {
                a->_lvl1->rect_nauto.left += 50;
            } else {
                a->_lvl1->rect_nauto.left = 0;
            }
            sfClock_restart(a->_lvl1->clock);
        }
    }
}

void rect_jump_naruto(v_var *a)
{
    if (a->_lvl1->jump == sfTrue)
        a->_lvl1->rect_njump.left = 0;
    a->_lvl1->time = sfClock_getElapsedTime(a->_lvl1->clockjn);
    a->_select->second = a->_lvl1->time.microseconds / 1000000.0;
    if (a->_select->second > 0.10) {
        if (a->_lvl1->rect_njump.left != 350) {
            a->_lvl1->rect_njump.left += 50;
        } else {
            a->_lvl1->rect_njump.left = 0;
            a->_lvl1->jump = sfTrue;
        }
        sfClock_restart(a->_lvl1->clockjn);
    }
}