/*
** EPITECH PROJECT, 2020
** pause.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_pause(v_var *a)
{
    a->pause = 1;
    while (a->pause == 1) {
        while (sfRenderWindow_pollEvent(a->_window->window,
        &a->_window->event)) {
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                a->pause = 0;
        }
    }
}