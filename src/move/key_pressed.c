/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:58:50 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/16 14:57:11 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	key_press_p1(int key_code, t_game *game, t_image *img)
{
	img->test = 0;
	game->test = 0;
	ft_printf("KEY: %d\n", key_code);
	find_player(game);
	if (key_code == KEY_MAC_ESC || key_code == KEY_LIN_ESC)
	{
		kill_game(game, img, "Merci d'avoir joué !!!\n");
	}
	move_x_lft(key_code, game, img);
	move_x_ri(key_code, game, img);
	move_y_up(key_code, game, img);
	move_y_do(key_code, game, img);
	if (key_code == KEY_MAC_E || key_code == KEY_LIN_E)
	{
		collect(game);
		openn(game);
	}
	kill_p1(game, img);
	update(game, img);
	ft_printf("EXIT_4\n");
	ft_printf("PLAYER_POS_Y: %d  PLAYER_POS_X: %d\n", game->p1_y, game->p1_x);
	return (0);
}

void	move_x_ri(int key_code, t_game *game, t_image *img)
{
	if ((key_code == KEY_MAC_D || key_code == KEY_LIN_D)
			&& (game->map_0[game->p1_y][game->p1_x + 1] == '0'
			|| game->map_0[game->p1_y][game->p1_x + 1] == 'Z'
			|| game->map_0[game->p1_y][game->p1_x + 1] == 'E'))
	{
		if (game->map_0[game->p1_y][game->p1_x + 1] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, img, "GOOD JOB, YOU DID IT !!!!\n");
		}
		game->ct.ct_idle.p1_dir = 5;
		p1_move(game, img);
		swap_tiles(key_code, game);
		game->ct.ct_idle.p1_dir = 4;
		enemy_move(game, img);
	}
}

void	move_x_lft(int key_code, t_game *game, t_image *img)
{
	if ((key_code == KEY_MAC_A || key_code == KEY_LIN_A)
			&& (game->map_0[game->p1_y][game->p1_x - 1] == '0'
			|| game->map_0[game->p1_y][game->p1_x - 1] == 'Z'
			|| game->map_0[game->p1_y][game->p1_x - 1] == 'E'))
	{
		if (game->map_0[game->p1_y][game->p1_x - 1] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, img, "GOOD JOB, YOU DID IT !!!!\n");
		}
		game->ct.ct_idle.p1_dir = 6;
		swap_tiles(key_code, game);
		p1_move(game, img);
		game->ct.ct_idle.p1_dir = 3;
		enemy_move(game, img);
	}
}

void	move_y_up(int key_code, t_game *game, t_image *img)
{
	if ((key_code == KEY_MAC_W || key_code == KEY_LIN_W)
			&& (game->map_0[game->p1_y - 1][game->p1_x] == '0'
			|| game->map_0[game->p1_y - 1][game->p1_x] == 'Z'
			|| game->map_0[game->p1_y - 1][game->p1_x] == 'E'))
	{
		if (game->map_0[game->p1_y - 1][game->p1_x] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, img, "GOOD JOB, YOU DID IT !!!!\n");
		}
		game->ct.ct_idle.p1_dir = 7;
		swap_tiles(key_code, game);
		p1_move(game, img);
		game->ct.ct_idle.p1_dir = 1;
		enemy_move(game, img);
	}
}

void	move_y_do(int key_code, t_game *game, t_image *img)
{
	if ((key_code == KEY_MAC_S || key_code == KEY_LIN_S)
			&& (game->map_0[game->p1_y + 1][game->p1_x] == '0'
			|| game->map_0[game->p1_y + 1][game->p1_x] == 'Z'
			|| game->map_0[game->p1_y + 1][game->p1_x] == 'E'))
	{
		if (game->map_0[game->p1_y + 1][game->p1_x] == 'E')
		{
			game->ct.ct += 1;
			kill_game(game, img, "GOOD JOB, YOU DID IT !!!!\n");
		}
		game->ct.ct_idle.p1_dir = 8;
		p1_move(game, img);
		swap_tiles(key_code, game);
		game->ct.ct_idle.p1_dir = 2;
		enemy_move(game, img);
	}
}
