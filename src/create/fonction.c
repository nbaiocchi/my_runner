/*
** EPITECH PROJECT, 2020
** fonction.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x = x + 1;
    }
    return (0);
}

char *my_convert_int(int nb)
{
    int a = 0;
    int x = 0;
    int nb2 = 0;
    int tmp = nb;
    char *str;

    count(&tmp, &a);
    str = malloc(sizeof(char) * (a + 5));
    while (nb > 0) {
        nb2 = nb % 10;
        nb = nb / 10;
        str[x] = nb2 + 48;
        x += 1;
        nb2 = 0;
    }
    str[x] = '\0';
    my_revstr(str);
    return (str);
}

int my_strlen(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        x++;
    }
    return (x);
}

char *my_revstr(char *str)
{
    int x = 0;
    int t = 0;
    int b = 0;

    while (str[x] != '\0') {
        x++;
    }
    x--;
    while ( x >= b ) {

        t = str[x];
        str[x] = str[b];
        str[b] = t;

        x--;
        b++;
    }
    return (str);
}