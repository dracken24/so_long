/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures_p1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:59:44 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/06 17:36:16 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	init_p1(t_game *game)
{
	init_textures_p1_idle(game);
}

void	init_textures_p1_idle(t_game *game)
{
	int	x;
	int	y;
	
	if (game->ct.ct_idle.p1_dir == 1)
		game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
				"./imgs/p1/idle/p1_idle_up_0.xpm", &x, &y);
	if (game->ct.ct_idle.p1_dir == 2)
		game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
				"./imgs/p1/idle/p1_idle_do_0.xpm", &x, &y);
	if (game->ct.ct_idle.p1_dir == 3)
		game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
				"./imgs/p1/idle/p1_idle_lft_0.xpm", &x, &y);
	if (game->ct.ct_idle.p1_dir == 4)
		game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
				"./imgs/p1/idle/p1_idle_ri_0.xpm", &x, &y);
}
