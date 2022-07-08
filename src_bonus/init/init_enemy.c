/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_enemy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:32:54 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 14:21:19 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	enemy_move(t_game *game)
{
	int	x;
	int	y;

	find_player(game);
	x = game->enemy_pos.x;
	y = game->enemy_pos.y;
	move_enemy_x(game, x, y);
	move_enemy_y(game, x, y);
	return (0);
}

void	move_enemy_x(t_game *game, int x, int y)
{
	int	ct;

	ct = game->ct.ct + game->p1_x + game->p1_y;
	if ((game->map_0[y][x + 1] == '0' || game->map_0[y][x + 1] == 'P')
			&& (ct % 30 == 3 || ct % 30 == 14 || ct % 30 == 30))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y][x + 1] = CASE_Z;
		game->ct.ct_idle.en_dir = 10;
	}
	if ((game->map_0[y][x - 1] == '0' || game->map_0[y][x - 1] == 'P')
			&& (ct % 30 == 9 || ct % 30 == 8 || ct % 30 == 24))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y][x - 1] = CASE_Z;
		game->ct.ct_idle.en_dir = 20;
	}
}

void	move_enemy_y(t_game *game, int x, int y)
{
	int	ct;

	ct = game->ct.ct + game->p1_x + game->p1_y;
	if ((game->map_0[y - 1][x] == '0' || game->map_0[y - 1][x] == 'P')
			&& (ct % 30 == 7 || ct % 30 == 13 || ct % 30 == 27))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y - 1][x] = CASE_Z;
		game->ct.ct_idle.en_dir = 30;
	}
	if ((game->map_0[y + 1][x] == '0' || game->map_0[y + 1][x] == 'P')
			&& (ct % 30 == 1 || ct % 30 == 19 || ct % 30 == 22))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y + 1][x] = CASE_Z;
		game->ct.ct_idle.en_dir = 40;
	}
}
