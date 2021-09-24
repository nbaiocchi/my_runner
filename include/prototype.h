/*
** EPITECH PROJECT, 2020
** prototype.h
** File description:
** t
*/

#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*............... structure ...............*/

typedef struct s_window
{
    sfRenderWindow *window;
    sfEvent event;
    sfVector2i mouse;

    sfTexture* t_cursor;
    sfSprite* s_cursor;
    sfIntRect rect_cursor;
    sfVector2f pos_cursor;
} t_window;

typedef struct s_menu
{
    sfTexture* t_menu;
    sfSprite* s_menu;
    sfIntRect rect_menu;
    sfVector2f pos_menu;
    sfTexture* t_kunai;
    sfIntRect rect_kunai;
    sfSprite* s_kunai;
    sfVector2f pos_kunai;
    sfSprite* s_kunai2;
    sfVector2f pos_kunai2;
    sfSprite* s_kunai3;
    sfVector2f pos_kunai3;
    sfTexture* t_on;
    sfSprite* s_on;
    sfIntRect rect_on;
    sfVector2f pos_on;
    sfTexture* t_off;
    sfSprite* s_off;
    sfIntRect rect_off;
    sfVector2f pos_off;
    sfTexture* t_parchemin;
    sfSprite* s_parchemin;
    sfIntRect rect_parchemin;
    sfVector2f pos_parchemin;
    sfClock *clockp;
    int parchemin;
    sfVector2f size;

    sfText *score;
    sfFont *font;
    char *str;
    int sco;
    sfVector2f pose_score;
} t_menu;

typedef struct s_music
{
    sfMusic *music_menu;
    sfMusic *music_select;
    float volume;
    float volume2;
    sfMusic *music_lvl2;
    float volume3;
    float volume4;

    sfSound *jump;
    sfSoundBuffer *bjump;
} t_music;

typedef struct s_select
{
    sfTexture* t_black;
    sfSprite* s_black;
    sfIntRect rect_black;
    sfVector2f pos_black;

    sfTexture* t_itachi;
    sfSprite* s_itachi;
    sfIntRect rect_itachi;
    sfVector2f pos_itachi;

    sfTexture* t_naruto;
    sfSprite* s_naruto;
    sfIntRect rect_naruto;
    sfVector2f pos_naruto;

    sfTexture* t_jiraya;
    sfSprite* s_jiraya;
    sfIntRect rect_jiraya;
    sfVector2f pos_jiraya;

    sfTexture* t_board;
    sfSprite* s_board;
    sfIntRect rect_board;
    sfVector2f pos_board;

    sfVector2f pos_board2;
    sfSprite* s_board2;
    sfClock *clock;
    sfClock *clock2;
    sfClock *clock3;
    float second;
    sfTime time;
    sfVector2f size;
    int champ;
} t_select;

typedef struct s_paralax1
{
    sfTexture* t_para1;
    sfSprite* s_para1;
    sfIntRect rect_para1;
    sfVector2f pos_para1;
    sfTexture* t_para2;
    sfSprite* s_para2;
    sfIntRect rect_para2;
    sfVector2f pos_para2;
    sfTexture* t_para3;
    sfSprite* s_para3;
    sfIntRect rect_para3;
    sfVector2f pos_para3;
    sfTexture* t_para4;
    sfSprite* s_para4;
    sfIntRect rect_para4;
    sfVector2f pos_para4;
    sfClock *clock;
    sfClock *clock2;
    sfClock *clock3;

    sfTexture* t_1para1;
    sfSprite* s_1para1;
    sfIntRect rect_1para1;
    sfVector2f pos_1para1;

    sfTexture* t_2para2;
    sfSprite* s_2para2;
    sfIntRect rect_2para2;
    sfVector2f pos_2para2;

    sfTexture* t_3para3;
    sfSprite* s_3para3;
    sfIntRect rect_3para3;
    sfVector2f pos_3para3;

    sfTexture* t_4para4;
    sfSprite* s_4para4;
    sfIntRect rect_4para4;
    sfVector2f pos_4para4;

    sfClock *clock_1;
    sfClock *clock2_2;
    sfClock *clock3_3;
} t_paralax1;

