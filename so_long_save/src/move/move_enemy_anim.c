/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy_anim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:27:22 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/06 17:35:58 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	enemy_move_anim(t_game *game)
{
	if (game->ct.ct_idle.en_dir == 5)
		enemy_move_ri(game);
	if (game->ct.ct_idle.en_dir == 6)
		enemy_move_lft(game);
	if (game->ct.ct_idle.en_dir == 7)
		enemy_move_up(game);
	if (game->ct.ct_idle.en_dir == 8)
		enemy_move_do(game);
}

void	enemy_move_ri(t_game *game)
{
	int	x;
	int	y;
	
	ft_printf("ENEMY; ri\n");
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_ri/enemy_move_ri_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("ENEMY; ri\n");
}

void	enemy_move_lft(t_game *game)
{
	int	x;
	int	y;
	
	ft_printf("ENEMY; lft\n");
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_lft/enemy_move_lft_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("ENEMY; lft\n");
}

void	enemy_move_up(t_game *game)
{
	int	x;
	int	y;
	
	ft_printf("ENEMY; up\n");
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_up/enemy_move_up_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("ENEMY; up\n");
}

void	enemy_move_do(t_game *game)
{
	int	x;
	int	y;
	
	ft_printf("ENEMY; do\n");
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_0.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_1.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_2.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_3.xpm", &x, &y);
	delta_time(game, game->speed_time);
	game->img.img_pt.img_enemy = mlx_xpm_file_to_image(game->mlx,
			"./imgs/enemy/move_do/enemy_move_do_4.xpm", &x, &y);
	delta_time(game, game->speed_time);
	ft_printf("ENEMY; do\n");
}
