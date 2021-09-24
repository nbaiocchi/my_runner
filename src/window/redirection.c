/*
** EPITECH PROJECT, 2020
** redirection.c
** File description:
** t
*/

#include "../../include/prototype.h"

void event_mousepress(v_var *a)
{
    if (a->s == 0) {
        sound_off(a);
    } else {
        sound_on(a);
    }
    if (a->stat == 0)
        my_redirection(a);
    if (a->stat == 1)
        return_menu(a);
    if (a->stat == 1 && a->lvl == 1)
        go_to_lvl1(a);
    if (a->stat == 1 && a->lvl == 2)
        go_to_lvl2(a);
}

void my_redirection(v_var *a)
{
    if (a->_window->mouse.x > 805 && a->_window->mouse.x < 1117
    && a->_window->mouse.y > 695 && a->_window->mouse.y < 775
    && a->_menu->parchemin == 0) {
        sfMusic_stop(a->_music->music_menu);
        sfMusic_play(a->_music->music_select);
        sfMusic_setVolume(a->_music->music_select, a->_music->volume2);
        sfMusic_setLoop(a->_music->music_select, sfTrue);
        a->stat = 1;
        a->lvl = 1;
    }
    my_redirection_second(a);
}

void my_redirection_second(v_var *a)
{
    if (a->_window->mouse.x > 805 && a->_window->mouse.x < 1117
    && a->_window->mouse.y > 810 && a->_window->mouse.y < 890
    && a->_menu->parchemin == 0) {
        sfMusic_stop(a->_music->music_menu);
        sfMusic_play(a->_music->music_lvl2);
        sfMusic_setVolume(a->_music->music_lvl2, a->_music->volume3);
        sfMusic_setLoop(a->_music->music_lvl2, sfTrue);
        a->stat = 1;
        a->lvl = 2;
    }
    if (a->_menu->parchemin == 1) {
        a->_menu->parchemin = 0;
    }
    if (a->_window->mouse.x > 805 && a->_window->mouse.x < 1117
    && a->_window->mouse.y > 925 && a->_window->mouse.y < 1005) {
        a->_menu->parchemin = 1;
        a->_menu->rect_parchemin.left = 0;
    }
}

void return_menu(v_var *a)
{
    if (a->_window->mouse.x > 40 && a->_window->mouse.x < 120
    && a->_window->mouse.y > 20 && a->_window->mouse.y < 50) {
        if (a->lvl == 1) {
            a->stat = 0;
            a->lvl = 0;
            sfMusic_stop(a->_music->music_select);
            sfMusic_play(a->_music->music_menu);
            sfMusic_setVolume(a->_music->music_menu, a->_music->volume);
            sfMusic_setLoop(a->_music->music_menu, sfTrue);
        }
        if (a->lvl == 2) {
            a->stat = 0;
            a->lvl = 0;
            sfMusic_stop(a->_music->music_lvl2);
            sfMusic_play(a->_music->music_menu);
            sfMusic_setVolume(a->_music->music_menu, a->_music->volume);
            sfMusic_setLoop(a->_music->music_menu, sfTrue);
        }
    }
}