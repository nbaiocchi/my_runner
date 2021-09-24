/*
** EPITECH PROJECT, 2020
** rect_champ_select.c
** File description:
** t
*/

#include "../../include/prototype.h"

void select_rect(v_var *a)
{
    a->_select->time = sfClock_getElapsedTime(a->_select->clock);
    a->_select->second = a->_select->time.microseconds / 1000000.0;
    if (a->_select->second > 0.12) {
        if (a->_select->rect_itachi.left != 3000) {
            a->_select->rect_itachi.left += 300;
        } else {
            a->_select->rect_itachi.left = 0;
        }
        sfClock_restart(a->_select->clock);
    }
}

void select_rect_naruto(v_var *a)
{
    a->_select->time = sfClock_getElapsedTime(a->_select->clock2);
    a->_select->second = a->_select->time.microseconds / 1000000.0;
    if (a->_select->second > 0.10) {
        if (a->_select->rect_naruto.left != 14400) {
            a->_select->rect_naruto.left += 400;
        } else {
            a->_select->rect_naruto.left = 0;
        }
        sfClock_restart(a->_select->clock2);
    }
}

void select_rect_jiraya(v_var *a)
{
    a->_select->time = sfClock_getElapsedTime(a->_select->clock3);
    a->_select->second = a->_select->time.microseconds / 1000000.0;
    if (a->_select->second > 0.15) {
        if (a->_select->rect_jiraya.left != 2600) {
            a->_select->rect_jiraya.left += 200;
        } else {
            a->_select->rect_jiraya.left = 0;
        }
        sfClock_restart(a->_select->clock3);
    }
}