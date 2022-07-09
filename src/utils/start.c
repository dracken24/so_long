/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:59:51 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/08 21:30:16 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	xpm_to_imgs(t_game *game)
{
	int	x;
	int	y;

	init_p1(game);
	game->img.img_pt.img_floor = mlx_xpm_file_to_image(game->mlx,
			"./imgs/floor.xpm", &x, &y);
	game->img.img_pt.img_wall = mlx_xpm_file_to_image(game->mlx,
			"./imgs/wall.xpm", &x, &y);
	game->img.img_pt.img_exit = mlx_xpm_file_to_image(game->mlx,
			"./imgs/exit.xpm", &x, &y);
	game->img.img_pt.img_take = mlx_xpm_file_to_image(game->mlx,
			"./imgs/take.xpm", &x, &y);
	game->img.img_pt.img_block = mlx_xpm_file_to_image(game->mlx,
			"./imgs/break.xpm", &x, &y);
}

int	update(t_game *game)
{
	put_texture_1(game);
	return (0);
}

void	find_hammer(t_game *game)
{
	int	i;
	int	k;

	i = -1;
	while (game->map_0[++i])
	{
		k = -1;
		while (game->map_0[i][++k])
		{
			if (game->map_0[i][k] == 'C')
				game->take.nbr_hammer++;
			if (game->map_0[i][k] == 'P')
				game->ct.nbr_p1++;
			if (game->map_0[i][k] == 'E')
				game->ct.nbr_exit++;
		}
	}
	if (game->ct.nbr_exit > 1 || game->ct.nbr_p1 > 1)
	{
		ft_printf("Error, doublons\n");
		free(game->map_0);
		exit (0);
	}
}

void	init_game(t_game *game)
{
	int	x;
	int	y;

	x = game->len.len_map_x * game->tile_size;
	y = game->len.len_map_y * game->tile_size;
	find_hammer(game);
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx, x, y, "so_long");
	ft_printf("MOVEMENTS: 0\n");
	xpm_to_imgs(game);
	put_texture_1(game);
	mlx_key_hook(game->window, key_press_p1, game);
	mlx_loop_hook(game->mlx, update, game);
	mlx_hook(game->window, 17, 0, quit_x, game);
	mlx_loop(game->mlx);
}

void	init_var(t_game *game)
{
	game->tile_size = 64;
	game->ct.ct = 0;
	game->ct.nbr_exit = 0;
	game->ct.error = 0;
	game->img.pos_img.x = 0;
	game->img.pos_img.y = 0;
	game->ct.ct_idle.p1_dir = 2;
	game->ct.move_p1 = 0;
	game->take.nbr_hammer = 0;
	game->take.hammer = 0;
}
