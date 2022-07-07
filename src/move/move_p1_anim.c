/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p1_anim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:07:06 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 14:27:42 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	p1_move_ri(t_game *game, int x, int y)
{
	x -= game->tile_size;
	if (game->ct.ct_idle.p1_dir == 10)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.ri.m00, x, y);
	if (game->ct.ct_idle.p1_dir == 11)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.ri.m01, x, y);
	if (game->ct.ct_idle.p1_dir == 12)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.ri.m02, x, y);
	if (game->ct.ct_idle.p1_dir == 13)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.ri.m03, x, y);	
	if (game->ct.ct_idle.p1_dir == 14)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.ri.m04, x, y);
	game->ct.ct_idle.p1_dir++;
	if (game->ct.ct_idle.p1_dir == 16)
	{
		game->ct.wait = 0;
		game->ct.ct_idle.p1_dir = 4;
	}
}

void	p1_move_lft(t_game *game, int x, int y)
{
	if (game->ct.ct_idle.p1_dir == 20)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.lft.m00, x, y);
	if (game->ct.ct_idle.p1_dir == 21)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.lft.m01, x, y);
	if (game->ct.ct_idle.p1_dir == 22)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.lft.m02, x, y);
	if (game->ct.ct_idle.p1_dir == 23)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.lft.m03, x, y);	
	if (game->ct.ct_idle.p1_dir == 24)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.lft.m04, x, y);
	game->ct.ct_idle.p1_dir++;
	if (game->ct.ct_idle.p1_dir == 26)
	{
		game->ct.wait = 0;
		game->ct.ct_idle.p1_dir = 3;
	}
}

void	p1_move_up(t_game *game, int x, int y)
{
	if (game->ct.ct_idle.p1_dir == 30)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.up.m00, x, y);
	if (game->ct.ct_idle.p1_dir == 31)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.up.m01, x, y);
	if (game->ct.ct_idle.p1_dir == 32)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.up.m02, x, y);
	if (game->ct.ct_idle.p1_dir == 33)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.up.m03, x, y);	
	if (game->ct.ct_idle.p1_dir == 34)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.up.m04, x, y);
	game->ct.ct_idle.p1_dir++;
	if (game->ct.ct_idle.p1_dir == 36)
	{
		game->ct.wait = 0;
		game->ct.ct_idle.p1_dir = 1;
	}
}

void	p1_move_do(t_game *game, int x, int y)
{
	y -= game->tile_size;
	if (game->ct.ct_idle.p1_dir == 40)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.down.m00, x, y);
	if (game->ct.ct_idle.p1_dir == 41)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.down.m01, x, y);
	if (game->ct.ct_idle.p1_dir == 42)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.down.m02, x, y);
	if (game->ct.ct_idle.p1_dir == 43)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.down.m03, x, y);	
	if (game->ct.ct_idle.p1_dir == 44)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.down.m04, x, y);
	game->ct.ct_idle.p1_dir++;
	if (game->ct.ct_idle.p1_dir == 46)
	{
		game->ct.wait = 0;
		game->ct.ct_idle.p1_dir = 2;
	}
}
