/*
** EPITECH PROJECT, 2020
** music.c
** File description:
** t
*/

#include "../../include/prototype.h"

int my_music(v_var *a)
{
    a->_music->music_menu = sfMusic_createFromFile("./song/song_menu.ogg");
    if (!a->_music->music_menu)
        return (0);
    a->_music->music_select = sfMusic_createFromFile("./song/champ_sel.ogg");
    if (!a->_music->music_select)
        return (0);
    a->_music->music_lvl2 = sfMusic_createFromFile("./song/lvl2.ogg");
    if (!a->_music->music_select)
        return (0);
    a->_music->jump = sfSound_create();
    a->_music->bjump = sfSoundBuffer_createFromFile("./song/jump.ogg");
    sfSound_setBuffer(a->_music->jump, a->_music->bjump);
    return (0);
}

void sound_off(v_var *a)
{
    if (a->_window->mouse.x > 50 && a->_window->mouse.x < 200
    && a->_window->mouse.y > 950 && a->_window->mouse.y < 1050 &&
    a->stat == 0) {
        a->s = 1;
    }
}

void sound_on(v_var *a)
{
    if (a->_window->mouse.x > 50 && a->_window->mouse.x < 200
    && a->_window->mouse.y > 950 && a->_window->mouse.y < 1050 &&
    a->stat == 0) {
        a->s = 0;
        sfMusic_play(a->_music->music_menu);
        sfMusic_setVolume(a->_music->music_menu, a->_music->volume);
        sfMusic_setLoop(a->_music->music_menu, sfTrue);
    }
}