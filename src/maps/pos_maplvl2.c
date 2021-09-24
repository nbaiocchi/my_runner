/*
** EPITECH PROJECT, 2020
** pos_maplvl2.c
** File description:
** t
*/

#include "../../include/prototype.h"

void pos_obstaclelvl2(v_var *a)
{
    if (a->death == 0) {
        a->_lvl2->time = sfClock_getElapsedTime(a->_map->clockc);
        a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
        if (a->_select->second > 0.01) {
            if (a->_map->pos_caillou.x > -150) {
                a->_map->pos_caillou.x -= 20;
            } else {
                a->_map->pos_caillou.x = (rand() % (3500 - 1920 + 1)) + 2000;
            }
            sfClock_restart(a->_map->clockc);
        }
        pos_pupet(a);
    }
}

void pos_pupet(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_map->clockp);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.01) {
        if (a->_map->pos_pupet.x > -230) {
            a->_map->pos_pupet.x -= 20;
        } else {
            a->_lvl2->dis = 0;
            a->_map->pos_pupet.x = (rand() % (3500 - 1920 + 1) + 2000);
            while (a->_map->pos_pupet.x < a->_map->pos_caillou.x + 300 &&
            a->_map->pos_pupet.x > a->_map->pos_caillou.x - 300)
                a->_map->pos_pupet.x = (rand() % (3500 - 1920 + 1) + 2000);
        }
        sfClock_restart(a->_map->clockp);
    }
    pos_heart(a);
}

void pos_heart(v_var *a)
{
    a->_lvl2->time = sfClock_getElapsedTime(a->_map->clockh);
    a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
    if (a->_select->second > 0.01) {
        if (a->_map->pos_heart.x > -150) {
            a->_map->pos_heart.x -= 20;
        } else {
            a->_lvl2->dis2 = 0;
            a->_map->pos_heart.x = (a->_map->allea =
            (rand() % (3500 - 2000 + 1)) + 2000);
        }
        sfClock_restart(a->_map->clockh);
    }
}