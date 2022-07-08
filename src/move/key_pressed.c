/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:58:50 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/08 12:14:57 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	key_press_p1(int key_code, t_game *game)
{
	find_player(game);
	if (key_code == KEY_MAC_ESC || key_code == KEY_LIN_ESC)
	{
		kill_game(game, "Merci d'avoir joué !!!\n");
	}
	move_x_lft(key_code, game);
	move_x_ri(key_code, game);
	move_y_up(key_code, game);
	move_y_do(key_code, game);
	return (0);
}

void	move_x_ri(int key_code, t_game *game)
{
	if ((key_code == KEY_MAC_D || key_code == KEY_LIN_D)
		&& (game->map_0[game->p1_y][game->p1_x + 1] == '0'
		|| game->map_0[game->p1_y][game->p1_x + 1] == 'C'
		|| game->map_0[game->p1_y][game->p1_x + 1] == 'B'
		|| game->map_0[game->p1_y][game->p1_x + 1] == 'E'))
	{
		if (game->map_0[game->p1_y][game->p1_x + 1] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, "GOOD JOB, YOU DID IT !!!!\n");
		}
		swap_tiles(key_code, game);
	}
}

void	move_x_lft(int key_code, t_game *game)
{
	if ((key_code == KEY_MAC_A || key_code == KEY_LIN_A)
		&& (game->map_0[game->p1_y][game->p1_x - 1] == '0'
		|| game->map_0[game->p1_y][game->p1_x - 1] == 'C'
		|| game->map_0[game->p1_y][game->p1_x - 1] == 'B'
		|| game->map_0[game->p1_y][game->p1_x - 1] == 'E'))
	{
		if (game->map_0[game->p1_y][game->p1_x - 1] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, "GOOD JOB, YOU DID IT !!!!\n");
		}
		swap_tiles(key_code, game);
	}
}

void	move_y_up(int key_code, t_game *game)
{
	if ((key_code == KEY_MAC_W || key_code == KEY_LIN_W)
		&& (game->map_0[game->p1_y - 1][game->p1_x] == '0'
		|| game->map_0[game->p1_y - 1][game->p1_x] == 'C'
		|| game->map_0[game->p1_y - 1][game->p1_x] == 'B'
		|| game->map_0[game->p1_y - 1][game->p1_x] == 'E'))
	{
		if (game->map_0[game->p1_y - 1][game->p1_x] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, "GOOD JOB, YOU DID IT !!!!\n");
		}
		swap_tiles(key_code, game);
	}
}

void	move_y_do(int key_code, t_game *game)
{
	if ((key_code == KEY_MAC_S || key_code == KEY_LIN_S)
		&& (game->map_0[game->p1_y + 1][game->p1_x] == '0'
		|| game->map_0[game->p1_y + 1][game->p1_x] == 'C'
		|| game->map_0[game->p1_y + 1][game->p1_x] == 'B'
		|| game->map_0[game->p1_y + 1][game->p1_x] == 'E'))
	{
		if (game->map_0[game->p1_y + 1][game->p1_x] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, "GOOD JOB, YOU DID IT !!!!\n");
		}
		swap_tiles(key_code, game);
	}
}
