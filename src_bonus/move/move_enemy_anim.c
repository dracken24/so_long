/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy_anim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:20:53 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 15:25:11 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	enemy_move_ri(t_game *game, int x, int y)
{
	x -= game->tile_size;
	if (game->ct.ct_idle.en_dir == 10)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.ri.m00, x, y);
	if (game->ct.ct_idle.en_dir == 11)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.ri.m01, x, y);
	if (game->ct.ct_idle.en_dir == 12)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.ri.m02, x, y);
	if (game->ct.ct_idle.en_dir == 13)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.ri.m03, x, y);
	if (game->ct.ct_idle.en_dir == 14)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.ri.m04, x, y);
	game->ct.ct_idle.en_dir++;
	if (game->ct.ct_idle.en_dir == 16)
		game->ct.ct_idle.en_dir = 4;
}

void	enemy_move_lft(t_game *game, int x, int y)
{
	if (game->ct.ct_idle.en_dir == 20)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.lft.m00, x, y);
	if (game->ct.ct_idle.en_dir == 21)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.lft.m01, x, y);
	if (game->ct.ct_idle.en_dir == 22)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.lft.m02, x, y);
	if (game->ct.ct_idle.en_dir == 23)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.lft.m03, x, y);
	if (game->ct.ct_idle.en_dir == 24)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.lft.m04, x, y);
	game->ct.ct_idle.en_dir++;
	if (game->ct.ct_idle.en_dir == 26)
		game->ct.ct_idle.en_dir = 3;
}

void	enemy_move_up(t_game *game, int x, int y)
{
	if (game->ct.ct_idle.en_dir == 30)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.up.m00, x, y);
	if (game->ct.ct_idle.en_dir == 31)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.up.m01, x, y);
	if (game->ct.ct_idle.en_dir == 32)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.up.m02, x, y);
	if (game->ct.ct_idle.en_dir == 33)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.up.m03, x, y);
	if (game->ct.ct_idle.en_dir == 34)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.up.m04, x, y);
	game->ct.ct_idle.en_dir++;
	if (game->ct.ct_idle.en_dir == 36)
		game->ct.ct_idle.en_dir = 1;
}

void	enemy_move_do(t_game *game, int x, int y)
{
	y -= game->tile_size;
	if (game->ct.ct_idle.en_dir == 40)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.down.m00, x, y);
	if (game->ct.ct_idle.en_dir == 41)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.down.m01, x, y);
	if (game->ct.ct_idle.en_dir == 42)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.down.m02, x, y);
	if (game->ct.ct_idle.en_dir == 43)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.down.m03, x, y);
	if (game->ct.ct_idle.en_dir == 44)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.down.m04, x, y);
	game->ct.ct_idle.en_dir++;
	if (game->ct.ct_idle.en_dir == 46)
		game->ct.ct_idle.en_dir = 2;
}
