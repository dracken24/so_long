/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:33:03 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/23 14:23:30 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	swap_tiles(int key_code, t_game *game)
{
	find_player(game);
	swap_x(key_code, game);
	swap_y(key_code, game);
	game->ct.i = -1;
	while (++game->ct.i < game->len.len_map_y)
		ft_printf("%s", game->map_0[game->ct.i]);
	ft_printf("MOVEMENTS: %d\n", game->ct.ct);
}

void	swap_x(int key_code, t_game *game)
{
	int	x;
	int	y;

	x = game->p1_x;
	y = game->p1_y;
	if ((game->map_0[y][x + 1] == '0' || game->map_0[y][x + 1] == 'Z'
			|| game->map_0[y][x + 1] == 'E')
			&& (key_code == KEY_LIN_D || key_code == KEY_MAC_D))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y][x + 1] = CASE_P;
		game->ct.ct += 1;
	}
	if ((game->map_0[y][x - 1] == '0' || game->map_0[y][x - 1] == 'Z'
			|| game->map_0[y][x - 1] == 'E')
			&& (key_code == KEY_LIN_A || key_code == KEY_MAC_A))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y][x - 1] = CASE_P;
		game->ct.ct += 1;
	}
}

void	swap_y(int key_code, t_game *game)
{
	int	x;
	int	y;

	x = game->p1_x;
	y = game->p1_y;
	if ((game->map_0[y - 1][x] == '0' || game->map_0[y - 1][x] == 'Z'
			|| game->map_0[y - 1][x] == 'E')
			&& (key_code == KEY_LIN_W || key_code == KEY_MAC_W))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y - 1][x] = CASE_P;
		game->ct.ct += 1;
	}
	if ((game->map_0[y + 1][x] == '0' || game->map_0[y + 1][x] == 'Z'
			|| game->map_0[y + 1][x] == 'E')
			&& (key_code == KEY_LIN_S || key_code == KEY_MAC_S))
	{
		game->map_0[y][x] = CASE_0;
		game->map_0[y + 1][x] = CASE_P;
		game->ct.ct += 1;
	}
}

void	collect(t_game *game)
{
	find_player(game);
	if (game->map_0[game->p1_y][game->p1_x + 1] == 'C')
	{
		game->map_0[game->p1_y][game->p1_x + 1] = CASE_0;
		game->take.hammer = 1;
	}
	if (game->map_0[game->p1_y][game->p1_x - 1] == 'C')
	{
		game->map_0[game->p1_y][game->p1_x - 1] = CASE_0;
		game->take.hammer = 1;
	}
	if (game->map_0[game->p1_y + 1][game->p1_x] == 'C')
	{
		game->map_0[game->p1_y + 1][game->p1_x] = CASE_0;
		game->take.hammer = 1;
	}
	if (game->map_0[game->p1_y - 1][game->p1_x] == 'C')
	{
		game->map_0[game->p1_y - 1][game->p1_x] = CASE_0;
		game->take.hammer = 1;
	}
}

void	openn(t_game *game)
{
	find_player(game);
	if (game->map_0[game->p1_y][game->p1_x + 1] == 'B'
		&& game->take.hammer == 1)
	{
		game->map_0[game->p1_y][game->p1_x + 1] = CASE_0;
	}
	if (game->map_0[game->p1_y][game->p1_x - 1] == 'B'
		&& game->take.hammer == 1)
	{
		game->map_0[game->p1_y][game->p1_x - 1] = CASE_0;
	}
	if (game->map_0[game->p1_y + 1][game->p1_x] == 'B'
		&& game->take.hammer == 1)
	{
		game->map_0[game->p1_y + 1][game->p1_x] = CASE_0;
	}
	if (game->map_0[game->p1_y - 1][game->p1_x] == 'B'
		&& game->take.hammer == 1)
	{
		game->map_0[game->p1_y - 1][game->p1_x] = CASE_0;
	}
}
