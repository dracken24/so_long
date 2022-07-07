/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy_anim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:27:22 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 14:03:38 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	enemy_init_ri(t_game *game)
{
	int	x;
	int	y;

	game->img.en.ri.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_0.xpm", &x, &y);
	game->img.en.ri.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_1.xpm", &x, &y);
	game->img.en.ri.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_2.xpm", &x, &y);
	game->img.en.ri.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_3.xpm", &x, &y);
	game->img.en.ri.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_4.xpm", &x, &y);
}

void	enemy_init_lft(t_game *game)
{
	int	x;
	int	y;

	game->img.en.lft.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_0.xpm", &x, &y);
	game->img.en.lft.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_1.xpm", &x, &y);
	game->img.en.lft.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_2.xpm", &x, &y);
	game->img.en.lft.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_3.xpm", &x, &y);
	game->img.en.lft.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_4.xpm", &x, &y);
}

void	enemy_init_up(t_game *game)
{
	int	x;
	int	y;

	game->img.en.up.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_0.xpm", &x, &y);
	game->img.en.up.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_1.xpm", &x, &y);
	game->img.en.up.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_2.xpm", &x, &y);
	game->img.en.up.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_3.xpm", &x, &y);
	game->img.en.up.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_4.xpm", &x, &y);
}

void	enemy_init_do(t_game *game)
{
	int	x;
	int	y;

	game->img.en.down.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_0.xpm", &x, &y);
	game->img.en.down.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_1.xpm", &x, &y);
	game->img.en.down.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_2.xpm", &x, &y);
	game->img.en.down.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_3.xpm", &x, &y);
	game->img.en.down.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_4.xpm", &x, &y);
}
