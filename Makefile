# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 12:00:19 by nadesjar          #+#    #+#              #
#    Updated: 2022/07/07 14:11:00 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_RED		=$(shell tput -Txterm setaf 1)
LIGHT_GREEN		=$(shell tput -Txterm setaf 2)
LIGHT_BROWN		=$(shell tput -Txterm setaf 3)
CYAN			=$(shell tput -Txterm setaf 4)
LILAS			=$(shell tput -Txterm setaf 5)
LIGHT_CYAN		=$(shell tput -Txterm setaf 6)
WHITE			=$(shell tput -Txterm setaf 7)
RESET			="\033[0m"

PATH_OBJS 		= ./objs/
PATH_SRC		= ./src/
PATH_INIT		= ./src/init/
PATH_KILL		= ./src/kill/
PATH_MOVE		= ./src/move/
PATH_UTILS		= ./src/utils/
PATH_GNL		= ./src/get_next_line/

FILES	 		= $(PATH_SRC)so_long.c \
				$(PATH_GNL)get_next_line_bonus.c $(PATH_GNL)get_next_line_utils_bonus.c \
				$(PATH_UTILS)start.c $(PATH_UTILS)utils.c \
				$(PATH_INIT)print_textures.c $(PATH_INIT)init_textures_p1.c  $(PATH_INIT)init_enemy.c \
				$(PATH_INIT)init_textures_enemy.c $(PATH_INIT)init_p1_anim.c \
				$(PATH_MOVE)key_pressed.c $(PATH_MOVE)move_p1.c \
				$(PATH_MOVE)move_enemy_anim.c $(PATH_MOVE)move_p1_anim.c \
				$(PATH_KILL)kill.c \

OBJS 			= $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(FILES)) \

CC 				= gcc
FLAGS 			= -Wall -Wextra
MLXFLAG_MAC 	= -framework OpenGl -framework Cocoa
MLXFLAG_LINUX	= -lbsd -lXext -lX11

LIBX_A_MAC 		= libs/minilibx_opengl/libmlx.a
LIBX_A_LINUX 	= libs/minilibx-linux/libmlx.a

NAME 			= so-long

PRINTF			= make_lib
PRINTF_A		= ft_printf/libftprintf.a

REMOVE			= ./ft_printf/*.o ./ft_printf/libft/atoitoa/*.o ./ft_printf/libft/is/*.o \
				./ft_printf/libft/lst/*.o ./ft_printf/libft/math/*.o \
				./ft_printf/libft/mem_alloc/*.o ./ft_printf/libft/mem_move/*.o \
				./ft_printf/libft/str/*.o ./ft_printf/*.a ./ft_printf/libft/*.a \
				./src/*.o so_long gcc solong \
				./libs/mlx_linux/*.a ./libs/minilibx_opengl/libmlx.a \

all: $(PRINTF) $(NAME)

$(NAME): $(OBJS)
	@echo $(LILAS)"COMPILE MOI CE SO_LONG LA..."$(RESET)
	cp $(LIBX_A_MAC) $(NAME)
	gcc $(NAME) $(OBJS) $(LIBX_A_MAC) $(PRINTF_A) $(FLAGS) $(MLXFLAG_MAC) -o so_long
	@echo $(LIGHT_GREEN)"MALADE CA A COMPILER :)"$(RESET)
	./so_long map/map_01.ber

$(PATH_OBJS)%.o:	$(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)init
	@mkdir -p $(PATH_OBJS)kill
	@mkdir -p $(PATH_OBJS)move
	@mkdir -p $(PATH_OBJS)utils
	@mkdir -p $(PATH_OBJS)get_next_line
	$(CC) $(FLAGS) -I. -c $< -o $@

make_lib:
	$(MAKE) -C ./ft_printf
	$(MAKE) -C ./libs/minilibx_opengl

push:
	@(git add .)
	@(git commit -m "nadesjar42")
	@(git push)

pull:
	@(git pull)

clean:
	@rm -f $(OBJS) $(REMOVE)
	@rm -fr ./objs
	@echo $(LIGHT_GREEN)"BYE BYE"$(RESET)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.Phony: all make_lib obj push pull clean fclean re
