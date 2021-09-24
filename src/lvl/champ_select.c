/*
** EPITECH PROJECT, 2020
** champ_select.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_champ_select(v_var *a)
{
    sfSprite_setPosition(a->_select->s_black, a->_select->pos_black);
    sfSprite_setPosition(a->_select->s_itachi, a->_select->pos_itachi);
    sfSprite_setScale(a->_select->s_itachi, a->_select->size);
    sfSprite_setPosition(a->_select->s_naruto, a->_select->pos_naruto);
    sfSprite_setScale(a->_select->s_naruto, a->_select->size);
    sfSprite_setPosition(a->_select->s_board, a->_select->pos_board);
    sfSprite_setPosition(a->_select->s_board2, a->_select->pos_board2);
    sfSprite_setPosition(a->_select->s_jiraya, a->_select->pos_jiraya);
    sfSprite_setScale(a->_select->s_jiraya, a->_select->size);
    select_rect(a);
    select_rect_naruto(a);
    select_rect_jiraya(a);
}

void diplay_champ_select(v_var *a)
{
    sfSprite_setTextureRect(a->_select->s_black,
    a->_select->rect_black);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_select->s_black, NULL);
    if (a->lvl == 1) {
        sfSprite_setTextureRect(a->_select->s_itachi,
        a->_select->rect_itachi);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_select->s_itachi, NULL);
    }
    if (a->lvl == 2) {
        sfSprite_setTextureRect(a->_select->s_jiraya,
        a->_select->rect_jiraya);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_select->s_jiraya, NULL);
    }
    sfSprite_setTextureRect(a->_select->s_naruto,
    a->_select->rect_naruto);
    display_champ_select2(a);
}

void display_champ_select2(v_var *a)
{
    sfRenderWindow_drawSprite(a->_window->window,
    a->_select->s_naruto, NULL);
    if (a->_window->mouse.x > a->_select->pos_board.x &&
    a->_window->mouse.x < a->_select->pos_board.x + 400 &&
    a->_window->mouse.y > a->_select->pos_board.y &&
    a->_window->mouse.y < a->_select->pos_board.y + 650) {
        sfSprite_setTextureRect(a->_select->s_board,
        a->_select->rect_board);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_select->s_board, NULL);
    }
    if (a->_window->mouse.x > a->_select->pos_board2.x &&
    a->_window->mouse.x < a->_select->pos_board2.x + 400 &&
    a->_window->mouse.y > a->_select->pos_board2.y &&
    a->_window->mouse.y < a->_select->pos_board2.y + 650) {
        sfSprite_setTextureRect(a->_select->s_board2,
        a->_select->rect_board);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_select->s_board2, NULL);
    }
}