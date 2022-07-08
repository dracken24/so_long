/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures_p1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:59:44 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 14:22:39 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	init_p1(t_game *game)
{
	init_textures_p1_idle(game);
	p1_init_up(game);
	p1_init_do(game);
	p1_init_lft(game);
	p1_init_ri(game);
}

void	init_textures_p1_idle(t_game *game)
{
	int	x;
	int	y;

	game->img.p1.idle.idle_up = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/idle/p1_idle_up_0.xpm", &x, &y);
	game->img.p1.idle.idle_do = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/idle/p1_idle_do_0.xpm", &x, &y);
	game->img.p1.idle.idle_lft = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/idle/p1_idle_lft_0.xpm", &x, &y);
	game->img.p1.idle.idle_ri = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/idle/p1_idle_ri_0.xpm", &x, &y);
}

void	change_idle_p1(t_game *game, int x, int y)
{
	if (game->ct.ct_idle.p1_dir == 1)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.idle.idle_up, x, y);
	if (game->ct.ct_idle.p1_dir == 2)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.idle.idle_do, x, y);
	if (game->ct.ct_idle.p1_dir == 3)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.idle.idle_lft, x, y);
	if (game->ct.ct_idle.p1_dir == 4)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.p1.idle.idle_ri, x, y);
}
