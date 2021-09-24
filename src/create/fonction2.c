/*
** EPITECH PROJECT, 2021
** fonction2.c
** File description:
** t
*/

#include "../../include/prototype.h"

void count(int *tmp, int *a)
{
    while (*tmp > 0) {
        *a += 1;
        *tmp = *tmp / 10;
    }
}