/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:33:03 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 20:58:38 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"


void	swap_x_ri(int key_code, t_game *game)
{
	int	x;
	int	y;

	x = game->p1_x;
	y = game->p1_y;
	if ((game->map_0[y][x + 1] == '0' || game->map_0[y][x + 1] == 'E'
			|| game->map_0[y][x + 1] == 'B' || game->map_0[y][x + 1] == 'C')
			&& (key_code == KEY_LIN_D || key_code == KEY_MAC_D))
	{
		if (game->map_0[y][x + 1] == 'B'
				&& game->take.hammer == game->take.nbr_hammer)
		{
			game->map_0[y][x] = CASE_0;
			game->map_0[y][x + 1] = CASE_P;
			game->ct.ct += 1;
		}
		else if (game->map_0[y][x + 1] != 'B')
		{
			if (game->map_0[y][x + 1] == 'C')
				game->take.hammer++;
			game->map_0[y][x] = CASE_0;
			game->map_0[y][x + 1] = CASE_P;
			game->ct.ct += 1;
		}
	}
	
}

void	swap_x_lft(int key_code, t_game *game)
{
	int	x;
	int	y;

	x = game->p1_x;
	y = game->p1_y;
	if ((game->map_0[y][x - 1] == '0' || game->map_0[y][x - 1] == 'E'
			|| game->map_0[y][x - 1] == 'B' || game->map_0[y][x - 1] == 'C')
			&& (key_code == KEY_LIN_A || key_code == KEY_MAC_A))
	{
		if (game->map_0[y][x - 1] == 'B'
				&& game->take.hammer == game->take.nbr_hammer)
		{
			game->map_0[y][x] = CASE_0;
			game->map_0[y][x - 1] = CASE_P;
			game->ct.ct += 1;
		}
		else if (game->map_0[y][x - 1] != 'B')
		{
			if (game->map_0[y][x - 1] == 'C')
				game->take.hammer++;
			game->map_0[y][x] = CASE_0;
			game->map_0[y][x - 1] = CASE_P;
			game->ct.ct += 1;
		}
	}
}

void	swap_y_up(int key_code, t_game *game)
{
	int	x;
	int	y;

	x = game->p1_x;
	y = game->p1_y;
	if ((game->map_0[y - 1][x] == '0' || game->map_0[y - 1][x] == 'E'
			|| game->map_0[y - 1][x] == 'C' || game->map_0[y - 1][x] == 'B')
			&& (key_code == KEY_LIN_W || key_code == KEY_MAC_W))
	{
		if (game->map_0[y - 1][x] == 'B'
				&& game->take.hammer == game->take.nbr_hammer)
		{
			game->map_0[y][x] = CASE_0;
			game->map_0[y - 1][x] = CASE_P;
			game->ct.ct += 1;
		}
		else if (game->map_0[y - 1][x] != 'B')
		{
			if (game->map_0[y - 1][x] == 'C')
				game->take.hammer++;
			game->map_0[y][x] = CASE_0;
			game->map_0[y - 1][x] = CASE_P;
			game->ct.ct += 1;
		}
	}
}

void	swap_y_do(int key_code, t_game *game)
{
	int	x;
	int	y;

	x = game->p1_x;
	y = game->p1_y;
	if ((game->map_0[y + 1][x] == '0' || game->map_0[y + 1][x] == 'E'
			|| game->map_0[y + 1][x] == 'C' || game->map_0[y + 1][x] == 'B')
			&& (key_code == KEY_LIN_S || key_code == KEY_MAC_S))
	{
		if (game->map_0[y + 1][x] == 'B'
				&& game->take.hammer == game->take.nbr_hammer)
		{
			game->map_0[y][x] = CASE_0;
			game->map_0[y + 1][x] = CASE_P;
			game->ct.ct += 1;
		}
		else if (game->map_0[y + 1][x] != 'B')
		{	
			if (game->map_0[y + 1][x] == 'C')
				game->take.hammer++;
			game->map_0[y][x] = CASE_0;
			game->map_0[y + 1][x] = CASE_P;
			game->ct.ct += 1;
		}
	}
}

void	swap_tiles(int key_code, t_game *game)
{
	find_player(game);
	swap_x_ri(key_code, game);
	swap_x_lft(key_code, game);
	swap_y_up(key_code, game);
	swap_y_do(key_code, game);
	ft_printf("MOVEMENTS: %d\n", game->ct.ct);
}
