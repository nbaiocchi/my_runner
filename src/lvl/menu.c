/*
** EPITECH PROJECT, 2020
** menu.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_menu(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_menu, a->_menu->pos_menu);
    sfSprite_setPosition(a->_menu->s_kunai, a->_menu->pos_kunai);
    sfSprite_setPosition(a->_menu->s_kunai2, a->_menu->pos_kunai2);
    sfSprite_setPosition(a->_menu->s_kunai3, a->_menu->pos_kunai3);
    sfSprite_setPosition(a->_menu->s_off, a->_menu->pos_off);
    sfSprite_setPosition(a->_menu->s_on, a->_menu->pos_on);
}

void display_menu(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_menu,
    a->_menu->rect_menu);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_menu->s_menu, NULL);
    if (a->_window->mouse.x > 805 && a->_window->mouse.x < 1117
    && a->_window->mouse.y > 695 && a->_window->mouse.y < 775) {
        sfSprite_setTextureRect(a->_menu->s_kunai,
        a->_menu->rect_kunai);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_kunai, NULL);
    }
    if (a->_window->mouse.x > 805 && a->_window->mouse.x < 1117
    && a->_window->mouse.y > 810 && a->_window->mouse.y < 890) {
        sfSprite_setTextureRect(a->_menu->s_kunai2,
        a->_menu->rect_kunai);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_kunai2, NULL);
    }
    display_menu_second(a);
}

void display_menu_second(v_var *a)
{
    if (a->_window->mouse.x > 805 && a->_window->mouse.x < 1117
    && a->_window->mouse.y > 920 && a->_window->mouse.y < 1000) {
        sfSprite_setTextureRect(a->_menu->s_kunai3,
        a->_menu->rect_kunai);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_kunai3, NULL);
    }
    if (a->s == 0) {
        sfSprite_setTextureRect(a->_menu->s_on,
        a->_menu->rect_on);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_on, NULL);
    }
    if (a->s == 1) {
        sfMusic_pause(a->_music->music_menu);
        sfSprite_setTextureRect(a->_menu->s_off,
        a->_menu->rect_off);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_off, NULL);
    }
}

void my_parchemin(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_parchemin, a->_menu->pos_parchemin);
    sfSprite_setScale(a->_menu->s_parchemin, a->_menu->size);
    rect_parchemin(a);
}

void display_parchemin(v_var *a)
{
    if (a->_menu->parchemin == 1) {
        sfSprite_setTextureRect(a->_menu->s_parchemin,
        a->_menu->rect_parchemin);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_parchemin, NULL);
    }
}