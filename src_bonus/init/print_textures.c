/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_textures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:47:37 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/08 13:42:52 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	put_texture_1(t_game *game)
{
	int	x;
	int	y;

	game->ct.i = -1;
	while (++game->ct.i < game->len.len_map_y)
	{
		game->ct.k = -1;
		while (++game->ct.k < game->len.len_map_x)
		{
			x = game->ct.k * game->tile_size;
			y = game->ct.i * game->tile_size;
			put_texture_2(game, x, y);
		}
	}
	game->ct.i = game->len.len_map_y * game->tile_size;
	while (++game->ct.i < game->len.len_map_y * game->tile_size + 24)
	{
		game->ct.k = -1;
		while (++game->ct.k < game->len.len_map_x * game->tile_size)
			mlx_pixel_put(game->mlx, game->window,
				game->ct.k, game->ct.i, 904085);
	}
	return (1);
}

void	put_texture_2(t_game *game, int x, int y)
{
	if (game->map_0[game->ct.i][game->ct.k] == '1')
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.img_pt.img_wall, x, y);
	if (game->map_0[game->ct.i][game->ct.k] == '0')
	{
		if (game->ct.ct_idle.p1_dir >= 20 && game->ct.ct_idle.p1_dir < 26)
			game->test = 0;
		else if (game->ct.ct_idle.p1_dir >= 30 && game->ct.ct_idle.p1_dir < 36)
			game->test = 0;
		else if (game->ct.ct_idle.en_dir >= 20 && game->ct.ct_idle.en_dir < 26)
			game->test = 0;
		else if (game->ct.ct_idle.en_dir >= 30 && game->ct.ct_idle.en_dir < 36)
			game->test = 0;
		else
			mlx_put_image_to_window(game->mlx, game->window,
				game->img.img_pt.img_floor, x, y);
	}
	put_texture_suite(game, x, y);
}

void	put_texture_suite(t_game *game, int x, int y)
{
	if (game->map_0[game->ct.i][game->ct.k] == 'E')
	{
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.img_pt.img_exit, x, y);
	}
	if (game->map_0[game->ct.i][game->ct.k] == 'P')
	{
		if (game->ct.ct_idle.p1_dir < 10)
			change_idle_p1(game, x, y);
		else
		{
			if (game->ct.ct_idle.p1_dir >= 10 && game->ct.ct_idle.p1_dir < 20)
				p1_move_ri(game, x, y);
			if (game->ct.ct_idle.p1_dir >= 20 && game->ct.ct_idle.p1_dir < 30)
				p1_move_lft(game, x, y);
			if (game->ct.ct_idle.p1_dir >= 30 && game->ct.ct_idle.p1_dir < 40)
				p1_move_up(game, x, y);
			if (game->ct.ct_idle.p1_dir >= 40 && game->ct.ct_idle.p1_dir < 50)
				p1_move_do(game, x, y);
		}
	}
	put_texture_suite2(game, x, y);
}

void	put_texture_suite2(t_game *game, int x, int y)
{
	if (game->map_0[game->ct.i][game->ct.k] == 'Z')
	{
		if (game->ct.ct_idle.en_dir < 10)
			change_idle_enemy(game, x, y);
		else
		{
			if (game->ct.ct_idle.en_dir >= 10 && game->ct.ct_idle.en_dir < 20)
				enemy_move_ri(game, x, y);
			if (game->ct.ct_idle.en_dir >= 20 && game->ct.ct_idle.en_dir < 30)
				enemy_move_lft(game, x, y);
			if (game->ct.ct_idle.en_dir >= 30 && game->ct.ct_idle.en_dir < 40)
				enemy_move_up(game, x, y);
			if (game->ct.ct_idle.en_dir >= 40 && game->ct.ct_idle.en_dir < 50)
				enemy_move_do(game, x, y);
		}
	}
	if (game->map_0[game->ct.i][game->ct.k] == 'C')
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.img_pt.img_take, x, y);
	if (game->map_0[game->ct.i][game->ct.k] == 'B')
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.img_pt.img_block, x, y);
}
