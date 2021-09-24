/*
** EPITECH PROJECT, 2020
** my_runner.c
** File description:
** t
*/

#include "../include/prototype.h"

void start_game(v_var *a)
{
    open_window(a);
    while (sfRenderWindow_isOpen(a->_window->window)) {
        a->_window->mouse = sfMouse_getPosition((sfWindow *)a->_window->window);
        sfWindow_setMouseCursorVisible((sfWindow *)a->_window->window, sfFalse);
        my_pool_event(a);
        if (a->stat == 0) {
            menu(a);
        }
        if (a->stat == 1) {
            champ_select(a);
        }
        if (a->stat == 2) {
            level_one(a);
        }
        if (a->stat == 3) {
            level_two(a);
        }
    }
    destroy(a);
}

void take_arg(v_var *a, char **av)
{
    int i = my_strlen(av[1]);

    a->path = malloc(sizeof(char) * (100));
    if (av[1][0] == '-' && av[1][1] == 'h')
        description();
    else {
        a->path = av[1];
    }
    a->path[i] = '\0';
}

void description(void)
{
    my_putstr("USAGE\n./my_runner map/map1.txt\n\n");
    my_putstr("USER INTERACTIONS\nSPACE_KEY        jump.\n");
    my_putstr("A_KEY            attack.\n");
    my_putstr("M_KEY            return game to menu.\n");
    my_putstr("P_KEY            pause the game.\n");
    my_putstr("Enter_KEY        resume the game.\n");
}

int wrong_arg(void)
{
    my_putstr("./my_runner: bad arguments: 0 given but 1 is required");
    my_putchar('\n');
    my_putstr("retry with -h");
    my_putchar('\n');
    my_putstr("84");
    my_putchar('\n');
    return (0);
}

int main(int ac, char **av)
{
    srand(time(NULL));
    v_var *a = malloc(sizeof(v_var));

    if (ac == 2) {
        take_arg(a, av);
    } else {
        wrong_arg();
        return (0);
    }
    my_create(a);
    sfMusic_play(a->_music->music_menu);
    sfMusic_setVolume(a->_music->music_menu, a->_music->volume);
    sfMusic_setLoop(a->_music->music_menu, sfTrue);
    if (ac == 2 && av[1][1] == 'h') {
        my_free(a);
        return (0);
    }
    start_game(a);
    my_free(a);
    return (0);
}