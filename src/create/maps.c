/*
** EPITECH PROJECT, 2020
** maps.c
** File description:
** t
*/

#include "../../include/prototype.h"

int my_maps(v_var *a)
{
    struct stat buf;
    int fd;
    int ret = 0;

    stat(a->path, &buf);
    a->map = malloc(sizeof(char) * buf.st_size + 1);
    fd = open(a->path, O_RDONLY);
    if (fd == -1)
    	return (84);
    ret = read(fd, a->map, buf.st_size);
    if (ret == -1)
    	return (84);
    a->map[ret] = '\0';
    close(fd);
    my_maps_pos(a);
    return (0);
}

void my_maps_pos(v_var *a)
{
    int i = 0;
    a->_map->i = 0;
    a->_map->y = 0;
    a->_map->z = 0;

    while (a->map[i] != '\0') {
        if (a->map[i] == '1')
            a->_map->i += 1;
        if (a->map[i] == '2')
            a->_map->z += 1;
        i += 1;
    }
    i = 0;
    a->_map->s_bamboo = malloc(sizeof(sfSprite*) * a->_map->i);
    a->_map->pos_bamboo = malloc(sizeof(sfVector2f) * a->_map->i);
    a->_map->s_boid = malloc(sizeof(sfSprite*) * a->_map->z);
    a->_map->pos_boid = malloc(sizeof(sfVector2f) * a->_map->z);
    my_maps_pos2(a);
}

void my_maps_pos2(v_var *a)
{
    int i = 0;
    int y = 0;
    int b = 0;
    int pos = 2500;

    while (a->map[i] != '\0') {
        if (a->map[i] == '1') {
            a->_map->pos_bamboo[y].x = pos;
            a->_map->pos_bamboo[y].y = 920;
            y += 1;
            pos += 280;
        } else if (a->map[i] == '2') {
            a->_map->pos_boid[b].x = pos;
            a->_map->pos_boid[b].y = 920;
            b += 1;
            pos += 280;
        } else if (a->map[i] == '3') {
            a->_end->pos_par.x = pos;
            a->_end->pos_par.y = 900;
            pos += 280;
        } else
            pos += 200;
        i += 1;
    }
}

void my_maps_pos_r(v_var *a)
{
    int i = 0;
    int y = 0;
    int b = 0;
    int pos = 2500;
    a->_map->y = 0;

    while (a->map[i] != '\0') {
        if (a->map[i] == '1') {
            a->_map->pos_bamboo[y].x = pos;
            y += 1;
            pos += 280;
        } else if (a->map[i] == '2') {
            a->_map->pos_boid[b].x = pos;
            b += 1;
            pos += 280;
        }  else if (a->map[i] == '3') {
            a->_end->pos_par.x = pos;
            pos += 280;
        } else
            pos += 200;
        i += 1;
    }
    reset_v(a);
}

void reset_v(v_var *a)
{
    a->death = 0;
    a->_end->win = 0;
    a->_end->daid = 0;
    a->_end->bombe = 0;
    a->_end->pos_bombe.y = 400;
    a->_end->pos_daidara.x = 1950;
    a->_end->rect_explo.left = 0;
    a->_end->rect_hokage.left = 0;
    a->_end->rect_daidara.left = 0;
    a->_lvl1->rect_nauto.left = 0;
}