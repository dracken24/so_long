/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures_enemy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:07:37 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/28 16:38:17 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

void	init_enemy(t_game *game, t_image *img)
{
	init_textures_en1_idle(game, img);
}

void	init_textures_en1_idle(t_game *game, t_image *img)
{
	int	x;
	int	y;

	img->en.idle.idle_up = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_up_0.xpm", &x, &y);
	img->en.idle.idle_do = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_do_0.xpm", &x, &y);
	img->en.idle.idle_lft = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_lft_0.xpm", &x, &y);
	img->en.idle.idle_ri = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/idle/enemy_idle_ri_0.xpm", &x, &y);
}

void	change_idle_enemy(t_game *game, t_image *img)
{
	if (game->ct.ct_idle.en_dir == 1)
		img->img_pt.img_enemy = img->en.idle.idle_up;
	if (game->ct.ct_idle.en_dir == 2)
		img->img_pt.img_enemy = img->en.idle.idle_do;
	if (game->ct.ct_idle.en_dir == 3)
		img->img_pt.img_enemy = img->en.idle.idle_lft;
	if (game->ct.ct_idle.en_dir == 4)
		img->img_pt.img_enemy = img->en.idle.idle_ri;
}
