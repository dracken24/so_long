/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:47:37 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/27 16:17:40 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	put_texture_1(t_game *game, t_image *img)
{
	int	x;
	int	y;

	game->ct.i = -1;
	ft_printf("PUT_T_1: 1\n");
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
	ft_printf("PUT_T_1: 2\n");
	game->ct.i = game->len.len_map_y * game->tile_size;
	while (++game->ct.i < game->len.len_map_y * game->tile_size + 24)
	{
		game->ct.k = -1;
		while (++game->ct.k < game->len.len_map_x * game->tile_size)
			mlx_pixel_put(game->mlx, game->window,
				game->ct.k, game->ct.i, 904085);
	}
	return (1);
}

void	put_texture_2(t_game *game, t_image *img, int x, int y)
{
	ft_printf("PUT_T_2: 0\n");
	if (game->map_0[game->ct.i][game->ct.k] == '1')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_wall, x, y);
	ft_printf("PUT_T_2: 1\n");
	if (game->map_0[game->ct.i][game->ct.k] == '0')
	{
		// if (game->ct.ct_idle.en_dir == 5 || game->ct.ct_idle.en_dir == 6
		// 	|| game->ct.ct_idle.en_dir == 7 || game->ct.ct_idle.en_dir == 8)
		// 	game->ct.ii = 0;
		// else if (game->ct.ct_idle.p1_dir == 5 || game->ct.ct_idle.p1_dir == 6
		// 	|| game->ct.ct_idle.p1_dir == 7 || game->ct.ct_idle.p1_dir == 8)
		// 	game->ct.ii = 0;
		
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_floor, x, y);
	}
	ft_printf("PUT_T_2: 2\n");
	put_texture_suite(game, img, x, y);
}

void	put_texture_suite(t_game *game, t_image *img, int x, int y)
{
	ft_printf("PUT_T_SUI: 1\n");
	if (game->map_0[game->ct.i][game->ct.k] == 'E')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_exit, x, y);
			ft_printf("PUT_T_2: 2\n");
	if (game->map_0[game->ct.i][game->ct.k] == 'P')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_p1, x, y);
			ft_printf("PUT_T_2: 3\n");
	if (game->map_0[game->ct.i][game->ct.k] == 'Z')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_enemy, x, y);
			ft_printf("PUT_T_2: 4\n");
	if (game->map_0[game->ct.i][game->ct.k] == 'C')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_take, x, y);
			ft_printf("PUT_T_2: 5\n");
	if (game->map_0[game->ct.i][game->ct.k] == 'B')
		mlx_put_image_to_window(game->mlx, game->window,
			img->img_pt.img_block, x, y);
			ft_printf("PUT_T_2: 6\n");
}
