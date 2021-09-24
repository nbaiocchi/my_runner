##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## M
##

SRC		=	./src/my_runner.c						\
			./src/window/my_window.c				\
			./src/window/redirection_stat.c			\
			./src/window/cursor.c					\
			./src/window/redirection.c				\
			./src/window/redirection_second.c		\
			./src/create/create.c					\
			./src/create/malloc.c					\
			./src/create/rect.c						\
			./src/create/texte.c					\
			./src/create/rect_second.c				\
			./src/create/variable.c					\
			./src/create/variable2.c				\
			./src/create/sprite.c					\
			./src/create/sprite_2.c					\
			./src/create/sprite_3.c					\
			./src/create/music.c					\
			./src/create/clock.c					\
			./src/create/maps.c						\
			./src/create/destroy.c					\
			./src/create/fonction.c					\
			./src/create/fonction2.c				\
			./src/lvl/menu.c						\
			./src/lvl/champ_select.c				\
			./src/lvl/rect_champ_select.c			\
			./src/lvl/paralax.c						\
			./src/lvl/paralax_2.c					\
			./src/lvl/naruto.c						\
			./src/lvl/rect_naruto.c					\
			./src/lvl/rect_itachi.c					\
			./src/lvl/itachi.c						\
			./src/lvl/kyubi.c						\
			./src/lvl/rect_kyubi.c					\
			./src/lvl/rect_jiraya.c					\
			./src/lvl/jiraya.c						\
			./src/lvl/mouvement.c					\
			./src/lvl/level.c						\
			./src/lvl/rect_parchemin.c				\
			./src/lvl/end.c							\
			./src/lvl/pause.c						\
			./src/lvl/pos_end.c						\
			./src/maps/obstacles.c					\
			./src/maps/maplvl2.c					\
			./src/maps/pos_maplvl2.c				\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-W -Wall -Wextra -g

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:	fclean all