typedef struct s_lvl1
{
    int jump;
    sfTexture* t_nauto;
    sfSprite* s_nauto;
    sfIntRect rect_nauto;
    sfVector2f pos_nauto;
    sfClock *clock;

    sfTexture* t_itachi;
    sfSprite* s_itachi;
    sfIntRect rect_itachi;
    sfVector2f pos_itachi;
    sfClock *clock2;

    sfTexture* t_njump;
    sfSprite* s_njump;
    sfIntRect rect_njump;
    sfVector2f pos_njump;
    sfClock *clockjn;

    sfTexture* t_ijump;
    sfSprite* s_ijump;
    sfIntRect rect_ijump;
    sfVector2f pos_ijump;
    sfClock *clockji;

    sfVector2f size;
    sfTime time;
} t_lvl1;

typedef struct s_lvl2
{
    int jump;
    int poing;
    int dis;
    int dis2;
    sfTexture* t_kyubi;
    sfSprite* s_kyubi;
    sfIntRect rect_kyubi;
    sfVector2f pos_kyubi;
    sfClock *clock;
    sfTexture* t_jiraya;
    sfSprite* s_jiraya;
    sfIntRect rect_jiraya;
    sfVector2f pos_jiraya;
    sfClock *clock2;
    sfTexture* t_kjump;
    sfSprite* s_kjump;
    sfIntRect rect_kjump;
    sfVector2f pos_kjump;
    sfClock *clockjk;
    sfTexture* t_jjump;
    sfSprite* s_jjump;
    sfIntRect rect_jjump;
    sfVector2f pos_jjump;
    sfClock *clockjj;

    sfTexture* t_kpoing;
    sfSprite* s_kpoing;
    sfIntRect rect_kpoing;
    sfVector2f pos_kpoing;
    sfClock *clockp;

    sfTexture* t_jpoing;
    sfSprite* s_jpoing;
    sfIntRect rect_jpoing;
    sfVector2f pos_jpoing;
    sfClock *clockp2;

    sfTime time;
} t_lvl2;

typedef struct s_map
{
    int i;
    int z;
    int y;
    int allea;
    sfTexture* t_bamboo;
    sfIntRect rect_bamboo;
    sfVector2f *pos_bamboo;
    sfSprite* *s_bamboo;

    sfClock *clock;
    sfTexture* t_boid;
    sfIntRect rect_boid;
    sfVector2f *pos_boid;
    sfSprite* *s_boid;
    sfClock *clockb;
    sfVector2f size;

    sfTexture* t_caillou;
    sfSprite* s_caillou;
    sfIntRect rect_caillou;
    sfVector2f pos_caillou;
    sfClock *clockc;

    sfTexture* t_pupet;
    sfSprite* s_pupet;
    sfIntRect rect_pupet;
    sfVector2f pos_pupet;
    sfClock *clockp;

    sfTexture* t_heart;
    sfSprite* s_heart;
    sfIntRect rect_heart;
    sfVector2f pos_heart;
    sfClock *clockh;
} t_map;

typedef struct s_end
{
    int daid;
    int bombe;
    int win;

    sfTexture* t_daidara;
    sfIntRect rect_daidara;
    sfVector2f pos_daidara;
    sfSprite* s_daidara;
    sfClock *clockd;
    sfClock *clockd2;

    sfTexture* t_bombe;
    sfIntRect rect_bombe;
    sfVector2f pos_bombe;
    sfSprite* s_bombe;
    sfClock *clockb;

    sfTexture* t_explo;
    sfIntRect rect_explo;
    sfVector2f pos_explo;
    sfSprite* s_explo;
    sfClock *clocke;

    sfTexture* t_par;
    sfIntRect rect_par;
    sfVector2f pos_par;
    sfSprite* s_par;
    sfClock *clockp;

    sfTexture* t_hokage;
    sfIntRect rect_hokage;
    sfVector2f pos_hokage;
    sfSprite* s_hokage;
    sfClock *clockh;

    sfVector2f size;
    sfVector2f size2;
} t_end;

