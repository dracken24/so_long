/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:24:29 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/12 18:28:25 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./src/get_next_line/get_next_line_bonus.h"
# include "./ft_printf/ft_printf.h"
# include "imgs.h"
// # include "./libs/minilibx_opengl/mlx.h"
// # include "./libs/minilibx_opengl/mlx_int.h"
# include "../libs/minilibx-linux/mlx.h"
# include "../libs/minilibx-linux/mlx_int.h"
# include <stdarg.h>
# include <math.h>
# include <stdlib.h>

typedef enum s_keyboard{
	KEY_A = 97,
	KEY_D = 100,
	KEY_S = 115,
	KEY_W = 119,
	KEY_E = 101,
	KEY_SPACE = 32,
	KEY_ESC = 65307,

	// KEY_A = 0,
	// KEY_D = 2,
	// KEY_S = 1,
	// KEY_W = 13,
	// KEY_E = 14,
	// KEY_SPACE = 49,
	// KEY_ESC = 53,
} t_keyboard;

typedef enum s_mouse{
	MOUSE_BUTTON_LEFT = 0,
	MOUSE_BUTTON_RIGHT = 1,
	MOUSE_BUTTON_MIDDLE = 2,
} t_mouse;

typedef struct s_take{
	int			hammer;
}	t_take;

typedef struct s_ct_dir{
	int			p1_dir;
	int			en_dir;
}	t_ct_dir;

typedef struct s_ct{
	int			i;
	int			k;
	int			ii;
	int			kk;
	int			ct;
	int			ct_enemy;
	float		time;
	t_ct_dir	ct_idle;
}	t_ct;

typedef struct s_len{
	int			len;
	int			len_map_x;
	int			len_map_y;
}	t_len;

typedef struct s_game{
	void		*mlx;
	void		*window;
	char		**map_0;
	char		**tmp;
	char		*str;
	char		*letters;
	float		time;
	int			tile_size;
	int			p1_x;
	int			p1_y;
	t_ct		ct;
	t_len		len;
	t_take		take;
	t_vector2	enemy_pos;
}	t_game;

// GAME

void			check_exit(int key_code, t_game *game, t_image *img);
void			swap_tiles(int key_code, t_game *game, t_image *img);
void			check_entry(int entry, char **name, t_game *game);
void			kill_game(t_game *game, t_image *img, char *str);
void			delta_time(t_game *game, t_image *img, int nbr);
void			update_move(t_game *game, t_image *img);
void			init_game(t_game *game, t_image *img);
void			init_var(t_game *game, t_image *img);
void			collect(t_game *game);
void			kill_p1(t_game *game, t_image *img);
void			save_len(t_game *game, char *name);
void			openn(t_game *game);
void			save_map(t_game *game, char *fd);
void			find_player(t_game *game);
void			check_rect(t_game *game);


int				enemy_move(t_game *game, t_image *img);
int				check_name(t_game *game, char *name);
int				update(t_game *game, t_image *img);

// MOVES
void			move_enemy_x(t_game *game, t_image *img, int x, int y);
void			move_enemy_y(t_game *game, t_image *img, int x, int y);
void			move_x(int key_code, t_game *game, t_image *img);
void			move_y(int key_code, t_game *game, t_image *img);

void			p1_move_lft(t_game *game, t_image *img);
void			p1_move_up(t_game *game, t_image *img);
void			p1_move_do(t_game *game, t_image *img);
void			p1_move_ri(t_game *game, t_image *img);
void			p1_move(t_game * game, t_image *img);

void			enemy_move_anim(t_game * game, t_image *img);
void			enemy_move_lft(t_game *game, t_image *img);
void			enemy_move_ri(t_game *game, t_image *img);
void			enemy_move_up(t_game *game, t_image *img);
void			enemy_move_do(t_game *game, t_image *img);

int				key_press_p1(int key_code, t_game *game, t_image *img);

// IMAGES
void			put_texture_2(t_game *game, t_image *img, int x, int y);
void			init_textures_p1_idle(t_game *game, t_image *img);
void			put_pix(t_game *game, t_image *img, int color);
void			init_p1(t_game *game, t_image *img);

void			init_textures_en1_idle(t_game *game, t_image *img);
void			init_enemy(t_game *game, t_image *img);

int				put_texture_1(t_game *game, t_image *img);

#endif
