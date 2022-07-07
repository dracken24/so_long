/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p1_anim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:41:14 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 14:03:11 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	p1_init_ri(t_game *game)
{
	int	x;
	int	y;

	game->img.p1.ri.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_0.xpm", &x, &y);
	game->img.p1.ri.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_1.xpm", &x, &y);
	game->img.p1.ri.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_2.xpm", &x, &y);
	game->img.p1.ri.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_3.xpm", &x, &y);
	game->img.p1.ri.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_4.xpm", &x, &y);
}

void	p1_init_lft(t_game *game)
{
	int	x;
	int	y;

	game->img.p1.lft.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_0.xpm", &x, &y);
	game->img.p1.lft.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_1.xpm", &x, &y);
	game->img.p1.lft.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_2.xpm", &x, &y);
	game->img.p1.lft.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_3.xpm", &x, &y);
	game->img.p1.lft.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_4.xpm", &x, &y);
}

void	p1_init_up(t_game *game)
{
	int	x;
	int	y;

	game->img.p1.up.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_0.xpm", &x, &y);
	game->img.p1.up.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_1.xpm", &x, &y);
	game->img.p1.up.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_2.xpm", &x, &y);
	game->img.p1.up.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_3.xpm", &x, &y);
	game->img.p1.up.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_4.xpm", &x, &y);
}

void	p1_init_do(t_game *game)
{
	int	x;
	int	y;

	game->img.p1.down.m00 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_0.xpm", &x, &y);
	game->img.p1.down.m01 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_1.xpm", &x, &y);
	game->img.p1.down.m02 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_2.xpm", &x, &y);
	game->img.p1.down.m03 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_3.xpm", &x, &y);
	game->img.p1.down.m04 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_4.xpm", &x, &y);
}
