/*
** EPITECH PROJECT, 2020
** redirectin_second.c
** File description:
** t
*/

#include "../../include/prototype.h"

void go_to_lvl1(v_var *a)
{
    if (a->_window->mouse.x > a->_select->pos_board.x &&
    a->_window->mouse.x < a->_select->pos_board.x + 400 &&
    a->_window->mouse.y > a->_select->pos_board.y &&
    a->_window->mouse.y < a->_select->pos_board.y + 650) {
        a->stat = 2;
        a->_select->champ = 1;
    }
    if (a->_window->mouse.x > a->_select->pos_board2.x &&
    a->_window->mouse.x < a->_select->pos_board2.x + 400 &&
    a->_window->mouse.y > a->_select->pos_board2.y &&
    a->_window->mouse.y < a->_select->pos_board2.y + 650) {
        a->stat = 2;
        a->_select->champ = 2;
    }
}

void go_to_lvl2(v_var *a)
{
    if (a->_window->mouse.x > a->_select->pos_board.x &&
    a->_window->mouse.x < a->_select->pos_board.x + 400 &&
    a->_window->mouse.y > a->_select->pos_board.y &&
    a->_window->mouse.y < a->_select->pos_board.y + 650) {
        a->stat = 3;
        a->_select->champ = 1;
    }
    if (a->_window->mouse.x > a->_select->pos_board2.x &&
    a->_window->mouse.x < a->_select->pos_board2.x + 400 &&
    a->_window->mouse.y > a->_select->pos_board2.y &&
    a->_window->mouse.y < a->_select->pos_board2.y + 650) {
        a->stat = 3;
        a->_select->champ = 2;
    }
}