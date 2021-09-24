/*
** EPITECH PROJECT, 2020
** cursor.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_cursor(v_var *a)
{
    a->_window->pos_cursor.x = a->_window->mouse.x;
    a->_window->pos_cursor.y = a->_window->mouse.y;
    sfSprite_setPosition(a->_window->s_cursor, a->_window->pos_cursor);
}

void display_cursor(v_var *a)
{
    sfSprite_setTextureRect(a->_window->s_cursor, a->_window->rect_cursor);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_window->s_cursor, NULL);
}