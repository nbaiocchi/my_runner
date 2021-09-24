/*
** EPITECH PROJECT, 2020
** obstacles.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_obstacles(v_var *a)
{
    while (a->_map->y != a->_map->i) {
        sfSprite_setPosition(a->_map->s_bamboo[a->_map->y],
        a->_map->pos_bamboo[a->_map->y]);
        sfSprite_setScale(a->_map->s_bamboo[a->_map->y], a->_map->size);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    while (a->_map->y != a->_map->z) {
        sfSprite_setPosition(a->_map->s_boid[a->_map->y],
        a->_map->pos_boid[a->_map->y]);
        sfSprite_setScale(a->_map->s_boid[a->_map->y], a->_map->size);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    sfSprite_setPosition(a->_end->s_par,
    a->_end->pos_par);
    sfSprite_setScale(a->_end->s_par, a->_end->size);
    my_pos_obstacle(a);
}

void display_obstacles(v_var *a)
{
    while (a->_map->y != a->_map->i) {
        sfSprite_setTextureRect(a->_map->s_bamboo[a->_map->y],
        a->_map->rect_bamboo);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_map->s_bamboo[a->_map->y], NULL);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    while (a->_map->y != a->_map->z) {
        sfSprite_setTextureRect(a->_map->s_boid[a->_map->y],
        a->_map->rect_boid);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_map->s_boid[a->_map->y], NULL);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    sfSprite_setTextureRect(a->_end->s_par,
    a->_end->rect_par);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_end->s_par, NULL);
}

void my_pos_obstacle(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_lvl2->time = sfClock_getElapsedTime(a->_map->clock);
        a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
        if (a->_select->second > 0.01) {
            while (a->_map->y != a->_map->i) {
                a->_map->pos_bamboo[a->_map->y].x -= 20;
                a->_map->y += 1;
            }
            sfClock_restart(a->_map->clock);
            a->_map->y = 0;
        }
    }
    my_pos_obstacle2(a);
}

void my_pos_obstacle2(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_lvl2->time = sfClock_getElapsedTime(a->_map->clockb);
        a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
        if (a->_select->second > 0.01) {
            while (a->_map->y != a->_map->z) {
                a->_map->pos_boid[a->_map->y].x -= 20;
                a->_map->y += 1;
            }
            sfClock_restart(a->_map->clockb);
            a->_map->y = 0;
        }
    }
    my_pos_obstacle3(a);
}

void my_pos_obstacle3(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_lvl2->time = sfClock_getElapsedTime(a->_end->clockp);
        a->_select->second = a->_lvl2->time.microseconds / 1000000.0;
        if (a->_select->second > 0.01)
            a->_end->pos_par.x -= 20;
        if (a->_end->pos_par.x < 800) {
            a->_end->win = 1;
            a->_lvl1->rect_nauto.left = 250;
        }
        sfClock_restart(a->_end->clockp);
    }
}