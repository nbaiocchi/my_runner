/*
** EPITECH PROJECT, 2020
** level.c
** File description:
** t
*/

#include "../../include/prototype.h"

void level_2(v_var *a)
{
    display_paralax1(a);
    if (a->_select->champ == 2 && a->_lvl1->jump == sfTrue)
        display_naruto(a);
    if (a->_lvl1->jump == sfFalse && a->_select->champ == 2)
        display_jump_naruto(a);
    if (a->_select->champ == 1 && a->_lvl1->jump == sfTrue)
        display_itachi(a);
    if (a->_lvl1->jump == sfFalse && a->_select->champ == 1)
        display_jump_itachi(a);
    display_obstacles(a);
    if (a->death == 1)
        display_end(a);
    if (a->_end->win == 1)
        display_win(a);
    display_cursor(a);
}

void level_3(v_var *a)
{
    display_paralax2(a);
    my_score(a);
    if (a->_select->champ == 2 && a->_lvl2->jump == sfTrue
    && a->_lvl2->poing == sfFalse)
        display_kyubi(a);
    if (a->_lvl2->jump == sfFalse && a->_select->champ == 2)
        display_jump_kyubi(a);
    if (a->_lvl2->poing == sfTrue && a->_select->champ == 2
    && a->_lvl2->jump == sfTrue)
        display_poing_kyubi(a);
    if (a->_select->champ == 1 && a->_lvl2->jump == sfTrue
    && a->_lvl2->poing == sfFalse)
        display_jiraya(a);
    level_3_bis(a);
}

void level_3_bis(v_var *a)
{
    if (a->_lvl2->jump == sfFalse && a->_select->champ == 1)
        display_jump_jiraya(a);
    if (a->_lvl2->poing == sfTrue && a->_select->champ == 1
    && a->_lvl2->jump == sfTrue)
        display_poing_jiraya(a);
    display_maplvl2(a);
    if (a->death == 1)
        display_end(a);
    display_cursor(a);
}