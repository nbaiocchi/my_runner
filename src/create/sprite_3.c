/*
** EPITECH PROJECT, 2020
** sprite_3.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_sprite_eleven(v_var *a)
{
    a->_end->t_explo = sfTexture_createFromFile
    ("./image/endgame.png", NULL);
    a->_end->s_explo = sfSprite_create();
    sfSprite_setTexture(a->_end->s_explo,
    a->_end->t_explo, sfTrue);
    a->_end->t_par = sfTexture_createFromFile
    ("./image/par.png", NULL);
    a->_end->s_par = sfSprite_create();
    sfSprite_setTexture(a->_end->s_par,
    a->_end->t_par, sfTrue);
    a->_end->t_hokage = sfTexture_createFromFile
    ("./image/hokage.png", NULL);
    a->_end->s_hokage = sfSprite_create();
    sfSprite_setTexture(a->_end->s_hokage,
    a->_end->t_hokage, sfTrue);
    my_sprite_twelve(a);
}

void my_sprite_twelve(v_var *a)
{
    a->_map->t_caillou = sfTexture_createFromFile
    ("./image/caillou.png", NULL);
    a->_map->s_caillou = sfSprite_create();
    sfSprite_setTexture(a->_map->s_caillou,
    a->_map->t_caillou, sfTrue);
    a->_map->t_pupet = sfTexture_createFromFile
    ("./image/pupet.png", NULL);
    a->_map->s_pupet = sfSprite_create();
    sfSprite_setTexture(a->_map->s_pupet,
    a->_map->t_pupet, sfTrue);
    a->_map->t_heart = sfTexture_createFromFile
    ("./image/heart.png", NULL);
    a->_map->s_heart = sfSprite_create();
    sfSprite_setTexture(a->_map->s_heart,
    a->_map->t_heart, sfTrue);
    my_sprite_thirteen(a);
}

void my_sprite_thirteen(v_var *a)
{
    a->_lvl2->t_kpoing = sfTexture_createFromFile
    ("./image/poing.png", NULL);
    a->_lvl2->s_kpoing = sfSprite_create();
    sfSprite_setTexture(a->_lvl2->s_kpoing,
    a->_lvl2->t_kpoing, sfTrue);

    a->_lvl2->t_jpoing = sfTexture_createFromFile
    ("./image/poindjira.png", NULL);
    a->_lvl2->s_jpoing = sfSprite_create();
    sfSprite_setTexture(a->_lvl2->s_jpoing,
    a->_lvl2->t_jpoing, sfTrue);
}