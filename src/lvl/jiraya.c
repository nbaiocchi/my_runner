/*
** EPITECH PROJECT, 2020
** itachi.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_jiraya(v_var *a)
{
    sfSprite_setPosition(a->_lvl2->s_jiraya, a->_lvl2->pos_jiraya);
    sfSprite_setScale(a->_lvl2->s_jiraya, a->_lvl1->size);
    sfSprite_setPosition(a->_lvl2->s_jjump, a->_lvl2->pos_jjump);
    sfSprite_setScale(a->_lvl2->s_jjump, a->_lvl1->size);
    sfSprite_setPosition(a->_lvl2->s_jpoing, a->_lvl2->pos_jpoing);
    sfSprite_setScale(a->_lvl2->s_jpoing, a->_lvl1->size);
    rect_jiraya(a);
    rect_jump_jiraya(a);
    rect_poing_jiraya(a);
}

void display_jiraya(v_var *a)
{
    if ((a->_map->pos_caillou.x > 520 && a->_map->pos_caillou.x < 650) ||
    (a->_map->pos_pupet.x > 500 && a->_map->pos_pupet.x < 600 &&
    a->_lvl2->dis == 0)) {
        a->death = 1;
        a->_lvl2->rect_jiraya.left = 0;
    }
    sfSprite_setTextureRect(a->_lvl2->s_jiraya,
    a->_lvl2->rect_jiraya);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl2->s_jiraya, NULL);
}

void display_jump_jiraya(v_var *a)
{
    if (a->_map->pos_pupet.x > 520 && a->_map->pos_pupet.x < 600) {
        a->death = 1;
        a->_lvl2->rect_jiraya.left = 0;
    }
    if (a->_map->pos_heart.x > 520 && a->_map->pos_heart.x < 600) {
        a->_lvl2->dis2 += 1;
        a->_menu->sco += 3;
    }
    sfSprite_setTextureRect(a->_lvl2->s_jjump,
    a->_lvl2->rect_jjump);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl2->s_jjump, NULL);
}

void display_poing_jiraya(v_var *a)
{
    if (a->_map->pos_pupet.x > 470 && a->_map->pos_pupet.x < 600) {
        a->_lvl2->dis += 1;
    }
    sfSprite_setTextureRect(a->_lvl2->s_jpoing,
    a->_lvl2->rect_jpoing);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl2->s_jpoing, NULL);
}