typedef struct v_variable
{
    int stat;
    int death;
    int s;
    int lvl;
    int score;
    char *path;
    char *map;
    int sco;
    int pause;
    sfTime sleep;

    t_window *_window;
    t_menu *_menu;
    t_music *_music;
    t_select *_select;
    t_paralax1 *_paralax1;
    t_lvl1 *_lvl1;
    t_lvl2 *_lvl2;
    t_map *_map;
    t_end *_end;
} v_var;

/*............... my_runner.c ...............*/

void start_game(v_var *a);
void take_arg(v_var *a, char **av);
int wrong_arg(void);
int main(int ac, char **av);

/*............... redirection_stat.c ...............*/

void menu(v_var *a);
void champ_select(v_var *a);
void level_one(v_var *a);
void level_two(v_var *a);

/*............... my_window.c ...............*/

void open_window(v_var *a);
void my_pool_event(v_var *a);
void display(v_var *a);

/*............... level.c ...............*/

void level_2(v_var *a);
void level_3(v_var *a);
void level_3_bis(v_var *a);

/*............... malloc.c ...............*/

void my_malloc_struct(v_var *a);
void my_free(v_var *a);


/*............... create.c ...............*/

void my_create(v_var *a);

/*............... menu.c ...............*/

void my_menu(v_var *a);
void display_menu(v_var *a);
void display_menu_second(v_var *a);
void my_parchemin(v_var *a);
void display_parchemin(v_var *a);

/*............... rect_parchemin.c ...............*/

void rect_parchemin(v_var *a);

/*............... rect.c ...............*/

void my_rect(v_var *a);
void my_rect2(v_var *a);
void my_rect3(v_var *a);
void my_rect4(v_var *a);
void my_rect5(v_var *a);

/*............... rect_second.c ...............*/

void my_rect6(v_var *a);
void my_rect7(v_var *a);
void my_rect8(v_var *a);
void my_rect9(v_var *a);
void my_rect10(v_var *a);

/*............... sprite.c ...............*/

void my_sprite(v_var *a);
void my_sprite_second(v_var *a);
void my_sprite_third(v_var *a);
void my_sprite_fourth(v_var *a);
void my_sprite_five(v_var *a);

/*............... variable.c ...............*/

void my_variable(v_var *a);
void my_variable2(v_var *a);
void my_variable3(v_var *a);
void my_variable4(v_var *a);
void my_variable5(v_var *a);
void my_variable6(v_var *a);
void my_variable7(v_var *a);

/*............... music.c ...............*/

int my_music(v_var *a);
void sound_off(v_var *a);
void sound_on(v_var *a);

/*............... champ_select.c ...............*/

void my_champ_select(v_var *a);
void diplay_champ_select(v_var *a);
void display_champ_select2(v_var *a);

/*............... redirection.c ...............*/

void my_redirection(v_var *a);
void my_redirection_second(v_var *a);
void event_mousepress(v_var *a);
void return_menu(v_var *a);

/*............... redirection_second.c ...............*/

void go_to_lvl1(v_var *a);
void go_to_lvl2(v_var *a);

/*............... clock.c ...............*/

void my_clock(v_var *a);
void my_clock2(v_var *a);

/*............... cursor.c ...............*/

void my_cursor(v_var *a);
void display_cursor(v_var *a);

/*............... paralax.c ...............*/

void my_paralax1(v_var *a);
void display_paralax1(v_var *a);
void rect_para2(v_var *a);
void rect_para3(v_var *a);
void rect_para4(v_var *a);
void rect_4para4(v_var *a);

/*............... paralax_2.c ...............*/

void my_paralax2(v_var *a);
void display_paralax2(v_var *a);
void rect_2para2(v_var *a);
void rect_3para3(v_var *a);

/*............... naruto.c ...............*/

void my_naruto(v_var *a);
void display_naruto(v_var *a);
void check_colision(v_var *a);
void display_jump_naruto(v_var *a);

