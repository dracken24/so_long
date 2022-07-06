/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p1_anim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:41:14 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/06 17:35:48 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	p1_move(t_game *game)
{
	if (game->ct.ct_idle.p1_dir == 5)
		p1_move_ri(game);
	if (game->ct.ct_idle.p1_dir == 6)
		p1_move_lft(game);
	if (game->ct.ct_idle.p1_dir == 7)
		p1_move_up(game);
	if (game->ct.ct_idle.p1_dir == 8)
		p1_move_do(game);
}

void	p1_move_ri(t_game *game)
{
	int	x;
	int	y;
	
	ft_printf("P1; ri\n");
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_ri/p1_mov_ri_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("P1; ri\n");
}

void	p1_move_lft(t_game *game)
{
	int x;
	int y;
	
	ft_printf("P1; lft\n");
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_lft/p1_mov_lft_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("P1; lft\n");
}

void	p1_move_up(t_game *game)
{
	int x;
	int y;
	
	ft_printf("P1; up\n");
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_up/p1_mov_up_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("P1; up\n");
}

void	p1_move_do(t_game *game)
{
	int x;
	int y;
	
	ft_printf("P1; do\n");
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_p1 = mlx_xpm_file_to_image(game->mlx,
			"./imgs/p1/move_do/p1_mov_do_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("P1; do\n");
}
