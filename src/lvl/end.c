/*
** EPITECH PROJECT, 2020
** end.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_end(v_var *a)
{
    sfSprite_setPosition(a->_end->s_daidara, a->_end->pos_daidara);
    sfSprite_setScale(a->_end->s_daidara, a->_menu->size);

    sfSprite_setPosition(a->_end->s_bombe, a->_end->pos_bombe);
    sfSprite_setScale(a->_end->s_bombe, a->_menu->size);

    sfSprite_setPosition(a->_end->s_explo, a->_end->pos_explo);
    sfSprite_setScale(a->_end->s_explo, a->_lvl1->size);
}

void display_end(v_var *a)
{
    pos_daidara(a);
    rect_daidara(a);
    if (a->_end->daid == 1)
        pos_bombe(a);
    if (a->_end->bombe == 1)
        rect_explo(a);
    if (a->_end->daid == 1) {
        sfSprite_setTextureRect(a->_end->s_bombe,
        a->_end->rect_bombe);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_end->s_bombe, NULL);
    }
    display_end2(a);
}

void display_end2(v_var *a)
{
    if (a->_end->bombe == 1) {
        sfSprite_setTextureRect(a->_end->s_explo,
        a->_end->rect_explo);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_end->s_explo, NULL);
    }
    sfSprite_setTextureRect(a->_end->s_daidara,
    a->_end->rect_daidara);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_end->s_daidara, NULL);
}

void my_win(v_var *a)
{
    sfSprite_setPosition(a->_end->s_hokage, a->_end->pos_hokage);
    sfSprite_setScale(a->_end->s_hokage, a->_end->size2);
}

void display_win(v_var *a)
{
    rect_hokage(a);
    sfSprite_setTextureRect(a->_end->s_hokage,
    a->_end->rect_hokage);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_end->s_hokage, NULL);
}