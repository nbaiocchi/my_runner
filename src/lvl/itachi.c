/*
** EPITECH PROJECT, 2020
** itachi.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_itachi(v_var *a)
{
    sfSprite_setPosition(a->_lvl1->s_itachi, a->_lvl1->pos_itachi);
    sfSprite_setScale(a->_lvl1->s_itachi, a->_lvl1->size);
    sfSprite_setPosition(a->_lvl1->s_ijump, a->_lvl1->pos_ijump);
    sfSprite_setScale(a->_lvl1->s_ijump, a->_lvl1->size);
    rect_itachi(a);
    rect_jump_itachi(a);
}

void display_itachi(v_var *a)
{
    sfSprite_setTextureRect(a->_lvl1->s_itachi,
    a->_lvl1->rect_itachi);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl1->s_itachi, NULL);
    while (a->_map->y != a->_map->i) {
        if (a->_lvl1->pos_nauto.x + 25 > a->_map->pos_bamboo[a->_map->y].x &&
        a->_lvl1->pos_nauto.x + 25 < a->_map->pos_bamboo[a->_map->y].x + 37)
            a->death = 1;
        a->_map->y += 1;
    }
    a->_map->y = 0;
    while (a->_map->y != a->_map->z) {
        if (a->_lvl1->pos_nauto.x + 25 > a->_map->pos_boid[a->_map->y].x &&
        a->_lvl1->pos_nauto.x + 25 < a->_map->pos_boid[a->_map->y].x + 16)
            a->death = 1;
        a->_map->y += 1;
    }
    a->_map->y = 0;
}

void display_jump_itachi(v_var *a)
{
    sfSprite_setTextureRect(a->_lvl1->s_ijump,
    a->_lvl1->rect_ijump);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl1->s_ijump, NULL);
}