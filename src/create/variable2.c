/*
** EPITECH PROJECT, 2020
** variable2.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_variable6(v_var *a)
{
    a->_end->size.x = 0.5;
    a->_end->size.y = 0.5;
    a->_end->size2.x = 4;
    a->_end->size2.y = 4;
    a->_end->pos_hokage.x = 1400;
    a->_end->pos_hokage.y = 620;
    a->_map->pos_caillou.x = 2000;
    a->_map->pos_caillou.y = 900;
    a->_map->pos_pupet.x = 2500;
    a->_map->pos_pupet.y = 787;
    a->_map->pos_heart.x = 3000;
    a->_map->pos_heart.y = 650;
    a->_map->allea = 0;
    a->_lvl2->poing = sfFalse;
    a->_lvl2->pos_kpoing.x = 500;
    a->_lvl2->pos_kpoing.y = 787;
    a->_lvl2->pos_jpoing.x = 500;
    a->_lvl2->pos_jpoing.y = 830;
    my_variable7(a);
}

void my_variable7(v_var *a)
{
    a->_lvl2->dis = 0;
    a->_lvl2->dis2 = 0;
    a->_menu->sco = 0;
    a->sco = 0;
    a->_menu->pose_score.x = 100;
    a->_menu->pose_score.y = 70;
    a->pause = 0;
}