/*............... rect_naruto.c ...............*/

void rect_naruto(v_var *a);
void rect_jump_naruto(v_var *a);

/*............... itachi.c ...............*/

void my_itachi(v_var *a);
void display_itachi(v_var *a);

/*............... rect_itachi.c ...............*/

void rect_itachi(v_var *a);
void rect_jump_itachi(v_var *a);
void display_jump_itachi(v_var *a);

/*............... kyubi.c ...............*/

void my_kyubi(v_var *a);
void display_kyubi(v_var *a);
void display_jump_kyubi(v_var *a);
void display_poing_kyubi(v_var *a);

/*............... rect_kyubi.c ...............*/

void rect_kyubi(v_var *a);
void rect_jump_kyubi(v_var *a);
void rect_poing_kyubi(v_var *a);

/*............... jiraya.c ...............*/

void my_jiraya(v_var *a);
void display_jiraya(v_var *a);
void display_jump_jiraya(v_var *a);
void display_poing_jiraya(v_var *a);

/*............... rect_jiraya.c ...............*/

void rect_jiraya(v_var *a);
void rect_jump_jiraya(v_var *a);
void display_jump_jiraya(v_var *a);
void rect_poing_jiraya(v_var *a);

/*............... sprit_2.c ...............*/

void my_sprite_six(v_var *a);
void my_sprite_seven(v_var *a);
void my_sprite_height(v_var *a);
void my_sprite_nine(v_var *a);
void my_sprite_ten(v_var *a);

/*............... sprit_3.c ...............*/

void my_sprite_eleven(v_var *a);
void my_sprite_twelve(v_var *a);
void my_sprite_thirteen(v_var *a);

/*............... mouvement.c ...............*/

void mouvement_sprite(v_var *a);
void mouvement_sprite2(v_var *a);
void return_menu_from_game(v_var *a);
void return_menu_from_game2(v_var *a);
void reinisialisation(v_var *a);

/*............... rect_champ_select.c ...............*/

void select_rect(v_var *a);
void select_rect_naruto(v_var *a);
void select_rect_jiraya(v_var *a);

/*............... maps.c ...............*/

int my_maps(v_var *a);
void my_maps_pos(v_var *a);
void my_maps_pos2(v_var *a);
void my_maps_pos_r(v_var *a);
void reset_v(v_var *a);

/*............... obstacles.c ...............*/

void my_obstacles(v_var *a);
void display_obstacles(v_var *a);
void my_pos_obstacle(v_var *a);
void my_pos_obstacle2(v_var *a);
void my_pos_obstacle3(v_var *a);

/*............... fonction.c ...............*/

void my_putchar(char c);
int my_putstr(char const *str);
char *my_convert_int(int nb);
int my_strlen(char const *str);
char *my_revstr(char *str);
void count(int *tmp, int *a);

/*............... destroy.c ...............*/

void destroy(v_var *a);
void destroy2(v_var *a);
void destroy3(v_var *a);
void destroy4(v_var *a);
void destroy5(v_var *a);

/*............... end.c ...............*/

void my_end(v_var *a);
void display_end(v_var *a);
void display_end2(v_var *a);
void my_win(v_var *a);
void display_win(v_var *a);

/*............... pos_end.c ...............*/

void pos_bombe(v_var *a);
void rect_explo(v_var *a);
void pos_daidara(v_var *a);
void rect_daidara(v_var *a);
void rect_hokage(v_var *a);

/*............... maplvl2.c ...............*/

void my_maplvl2(v_var *a);
void display_maplvl2(v_var *a);
void my_score(v_var *a);

/*............... pos_maplvl2.c ...............*/

void pos_obstaclelvl2(v_var *a);
void pos_pupet(v_var *a);
void pos_heart(v_var *a);

/*............... texte.c ...............*/

void my_text(v_var *a);

/*............... pause.c ...............*/

void my_pause(v_var *a);
void description(void);

#endif /* !PROTOTYPE_H_ */
