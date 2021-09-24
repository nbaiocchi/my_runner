/*
** EPITECH PROJECT, 2020
** my_window.c
** File description:
** t
*/

#include "../../include/prototype.h"

void open_window(v_var *a)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    a->_window->window = sfRenderWindow_create(video_mode, "My_window",
    sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(a->_window->window, 30);
}

void my_pool_event(v_var *a)
{
    while (sfRenderWindow_pollEvent(a->_window->window, &a->_window->event)) {
        if (a->_window->event.type == sfEvtClosed)
            sfRenderWindow_close(a->_window->window);
        if (a->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(a->_window->window);
        if (a->_window->event.type == sfEvtMouseButtonPressed) {
            event_mousepress(a);
        }
        if (a->_window->event.type == sfEvtKeyPressed)
            mouvement_sprite(a);
    }
}

void display(v_var *a)
{
    sfRenderWindow_clear(a->_window->window, sfBlack);
    if (a->stat == 0) {
        display_menu(a);
        display_parchemin(a);
        display_cursor(a);
    }
    if (a->stat == 1) {
        diplay_champ_select(a);
        display_cursor(a);
    }
    if (a->stat == 2) {
        level_2(a);
    }
    if (a->stat == 3) {
        level_3(a);
    }
    sfRenderWindow_display(a->_window->window);
}