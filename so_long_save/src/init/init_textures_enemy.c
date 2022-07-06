/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures_enemy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:07:37 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/06 17:36:22 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

void	init_enemy(t_game *game)
{
	init_textures_en1_idle(game);
}

void	init_textures_en1_idle(t_game *game)
{
	int x;
	int y;
	
	if (game->ct.ct_idle.en_dir == 1)
		game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
				"./imgs/enemy/idle/enemy_idle_up_0.xpm", &x, &y);
	if (game->ct.ct_idle.en_dir == 2) 
		game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
				"./imgs/enemy/idle/enemy_idle_do_0.xpm", &x, &y);
	if (game->ct.ct_idle.en_dir == 3)
		game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
				"./imgs/enemy/idle/enemy_idle_lft_0.xpm", &x, &y);
	if (game->ct.ct_idle.en_dir == 4)
		game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
				"./imgs/enemy/idle/enemy_idle_ri_0.xpm", &x, &y);
}
