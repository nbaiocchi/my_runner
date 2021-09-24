/*
** EPITECH PROJECT, 2020
** sprite.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_sprite(v_var *a)
{
    a->_menu->t_menu = sfTexture_createFromFile
    ("./image/menu_naruto.png", NULL);
    a->_menu->s_menu = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_menu,
    a->_menu->t_menu, sfTrue);

    a->_menu->t_kunai = sfTexture_createFromFile
    ("./image/kunai.png", NULL);
    a->_menu->s_kunai = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_kunai,
    a->_menu->t_kunai, sfTrue);

    a->_menu->s_kunai2 = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_kunai2,
    a->_menu->t_kunai, sfTrue);

    a->_menu->s_kunai3 = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_kunai3,
    a->_menu->t_kunai, sfTrue);
    my_sprite_second(a);
}

void my_sprite_second(v_var *a)
{
    a->_menu->t_on = sfTexture_createFromFile
    ("./image/sound_on.png", NULL);
    a->_menu->s_on = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_on,
    a->_menu->t_on, sfTrue);
    a->_menu->t_off = sfTexture_createFromFile
    ("./image/sound_off.png", NULL);
    a->_menu->s_off = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_off,
    a->_menu->t_off, sfTrue);
    a->_select->t_itachi = sfTexture_createFromFile
    ("./image/itachi_pres.png", NULL);
    a->_select->s_itachi = sfSprite_create();
    sfSprite_setTexture(a->_select->s_itachi,
    a->_select->t_itachi, sfTrue);
    my_sprite_third(a);
}

void my_sprite_third(v_var *a)
{
    a->_select->t_naruto = sfTexture_createFromFile
    ("./image/naruto_select.png", NULL);
    a->_select->s_naruto = sfSprite_create();
    sfSprite_setTexture(a->_select->s_naruto,
    a->_select->t_naruto, sfTrue);
    a->_select->t_board = sfTexture_createFromFile
    ("./image/board2.png", NULL);
    a->_select->s_board = sfSprite_create();
    sfSprite_setTexture(a->_select->s_board,
    a->_select->t_board, sfTrue);
    a->_select->s_board2 = sfSprite_create();
    sfSprite_setTexture(a->_select->s_board2,
    a->_select->t_board, sfTrue);
    a->_window->t_cursor = sfTexture_createFromFile
    ("./image/cursor.png", NULL);
    a->_window->s_cursor = sfSprite_create();
    sfSprite_setTexture(a->_window->s_cursor,
    a->_window->t_cursor, sfTrue);
    my_sprite_fourth(a);
}

void my_sprite_fourth(v_var *a)
{
    a->_paralax1->t_para1 = sfTexture_createFromFile
    ("./image/para_1.png", NULL);
    a->_paralax1->s_para1 = sfSprite_create();
    sfSprite_setTexture(a->_paralax1->s_para1,
    a->_paralax1->t_para1, sfTrue);
    a->_paralax1->t_para2 = sfTexture_createFromFile
    ("./image/para_2.png", NULL);
    a->_paralax1->s_para2 = sfSprite_create();
    sfSprite_setTexture(a->_paralax1->s_para2,
    a->_paralax1->t_para2, sfTrue);
    a->_paralax1->t_para3 = sfTexture_createFromFile
    ("./image/para_3.png", NULL);
    a->_paralax1->s_para3 = sfSprite_create();
    sfSprite_setTexture(a->_paralax1->s_para3,
    a->_paralax1->t_para3, sfTrue);
    a->_paralax1->t_para4 = sfTexture_createFromFile
    ("./image/para_4.png", NULL);
    a->_paralax1->s_para4 = sfSprite_create();
    my_sprite_five(a);
}

void my_sprite_five(v_var *a)
{
    sfSprite_setTexture(a->_paralax1->s_para4,
    a->_paralax1->t_para4, sfTrue);
    a->_lvl1->t_nauto = sfTexture_createFromFile
    ("./image/my_run.png", NULL);
    a->_lvl1->s_nauto = sfSprite_create();
    sfSprite_setTexture(a->_lvl1->s_nauto,
    a->_lvl1->t_nauto, sfTrue);
    a->_lvl1->t_itachi = sfTexture_createFromFile
    ("./image/my_run_itachi.png", NULL);
    a->_lvl1->s_itachi = sfSprite_create();
    sfSprite_setTexture(a->_lvl1->s_itachi,
    a->_lvl1->t_itachi, sfTrue);
    a->_select->t_black = sfTexture_createFromFile
    ("./image/choice.png", NULL);
    a->_select->s_black = sfSprite_create();
    sfSprite_setTexture(a->_select->s_black,
    a->_select->t_black, sfTrue);
    my_sprite_six(a);
}