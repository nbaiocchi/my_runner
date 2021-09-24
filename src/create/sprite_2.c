/*
** EPITECH PROJECT, 2020
** sprit_2.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_sprite_six(v_var *a)
{
    a->_lvl1->t_njump = sfTexture_createFromFile
    ("./image/my_jump.png", NULL);
    a->_lvl1->s_njump = sfSprite_create();
    sfSprite_setTexture(a->_lvl1->s_njump,
    a->_lvl1->t_njump, sfTrue);
    a->_lvl1->t_ijump = sfTexture_createFromFile
    ("./image/jump_ita.png", NULL);
    a->_lvl1->s_ijump = sfSprite_create();
    sfSprite_setTexture(a->_lvl1->s_ijump,
    a->_lvl1->t_ijump, sfTrue);
    a->_select->t_jiraya = sfTexture_createFromFile
    ("./image/jiraya_pres.png", NULL);
    a->_select->s_jiraya  = sfSprite_create();
    sfSprite_setTexture(a->_select->s_jiraya ,
    a->_select->t_jiraya , sfTrue);
    a->_paralax1->t_1para1 = sfTexture_createFromFile
    ("./image/1para_1.png", NULL);
    my_sprite_seven(a);
}

void my_sprite_seven(v_var *a)
{
    a->_paralax1->s_1para1 = sfSprite_create();
    sfSprite_setTexture(a->_paralax1->s_1para1,
    a->_paralax1->t_1para1, sfTrue);
    a->_paralax1->t_2para2 = sfTexture_createFromFile
    ("./image/2para_2.png", NULL);
    a->_paralax1->s_2para2 = sfSprite_create();
    sfSprite_setTexture(a->_paralax1->s_2para2,
    a->_paralax1->t_2para2, sfTrue);
    a->_paralax1->t_3para3 = sfTexture_createFromFile
    ("./image/3para_3.png", NULL);
    a->_paralax1->s_3para3 = sfSprite_create();
    sfSprite_setTexture(a->_paralax1->s_3para3,
    a->_paralax1->t_3para3, sfTrue);
    a->_paralax1->t_4para4 = sfTexture_createFromFile
    ("./image/4para_4.png", NULL);
    a->_paralax1->s_4para4 = sfSprite_create();
    sfSprite_setTexture(a->_paralax1->s_4para4,
    a->_paralax1->t_4para4, sfTrue);
    my_sprite_height(a);
}

void my_sprite_height(v_var *a)
{
    a->_lvl2->t_kyubi = sfTexture_createFromFile
    ("./image/running_queu.png", NULL);
    a->_lvl2->s_kyubi = sfSprite_create();
    sfSprite_setTexture(a->_lvl2->s_kyubi,
    a->_lvl2->t_kyubi, sfTrue);
    a->_lvl2->t_jiraya = sfTexture_createFromFile
    ("./image/running_jira.png", NULL);
    a->_lvl2->s_jiraya = sfSprite_create();
    sfSprite_setTexture(a->_lvl2->s_jiraya,
    a->_lvl2->t_jiraya, sfTrue);
    a->_lvl2->t_kjump = sfTexture_createFromFile
    ("./image/kyu_jump.png", NULL);
    a->_lvl2->s_kjump = sfSprite_create();
    sfSprite_setTexture(a->_lvl2->s_kjump,
    a->_lvl2->t_kjump, sfTrue);
    my_sprite_nine(a);
}

void my_sprite_nine(v_var *a)
{
    a->_lvl2->t_jjump = sfTexture_createFromFile
    ("./image/jira_jump.png", NULL);
    a->_lvl2->s_jjump = sfSprite_create();
    sfSprite_setTexture(a->_lvl2->s_jjump,
    a->_lvl2->t_jjump, sfTrue);
    a->_menu->t_parchemin = sfTexture_createFromFile
    ("./image/parchemin.png", NULL);
    a->_menu->s_parchemin = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_parchemin,
    a->_menu->t_parchemin, sfTrue);
    a->_map->t_bamboo = sfTexture_createFromFile
    ("./image/bamboo.png", NULL);
    while (a->_map->y != a->_map->i) {
        a->_map->s_bamboo[a->_map->y] = sfSprite_create();
        sfSprite_setTexture(a->_map->s_bamboo[a->_map->y],
        a->_map->t_bamboo, sfTrue);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    my_sprite_ten(a);
}

void my_sprite_ten(v_var *a)
{
    a->_map->t_boid = sfTexture_createFromFile
    ("./image/boid.png", NULL);
    while (a->_map->y != a->_map->z) {
        a->_map->s_boid[a->_map->y] = sfSprite_create();
        sfSprite_setTexture(a->_map->s_boid[a->_map->y],
        a->_map->t_boid, sfTrue);
        a->_map->y += 1;
    }
    a->_map->y = 0;
    a->_end->t_daidara = sfTexture_createFromFile
    ("./image/pigeon.png", NULL);
    a->_end->s_daidara = sfSprite_create();
    sfSprite_setTexture(a->_end->s_daidara,
    a->_end->t_daidara, sfTrue);
    a->_end->t_bombe = sfTexture_createFromFile
    ("./image/bombe.png", NULL);
    a->_end->s_bombe = sfSprite_create();
    sfSprite_setTexture(a->_end->s_bombe,
    a->_end->t_bombe, sfTrue);
    my_sprite_eleven(a);
}