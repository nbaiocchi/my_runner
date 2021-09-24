/*
** EPITECH PROJECT, 2020
** pos_end.c
** File description:
** t
*/

#include "../../include/prototype.h"

void pos_bombe(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_end->clockb);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.01) {
        if (a->_end->pos_bombe.y != 1200)
            a->_end->pos_bombe.y += 20;
        if (a->_end->pos_bombe.y > 1000)
            a->_end->bombe = 1;
        sfClock_restart(a->_end->clockb);
    }
}

void rect_explo(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_end->clocke);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.06) {
        if (a->_end->rect_explo.left != 7680)
            a->_end->rect_explo.left += 640;
        sfClock_restart(a->_end->clocke);
    }
}

void pos_daidara(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_end->clockd);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.01) {
        if (a->_end->pos_daidara.x < 900)
            a->_end->daid = 1;
        a->_end->pos_daidara.x -= 20;
        sfClock_restart(a->_end->clockd);
    }
}

void rect_daidara(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_end->clockd2);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.06) {
        if (a->_end->rect_daidara.left != 750)
            a->_end->rect_daidara.left += 150;
        sfClock_restart(a->_end->clockd2);
    }
}

void rect_hokage(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_end->clockh);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.13) {
        if (a->_end->rect_hokage.left != 600)
            a->_end->rect_hokage.left += 100;
        sfClock_restart(a->_end->clockh);
    }
}