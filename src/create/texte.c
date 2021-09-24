/*
** EPITECH PROJECT, 2020
** texte.c
** File description:
** y
*/

#include "../../include/prototype.h"

void my_text(v_var *a)
{
    a->_menu->score = sfText_create();
    a->_menu->font = sfFont_createFromFile("./image/font.ttf");
    a->_menu->str = my_convert_int(a->_menu->sco);
}