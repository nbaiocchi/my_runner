/*
** EPITECH PROJECT, 2020
** naruto.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_naruto(v_var *a)
{
    sfSprite_setPosition(a->_lvl1->s_nauto, a->_lvl1->pos_nauto);
    sfSprite_setScale(a->_lvl1->s_nauto, a->_lvl1->size);
    sfSprite_setPosition(a->_lvl1->s_njump, a->_lvl1->pos_njump);
    sfSprite_setScale(a->_lvl1->s_njump, a->_lvl1->size);
    rect_naruto(a);
    rect_jump_naruto(a);
}

void display_naruto(v_var *a)
{
    sfSprite_setTextureRect(a->_lvl1->s_nauto,
    a->_lvl1->rect_nauto);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl1->s_nauto, NULL);
    check_colision(a);
}

void check_colision(v_var *a)
{
    while (a->_map->y != a->_map->i) {
        if (a->_lvl1->pos_nauto.x + 25 > a->_map->pos_bamboo[a->_map->y].x &&
        a->_lvl1->pos_nauto.x + 25 < a->_map->pos_bamboo[a->_map->y].x + 37) {
            a->death = 1;
            a->_lvl1->rect_nauto.left = 250;
        }
        a->_map->y += 1;
    }
    a->_map->y = 0;
    while (a->_map->y != a->_map->z) {
        if (a->_lvl1->pos_nauto.x + 25 > a->_map->pos_boid[a->_map->y].x &&
        a->_lvl1->pos_nauto.x + 25 < a->_map->pos_boid[a->_map->y].x + 16) {
            a->death = 1;
            a->_lvl1->rect_nauto.left = 250;
        }
        a->_map->y += 1;
    }
    a->_map->y = 0;
}

void display_jump_naruto(v_var *a)
{
    sfSprite_setTextureRect(a->_lvl1->s_njump,
    a->_lvl1->rect_njump);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_lvl1->s_njump, NULL);
}