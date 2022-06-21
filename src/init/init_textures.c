/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:47:37 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/12 01:43:15 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	put_texture_1(t_game *game, t_image *img)
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
			put_texture_2(game, img, x, y);
		}
	}
	game->ct.i = game->len.len_map_y * game->tile_size;
	while (++game->ct.i < game->len.len_map_y * game->tile_size + 24)
	{
		game->ct.k = -1;
		while (++game->ct.k < game->len.len_map_x * game->tile_size)
			mlx_pixel_put(game->mlx, game->window, game->ct.k, game->ct.i, 904085);
	}
	return (1);
}

void	put_texture_2(t_game *game, t_image *img, int x, int y)
{
	if (game->map_0[game->ct.i][game->ct.k] == '1')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_wall, x, y);	
	if (game->map_0[game->ct.i][game->ct.k] == '0')
	{
		if (game->ct.ct_idle.en_dir == 5 || game->ct.ct_idle.en_dir == 6
				|| game->ct.ct_idle.en_dir == 7 || game->ct.ct_idle.en_dir == 8)
			game->ct.ii = 0;
		else if (game->ct.ct_idle.p1_dir == 5 || game->ct.ct_idle.p1_dir == 6
				|| game->ct.ct_idle.p1_dir == 7 || game->ct.ct_idle.p1_dir == 8)
			game->ct.ii = 0;
		else
			mlx_put_image_to_window(game->mlx, game->window,
				img->img_pt.img_floor, x, y);
	}
	if (game->map_0[game->ct.i][game->ct.k] == 'E')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_exit, x, y);
	if (game->map_0[game->ct.i][game->ct.k] == 'P')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_p1, x, y);
	if (game->map_0[game->ct.i][game->ct.k] == 'Z')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_enemy, x, y);
	if (game->map_0[game->ct.i][game->ct.k] == 'C')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_take, x, y);
	if (game->map_0[game->ct.i][game->ct.k] == 'B')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_block, x, y);
}
