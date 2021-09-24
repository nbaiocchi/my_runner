/*
** EPITECH PROJECT, 2020
** kyubi.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_kyubi(v_var *a)
{
    sfSprite_setPosition(a->_lvl2->s_kyubi, a->_lvl2->pos_kyubi);
    sfSprite_setScale(a->_lvl2->s_kyubi, a->_lvl1->size);
    sfSprite_setPosition(a->_lvl2->s_kjump, a->_lvl2->pos_kjump);
    sfSprite_setScale(a->_lvl2->s_kjump, a->_lvl1->size);
    sfSprite_setPosition(a->_lvl2->s_kpoing, a->_lvl2->pos_kpoing);
    sfSprite_setScale(a->_lvl2->s_kpoing, a->_lvl1->size);
    rect_kyubi(a);
    rect_jump_kyubi(a);
    rect_poing_kyubi(a);
}

void display_kyubi(v_var *a)
{
    if ((a->_map->pos_caillou.x > 750 && a->_map->pos_caillou.x < 800) ||
    (a->_map->pos_pupet.x > 650 && a->_map->pos_pupet.x < 750 &&
    a->_lvl2->dis == 0)) {
        a->death = 1;
        a->_lvl2->rect_kyubi.left = 0;
    }
    sfSprite_setTextureRect(a->_lvl2->s_kyubi,
    a->_lvl2->rect_kyubi);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl2->s_kyubi, NULL);
}

void display_jump_kyubi(v_var *a)
{
    if (a->_map->pos_pupet.x > 730 && a->_map->pos_pupet.x < 780) {
        a->death = 1;
        a->_lvl2->rect_kyubi.left = 0;
    }
    if (a->_map->pos_heart.x > 730 && a->_map->pos_heart.x < 780) {
        a->_lvl2->dis2 += 1;
        a->_menu->sco += 3;
    }
    sfSprite_setTextureRect(a->_lvl2->s_kjump,
    a->_lvl2->rect_kjump);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl2->s_kjump, NULL);
}

void display_poing_kyubi(v_var *a)
{
    if (a->_map->pos_pupet.x > 750 && a->_map->pos_pupet.x < 900)
        a->_lvl2->dis += 1;
    sfSprite_setTextureRect(a->_lvl2->s_kpoing,
    a->_lvl2->rect_kpoing);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl2->s_kpoing, NULL);
}