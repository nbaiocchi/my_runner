/*
** EPITECH PROJECT, 2020
** variable.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_variable(v_var *a)
{
    a->stat = 0;
    a->s = 0;
    a->_music->volume = 25;
    a->_music->volume2 = 15;
    a->_music->volume3 = 15;
    a->_menu->pos_menu.x = 0;
    a->_menu->pos_menu.y = 0;
    a->_window->mouse.x = 0;
    a->_window->mouse.y = 0;
    a->_menu->pos_kunai.x = 680;
    a->_menu->pos_kunai.y = 720;
    a->_menu->pos_kunai2.x = 680;
    a->_menu->pos_kunai2.y = 830;
    a->_menu->pos_kunai3.x = 680;
    a->_menu->pos_kunai3.y = 940;
    a->_menu->pos_off.x = 50;
    a->_menu->pos_off.y = 940;
    a->_menu->pos_on.x = 50;
    a->_menu->pos_on.y = 940;
    my_variable2(a);
}

void my_variable2(v_var *a)
{
    a->_select->pos_black.x = 0;
    a->_select->pos_black.y = 0;
    a->_select->pos_itachi.x = 290;
    a->_select->pos_itachi.y = 700;
    a->_select->pos_naruto.x = 900;
    a->_select->pos_naruto.y = 700;
    a->_select->pos_board.x = 420;
    a->_select->pos_board.y = 400;
    a->_select->pos_board2.x = 1100;
    a->_select->pos_board2.y = 400;
    a->_window->pos_cursor.x = 0;
    a->_window->pos_cursor.y = 0;
    a->lvl = 0;
    a->_select->size.x = 2;
    a->_select->size.y = 2;
    a->_paralax1->pos_para1.x = 0;
    a->_paralax1->pos_para1.y = 0;
    a->_paralax1->pos_para2.x = 0;
    a->_paralax1->pos_para2.y = 0;
    my_variable3(a);
}

void my_variable3(v_var *a)
{
    a->_paralax1->pos_para3.x = 0;
    a->_paralax1->pos_para3.y = 0;
    a->_paralax1->pos_para4.x = 0;
    a->_paralax1->pos_para4.y = 0;
    a->_lvl1->pos_nauto.x = 500;
    a->_lvl1->pos_nauto.y = 850;
    a->_lvl1->pos_itachi.x = 500;
    a->_lvl1->pos_itachi.y = 850;
    a->_lvl1->pos_njump.x = 500;
    a->_lvl1->pos_njump.y = 500;
    a->_lvl1->pos_ijump.x = 500;
    a->_lvl1->pos_ijump.y = 500;
    a->_select->champ = 0;
    a->_lvl1->size.x = 4;
    a->_lvl1->size.y = 4;
    a->_lvl1->jump = sfTrue;
    a->_lvl2->jump = sfTrue;
    a->_select->pos_jiraya.x = 410;
    a->_select->pos_jiraya.y = 640;
    my_variable4(a);
}

void my_variable4(v_var *a)
{
    a->_paralax1->pos_1para1.x = 0;
    a->_paralax1->pos_1para1.y = 0;
    a->_paralax1->pos_2para2.x = 0;
    a->_paralax1->pos_2para2.y = 0;
    a->_paralax1->pos_3para3.x = 0;
    a->_paralax1->pos_3para3.y = 0;
    a->_paralax1->pos_4para4.x = 0;
    a->_paralax1->pos_4para4.y = 0;
    a->_music->volume4 = 2;
    a->_lvl2->pos_kyubi.x = 500;
    a->_lvl2->pos_kyubi.y = 850;
    a->_lvl2->pos_jiraya.x = 500;
    a->_lvl2->pos_jiraya.y = 850;
    a->_lvl2->pos_kjump.x = 500;
    a->_lvl2->pos_kjump.y = 440;
    a->_lvl2->pos_jjump.x = 500;
    a->_lvl2->pos_jjump.y = 450;
    a->score = 0;
    my_variable5(a);
}

void my_variable5(v_var *a)
{
    a->_menu->pos_parchemin.x = 350;
    a->_menu->pos_parchemin.y = 300;
    a->_menu->parchemin = 0;
    a->_menu->size.x = 2;
    a->_menu->size.y = 2;
    a->_map->size.x = 3;
    a->_map->size.y = 3;
    a->sleep.microseconds = 500000;
    a->death = 0;
    a->_end->pos_daidara.x = 1950;
    a->_end->pos_daidara.y = 200;
    a->_end->pos_bombe.x = 920;
    a->_end->pos_bombe.y = 400;
    a->_end->pos_explo.x = -300;
    a->_end->pos_explo.y = -300;
    a->_end->bombe = 0;
    a->_end->daid = 0;
    a->_end->win = 0;
    my_variable6(a);
}