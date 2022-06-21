/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:59:51 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/12 18:26:47 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

static void	init_text(t_image *img)
{
	
	img->name.floor = "./imgs/floor.xpm";
	img->name.wall = "./imgs/wall.xpm";
	img->name.exit = "./imgs/exit.xpm";
	img->name.take = "./imgs/take.xpm";
	img->name.block = "./imgs/break.xpm";
}

static void	xpm_to_imgs(t_game *game, t_image *img)
{
	int	x;
	int	y;

	x = game->tile_size;
	y = game->tile_size;
	init_p1(game, img);
	init_enemy(game, img);
	img->img_pt.img_floor = mlx_xpm_file_to_image(game->mlx, img->name.floor, &x, &y);
	img->img_pt.img_wall = mlx_xpm_file_to_image(game->mlx, img->name.wall, &x, &y);
	img->img_pt.img_exit = mlx_xpm_file_to_image(game->mlx, img->name.exit, &x, &y);
	img->img_pt.img_take = mlx_xpm_file_to_image(game->mlx, img->name.take, &x, &y);
	img->img_pt.img_block = mlx_xpm_file_to_image(game->mlx, img->name.block,&x, &y);
}

int update(t_game *game, t_image *img)
{
	char	*ct;
	int		x;
	int		y;

	ct = ft_itoa(game->ct.ct);
	x = game->len.len_map_x * game->tile_size / 2 - 24;
	y = game->len.len_map_y * game->tile_size + 16;
	init_text(img);
	xpm_to_imgs(game, img);
	put_texture_1(game, img);
	mlx_string_put(game->mlx, game->window, x - 24, y, 000000, "Moves:");
	mlx_string_put(game->mlx, game->window, x + 18, y, 000000, ct);
	return (0);
}

void init_game(t_game *game, t_image *img)
{
	game->mlx = mlx_init();

	game->window = mlx_new_window(game->mlx, game->len.len_map_x * game->tile_size,
			game->len.len_map_y * game->tile_size + 24, "YO MADAFAKA");
	update(game, img);

	mlx_hook(game->window, 2, 1L << 0, key_press_p1, (void *)game);

	mlx_loop(game->mlx);
}

void	init_var(t_game *game, t_image *img)
{
	game->tile_size = 64;
	game->ct.ct = 0;
	game->letters = ft_calloc(sizeof(char), 8);
	img->pos_img.x = 0;
	img->pos_img.y = 0;
	game->ct.ct_enemy = 0;
	game->ct.ct_idle.p1_dir = 2;
	game->ct.ct_idle.en_dir = 2;
	game->time = 3.5f;
	if (!game->letters)
	{
		free(game->map_0);
		free(game->letters);
		exit (0);
	}
	game->letters[0] = '0';
	game->letters[1] = '1';
	game->letters[2] = 'P';
	game->letters[3] = 'C';
	game->letters[4] = 'E';
	game->letters[5] = 'B';
	game->letters[6] = 'Z';
	game->letters[7] = '\0';
	ft_printf("len_x: %d len_y: %d\n", game->len.len_map_x, game->len.len_map_y);
}
