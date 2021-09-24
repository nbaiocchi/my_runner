/*
** EPITECH PROJECT, 2020
** mouvement.c
** File description:
** t
*/

#include "../../include/prototype.h"

void mouvement_sprite(v_var *a)
{
    if (a->stat == 2 && a->lvl == 1 && a->_select->champ == 2 &&
    sfKeyboard_isKeyPressed(sfKeySpace)) {
        a->_lvl1->jump = sfFalse;
        sfSound_play(a->_music->jump);
        sfSound_setVolume(a->_music->jump, a->_music->volume4);
    }
    if (a->stat == 2 && a->lvl == 1 && a->_select->champ == 1 &&
    sfKeyboard_isKeyPressed(sfKeySpace)) {
        a->_lvl1->jump = sfFalse;
        sfSound_play(a->_music->jump);
        sfSound_setVolume(a->_music->jump, a->_music->volume4);
    }
    if (a->stat == 3 && a->lvl == 2 && a->_select->champ == 2 &&
    sfKeyboard_isKeyPressed(sfKeySpace)) {
        a->_lvl2->jump = sfFalse;
        sfSound_play(a->_music->jump);
        sfSound_setVolume(a->_music->jump, a->_music->volume4);
    }
    mouvement_sprite2(a);
}

void mouvement_sprite2(v_var *a)
{
    if (a->stat == 3 && a->lvl == 2 && a->_select->champ == 1 &&
    sfKeyboard_isKeyPressed(sfKeySpace)) {
        a->_lvl2->jump = sfFalse;
        sfSound_play(a->_music->jump);
        sfSound_setVolume(a->_music->jump, a->_music->volume4);
    }
    if (a->stat == 3 && a->lvl == 2 && a->_select->champ == 1 &&
    sfKeyboard_isKeyPressed(sfKeyA)) {
        a->_lvl2->poing = sfTrue;
    }
    if (a->stat == 3 && a->lvl == 2 && a->_select->champ == 2 &&
    sfKeyboard_isKeyPressed(sfKeyA)) {
        a->_lvl2->poing = sfTrue;
    }
    if ((a->stat == 2 || a->stat == 3) && sfKeyboard_isKeyPressed(sfKeyM))
        return_menu_from_game(a);
    if ((a->stat == 2 || a->stat == 3) && sfKeyboard_isKeyPressed(sfKeyP))
        my_pause(a);
}

void return_menu_from_game(v_var *a)
{
    if (a->lvl == 1) {
        a->stat = 0;
        a->lvl = 0;
        sfMusic_stop(a->_music->music_select);
        sfMusic_play(a->_music->music_menu);
        sfMusic_setVolume(a->_music->music_menu, a->_music->volume);
        sfMusic_setLoop(a->_music->music_menu, sfTrue);
        my_maps_pos_r(a);
    }
    return_menu_from_game2(a);
}

void return_menu_from_game2(v_var *a)
{
    if (a->lvl == 2) {
        reinisialisation(a);
    }
}

void reinisialisation(v_var *a)
{
    a->stat = 0;
    a->lvl = 0;
    sfMusic_stop(a->_music->music_lvl2);
    sfMusic_play(a->_music->music_menu);
    sfMusic_setVolume(a->_music->music_menu, a->_music->volume);
    sfMusic_setLoop(a->_music->music_menu, sfTrue);
    a->death = 0;
    a->_end->daid = 0;
    a->_end->bombe = 0;
    a->_end->pos_bombe.y = 400;
    a->_end->pos_daidara.x = 1950;
    a->_end->rect_explo.left = 0;
    a->_end->rect_daidara.left = 0;
    a->_lvl2->dis = 0;
    a->_lvl2->dis2 = 0;
    a->_map->pos_pupet.x = 2500;
    a->_map->pos_caillou.x = 2000;
    a->_map->pos_heart.x = 3000;
    a->_menu->sco = 0;
    a->_menu->str = my_convert_int(a->_menu->sco);
}