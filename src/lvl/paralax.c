/*
** EPITECH PROJECT, 2020
** paralax.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_paralax1(v_var *a)
{
    sfSprite_setPosition(a->_paralax1->s_para1, a->_paralax1->pos_para1);
    sfSprite_setPosition(a->_paralax1->s_para2, a->_paralax1->pos_para2);
    sfSprite_setPosition(a->_paralax1->s_para3, a->_paralax1->pos_para3);
    sfSprite_setPosition(a->_paralax1->s_para4, a->_paralax1->pos_para4);
    rect_para2(a);
    rect_para3(a);
    rect_para4(a);
}

void display_paralax1(v_var *a)
{
    sfSprite_setTextureRect(a->_paralax1->s_para1,
    a->_paralax1->rect_para1);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_para1, NULL);
    sfSprite_setTextureRect(a->_paralax1->s_para2,
    a->_paralax1->rect_para2);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_para2, NULL);
    sfSprite_setTextureRect(a->_paralax1->s_para3,
    a->_paralax1->rect_para3);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_para3, NULL);
    sfSprite_setTextureRect(a->_paralax1->s_para4,
    a->_paralax1->rect_para4);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_para4, NULL);
}

void rect_para2(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_select->time = sfClock_getElapsedTime(a->_paralax1->clock);
        a->_select->second = a->_select->time.microseconds / 1000000.0;
        if (a->_select->second > 0.0001) {
            if (a->_paralax1->rect_para2.left != 1920) {
                a->_paralax1->rect_para2.left += 2;
            } else {
                a->_paralax1->rect_para2.left = 0;
            }
            sfClock_restart(a->_paralax1->clock);
        }
    }
}

void rect_para3(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_select->time = sfClock_getElapsedTime(a->_paralax1->clock2);
        a->_select->second = a->_select->time.microseconds / 1000000.0;
        if (a->_select->second > 0.0001) {
            if (a->_paralax1->rect_para3.left != 1920) {
                a->_paralax1->rect_para3.left += 8;
            } else {
                a->_paralax1->rect_para3.left = 0;
            }
            sfClock_restart(a->_paralax1->clock2);
        }
    }
}

void rect_para4(v_var *a)
{
    if (a->death == 0 && a->_end->win == 0) {
        a->_select->time = sfClock_getElapsedTime(a->_paralax1->clock3);
        a->_select->second = a->_select->time.microseconds / 1000000.0;
        if (a->_select->second > 0.0001) {
            if (a->_paralax1->rect_para4.left != 1920) {
                a->_paralax1->rect_para4.left += 20;
            } else {
                a->_paralax1->rect_para4.left = 0;
            }
            sfClock_restart(a->_paralax1->clock3);
        }
    }
}