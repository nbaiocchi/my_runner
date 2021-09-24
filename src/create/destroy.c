/*
** EPITECH PROJECT, 2020
** destroy.c
** File description:
** t
*/

#include "../../include/prototype.h"

void destroy(v_var *a)
{
    sfRenderWindow_destroy(a->_window->window);
    sfSprite_destroy(a->_menu->s_menu);
    sfSprite_destroy(a->_menu->s_kunai);
    sfSprite_destroy(a->_menu->s_kunai2);
    sfSprite_destroy(a->_menu->s_kunai3);
    sfSprite_destroy(a->_select->s_black);
    sfSprite_destroy(a->_menu->s_off);
    sfSprite_destroy(a->_menu->s_on);
    sfSprite_destroy(a->_select->s_itachi);
    sfSprite_destroy(a->_select->s_naruto);
    sfSprite_destroy(a->_paralax1->s_para1);
    sfSprite_destroy(a->_paralax1->s_para2);
    sfSprite_destroy(a->_paralax1->s_para3);
    sfSprite_destroy(a->_paralax1->s_para4);
    sfSprite_destroy(a->_lvl1->s_nauto);
    sfSprite_destroy(a->_lvl1->s_itachi);
    sfMusic_destroy(a->_music->music_menu);
    sfMusic_destroy(a->_music->music_select);
    sfClock_destroy(a->_select->clock);
    destroy2(a);
}

void destroy2(v_var *a)
{
    sfClock_destroy(a->_select->clock2);
    sfClock_destroy(a->_select->clock3);
    sfClock_destroy(a->_paralax1->clock);
    sfClock_destroy(a->_paralax1->clock2);
    sfClock_destroy(a->_paralax1->clock3);
    sfClock_destroy(a->_lvl1->clock);
    sfClock_destroy(a->_lvl1->clock2);
    sfClock_destroy(a->_lvl1->clockjn);
    sfSprite_destroy(a->_lvl1->s_njump);
    sfClock_destroy(a->_lvl1->clockji);
    sfSprite_destroy(a->_lvl1->s_ijump);
    sfSprite_destroy(a->_select->s_jiraya);
    sfClock_destroy(a->_paralax1->clock_1);
    sfClock_destroy(a->_paralax1->clock2_2);
    sfClock_destroy(a->_paralax1->clock3_3);
    sfClock_destroy(a->_lvl2->clock);
    sfClock_destroy(a->_lvl2->clock2);
    sfClock_destroy(a->_lvl2->clockjk);
    sfClock_destroy(a->_lvl2->clockjj);
    destroy3(a);
}

void destroy3(v_var *a)
{
    sfSprite_destroy(a->_lvl2->s_kyubi);
    sfSprite_destroy(a->_lvl2->s_jiraya);
    sfSprite_destroy(a->_lvl2->s_kjump);
    sfSprite_destroy(a->_lvl2->s_jjump);
    sfMusic_destroy(a->_music->music_lvl2);
    sfSound_destroy(a->_music->jump);
    sfSoundBuffer_destroy(a->_music->bjump);
    sfClock_destroy(a->_menu->clockp);
    sfSprite_destroy(a->_menu->s_parchemin);
    while (a->_map->y != a->_map->i) {
        sfSprite_destroy(a->_map->s_bamboo[a->_map->y]);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    while (a->_map->y != a->_map->z) {
        sfSprite_destroy(a->_map->s_boid[a->_map->y]);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    destroy4(a);
}

void destroy4(v_var *a)
{
    sfClock_destroy(a->_map->clock);
    sfClock_destroy(a->_map->clockb);
    sfClock_destroy(a->_end->clockd);
    sfClock_destroy(a->_end->clockd2);
    sfClock_destroy(a->_end->clockb);
    sfClock_destroy(a->_end->clocke);
    sfSprite_destroy(a->_end->s_daidara);
    sfSprite_destroy(a->_end->s_bombe);
    sfSprite_destroy(a->_end->s_explo);
    sfSprite_destroy(a->_end->s_par);
    sfSprite_destroy(a->_end->s_hokage);
    sfClock_destroy(a->_end->clockp);
    sfClock_destroy(a->_end->clockh);
    sfClock_destroy(a->_map->clockc);
    sfClock_destroy(a->_map->clockp);
    sfClock_destroy(a->_map->clockh);
    sfSprite_destroy(a->_map->s_pupet);
    sfSprite_destroy(a->_map->s_caillou);
    sfSprite_destroy(a->_map->s_heart);
    destroy5(a);
}

void destroy5(v_var *a)
{
    sfClock_destroy(a->_lvl2->clockp);
    sfClock_destroy(a->_lvl2->clockp2);
    sfSprite_destroy(a->_lvl2->s_jpoing);
    sfSprite_destroy(a->_lvl2->s_kpoing);
}