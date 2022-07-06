/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:59:51 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/06 13:01:39 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	xpm_to_imgs(t_game *game)
{
	int	x;
	int	y;

	init_p1(game);
	init_enemy(game);
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
	ft_printf("VOID_First: %p\n", game->img.img_pt.img_wall);
}

int	update(t_game *game)
{
	char	*ct;
	int		x;
	int		y;
	
	// ft_printf("-------------- ---------------- -----------\n");
	ct = ft_itoa(game->ct.ct);
	x = game->len.len_map_x * game->tile_size / 2 - 24;
	y = game->len.len_map_y * game->tile_size + 16;
	mlx_string_put(game->mlx, game->window, x - 24, y, 000000, "Moves:");
	mlx_string_put(game->mlx, game->window, x + 18, y, 000000, ct);
	return (0);
}

void	init_game(t_game *game)
{
	int	x;
	int	y;

	x = game->len.len_map_x * game->tile_size;
	y = game->len.len_map_y * game->tile_size;
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx, x, y + 24, "so_long");
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
	game->img.pos_img.x = 0;
	game->img.pos_img.y = 0;
	game->ct.ct_enemy = 0;
	game->ct.ct_idle.p1_dir = 2;
	game->ct.ct_idle.en_dir = 2;
	game->speed_time = 1.0f;
}
