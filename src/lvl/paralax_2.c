/*
** EPITECH PROJECT, 2020
** paralax_2.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_paralax2(v_var *a)
{
    sfSprite_setPosition(a->_paralax1->s_1para1, a->_paralax1->pos_1para1);
    sfSprite_setPosition(a->_paralax1->s_2para2, a->_paralax1->pos_2para2);
    sfSprite_setPosition(a->_paralax1->s_3para3, a->_paralax1->pos_3para3);
    sfSprite_setPosition(a->_paralax1->s_4para4, a->_paralax1->pos_4para4);
    rect_2para2(a);
    rect_3para3(a);
    rect_4para4(a);
}

void display_paralax2(v_var *a)
{
    sfSprite_setTextureRect(a->_paralax1->s_1para1,
    a->_paralax1->rect_1para1);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_1para1, NULL);
    sfSprite_setTextureRect(a->_paralax1->s_3para3,
    a->_paralax1->rect_3para3);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_3para3, NULL);
    sfSprite_setTextureRect(a->_paralax1->s_4para4,
    a->_paralax1->rect_4para4);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_4para4, NULL);
    sfSprite_setTextureRect(a->_paralax1->s_2para2,
    a->_paralax1->rect_2para2);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_paralax1->s_2para2, NULL);
}

void rect_2para2(v_var *a)
{
    if (a->death == 0) {
        a->_select->time = sfClock_getElapsedTime(a->_paralax1->clock_1);
        a->_select->second = a->_select->time.microseconds / 1000000.0;
        if (a->_select->second > 0.0001) {
            if (a->_paralax1->rect_2para2.left != 1920) {
                a->_paralax1->rect_2para2.left += 4;
            } else {
                a->_paralax1->rect_2para2.left = 0;
            }
            sfClock_restart(a->_paralax1->clock_1);
        }
    }
}

void rect_3para3(v_var *a)
{
    if (a->death == 0) {
        a->_select->time = sfClock_getElapsedTime(a->_paralax1->clock2_2);
        a->_select->second = a->_select->time.microseconds / 1000000.0;
        if (a->_select->second > 0.0001) {
            if (a->_paralax1->rect_3para3.left != 1920) {
                a->_paralax1->rect_3para3.left += 6;
            } else {
                a->_paralax1->rect_3para3.left = 0;
            }
            sfClock_restart(a->_paralax1->clock2_2);
        }
    }
}

void rect_4para4(v_var *a)
{
    if (a->death == 0) {
        a->_select->time = sfClock_getElapsedTime(a->_paralax1->clock3_3);
        a->_select->second = a->_select->time.microseconds / 1000000.0;
        if (a->_select->second > 0.0001) {
            if (a->_paralax1->rect_4para4.left != 1920) {
                a->_paralax1->rect_4para4.left += 16;
            } else {
                a->_paralax1->rect_4para4.left = 0;
            }
            sfClock_restart(a->_paralax1->clock3_3);
        }
    }
}