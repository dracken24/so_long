/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:32:54 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/20 00:56:42 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	enemy_move(t_game *game, t_image *img)
{
	int	x;
	int	y;

	find_player(game);
	x = game->enemy_pos.x;
	y = game->enemy_pos.y;
	move_enemy_x(game, img, x, y);
	move_enemy_y(game, img, x, y);
	return (0);
}

void	move_enemy_x(t_game *game, t_image *img, int x, int y)
{
	int	ct;

	ct = game->ct.ct + game->p1_x * game->m;
	if ((game->map_0[y][x + 1] == '0' || game->map_0[y][x + 1] == 'P')
			&& (ct % 30 == 3 || ct % 30 == 14 || ct % 30 == 30))
	{
		game->ct.ct_idle.en_dir = 5;
		enemy_move_anim(game, img);
		game->map_0[y][x] = CASE_0;
		game->map_0[y][x + 1] = CASE_Z;
		game->ct.ct_idle.en_dir = 4;
	}
	if ((game->map_0[y][x - 1] == '0' || game->map_0[y][x - 1] == 'P')
			&& (ct % 30 == 9 || ct % 30 == 8 || ct % 30 == 24))
	{
		game->ct.ct_idle.en_dir = 6;
		game->map_0[y][x] = CASE_0;
		game->map_0[y][x - 1] = CASE_Z;
		enemy_move_anim(game, img);
		game->ct.ct_idle.en_dir = 3;
	}
}

void	move_enemy_y(t_game *game, t_image *img, int x, int y)
{
	int	ct;

	ct = game->ct.ct + game->p1_x * game->m;
	if ((game->map_0[y - 1][x] == '0' || game->map_0[y - 1][x] == 'P')
			&& (ct % 30 == 6 || ct % 30 == 12 || ct % 30 == 28))
	{
		game->ct.ct_idle.en_dir = 7;
		game->map_0[y][x] = CASE_0;
		game->map_0[y - 1][x] = CASE_Z;
		enemy_move_anim(game, img);
		game->ct.ct_idle.en_dir = 1;
	}
	if ((game->map_0[y + 1][x] == '0' || game->map_0[y + 1][x] == 'P')
			&& (ct % 30 == 1 || ct % 30 == 19 || ct % 30 == 22))
	{
		game->ct.ct_idle.en_dir = 8;
		enemy_move_anim(game, img);
		game->map_0[y][x] = CASE_0;
		game->map_0[y + 1][x] = CASE_Z;
		game->ct.ct_idle.en_dir = 2;
	}
}
