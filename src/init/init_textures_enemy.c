/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures_enemy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:07:37 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 14:22:30 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

void	init_enemy(t_game *game)
{
	init_textures_en1_idle(game);
	enemy_init_up(game);
	enemy_init_do(game);
	enemy_init_lft(game);
	enemy_init_ri(game);
}

void	init_textures_en1_idle(t_game *game)
{
	int	x;
	int	y;

	game->img.en.idle.idle_up = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_up_0.xpm", &x, &y);
	game->img.en.idle.idle_do = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_do_0.xpm", &x, &y);
	game->img.en.idle.idle_lft = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_lft_0.xpm", &x, &y);
	game->img.en.idle.idle_ri = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_ri_0.xpm", &x, &y);
}

void	change_idle_enemy(t_game *game, int x, int y)
{
	if (game->ct.ct_idle.en_dir == 1)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.idle.idle_up, x, y);
	if (game->ct.ct_idle.en_dir == 2)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.idle.idle_do, x, y);
	if (game->ct.ct_idle.en_dir == 3)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.idle.idle_lft, x, y);
	if (game->ct.ct_idle.en_dir == 4)
		mlx_put_image_to_window(game->mlx, game->window,
			game->img.en.idle.idle_ri, x, y);
}
