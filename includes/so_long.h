/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:24:29 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/06 12:50:22 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./src/get_next_line/get_next_line_bonus.h"
# include "./ft_printf/ft_printf.h"
# include "imgs.h"
# include "./libs/minilibx_opengl/mlx.h"
// # include "../libs/minilibx-linux/mlx.h"
# include <stdarg.h>
# include <math.h>
# include <stdlib.h>

typedef enum s_keyboard {
	KEY_LIN_A = 97,
	KEY_LIN_D = 100,
	KEY_LIN_S = 115,
	KEY_LIN_W = 119,
	KEY_LIN_E = 101,
	KEY_LIN_SPACE = 32,
	KEY_LIN_ESC = 65307,
	KEY_MAC_A = 0,
	KEY_MAC_D = 2,
	KEY_MAC_S = 1,
	KEY_MAC_W = 13,
	KEY_MAC_E = 14,
	KEY_MAC_SPACE = 49,
	KEY_MAC_ESC = 53,
}	t_keyboard;

typedef enum s_letters {
	CASE_0 = '0',
	CASE_1 = '1',
	CASE_P = 'P',
	CASE_C = 'C',
	CASE_E = 'E',
	CASE_B = 'B',
	CASE_Z = 'Z',
}	t_letters;

typedef struct s_take {
	int			hammer;
}	t_take;

typedef struct s_ct_dir {
	int			p1_dir;
	int			en_dir;
}	t_ct_dir;

typedef struct s_ct {
	int			i;
	int			k;
	int			ii;
	int			kk;
	int			ct;
	int			error;
	int			ct_enemy;
	float		time;
	t_ct_dir	ct_idle;
}	t_ct;

typedef struct s_len {
	int			len;
	int			len_map_x;
	int			len_map_y;
}	t_len;

typedef struct s_game {
	void		*mlx;
	void		*window;
	char		**map_0;
	char		**tmp;
	char		*str;
	float		speed_time;
	int			tile_size;
	int			test;
	int			p1_x;
	int			p1_y;
	int			m;
	t_ct		ct;
	t_len		len;
	t_take		take;
	t_vector2	enemy_pos;
	t_image		img;
}	t_game;

// GAME

void			put_texture_suite(t_game *game, int x, int y);
void			check_entry(int entry, char **name, t_game *game);
void			delta_time(t_game *game, int nbr);
void			update_move(t_game *game);
void			swap_tiles(int key_code, t_game *game);
void			kill_imgs(t_game *game);
void			init_game(t_game *game);
void			init_var(t_game *game);
void			kill_p1(t_game *game);
void			save_len(t_game *game, char *name);
void			swap_x(int key_code, t_game *game);
void			swap_y(int key_code, t_game *game);
void			save_map(t_game *game, char *fd);
void			check_board(t_game *game);
void			find_player(t_game *game);
void			check_rect(t_game *game);
void			collect(t_game *game);
void			openn(t_game *game);

int				kill_game(t_game *game, char *str);
int				check_name(t_game *game, char *name);
int				update(t_game *game);
int				quit_x(t_game *game);

// MOVES
void			move_enemy_x(t_game *game, int x, int y);
void			move_enemy_y(t_game *game, int x, int y);
void			move_x_lft(int key_code, t_game *game);
void			move_x_ri(int key_code, t_game *game);
void			move_y_up(int key_code, t_game *game);
void			move_y_do(int key_code, t_game *game);

void			p1_move_lft(t_game *game);
void			p1_move_up(t_game *game);
void			p1_move_do(t_game *game);
void			p1_move_ri(t_game *game);
void			p1_move(t_game *game);

void			enemy_move_anim(t_game *game);
void			enemy_move_lft(t_game *game);
void			enemy_move_ri(t_game *game);
void			enemy_move_up(t_game *game);
void			enemy_move_do(t_game *game);

int				key_press_p1(int key_code, t_game *game);
int				enemy_move(t_game *game);

// IMAGES
void			put_texture_2(t_game *game, int x, int y);
void			init_textures_p1_idle(t_game *game);
void			put_pix(t_game *game, int color);
void			init_p1(t_game *game);

void			init_textures_en1_idle(t_game *game);
void			change_idle_enemy(t_game *game, int x, int y);
void			change_idle_p1(t_game *game, int x, int y);
void			init_enemy(t_game *game);

void			xpm_to_imgs(t_game *game);

int				put_texture_1(t_game *game);

#endif
