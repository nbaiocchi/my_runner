/*
** EPITECH PROJECT, 2020
** malloc.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_malloc_struct(v_var *a)
{
    a->_window = malloc(sizeof(t_window));
    a->_menu = malloc(sizeof(t_menu));
    a->_music = malloc(sizeof(t_music));
    a->_select = malloc(sizeof(t_select));
    a->_paralax1 = malloc(sizeof(t_paralax1));
    a->_lvl1 = malloc(sizeof(t_lvl1));
    a->_lvl2 = malloc(sizeof(t_lvl2));
    a->_map = malloc(sizeof(t_map));
    a->_end = malloc(sizeof(t_end));
}

void my_free(v_var *a)
{
    free(a->_window);
    free(a->_menu);
    free(a->_music);
    free(a->_select);
    free(a->_paralax1);
    free(a->_lvl1);
    free(a->_lvl2);
    free(a->_map);
    free(a->_end);
    free(a);
}