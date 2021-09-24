/*
** EPITECH PROJECT, 2020
** maplvl2.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_maplvl2(v_var *a)
{
    sfSprite_setPosition(a->_map->s_caillou, a->_map->pos_caillou);
    sfSprite_setPosition(a->_map->s_heart, a->_map->pos_heart);
    sfSprite_setPosition(a->_map->s_pupet, a->_map->pos_pupet);
    sfSprite_setScale(a->_map->s_pupet, a->_lvl1->size);
}

void display_maplvl2(v_var *a)
{
    pos_obstaclelvl2(a);
    sfSprite_setTextureRect(a->_map->s_caillou,
    a->_map->rect_caillou);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_map->s_caillou, NULL);
    if (a->_lvl2->dis2 == 0) {
        sfSprite_setTextureRect(a->_map->s_heart,
        a->_map->rect_heart);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_map->s_heart, NULL);
    }
    if (a->_lvl2->dis == 0) {
        sfSprite_setTextureRect(a->_map->s_pupet,
        a->_map->rect_pupet);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_map->s_pupet, NULL);
    }
}

void my_score(v_var *a)
{
    a->sco += 1;
    if (a->sco == 10 && a->death == 0) {
        a->_menu->sco += 1;
        a->sco = 0;
        a->_menu->str = my_convert_int(a->_menu->sco);
    }
    sfText_setString(a->_menu->score, a->_menu->str);
    sfText_setFont(a->_menu->score, a->_menu->font);
    sfText_setCharacterSize(a->_menu->score, 100);
    sfText_setColor(a->_menu->score, sfBlack);
    sfText_setPosition(a->_menu->score, a->_menu->pose_score);
    sfRenderWindow_drawText(a->_window->window, a->_menu->score, NULL);
}