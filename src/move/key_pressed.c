/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:58:50 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/12 18:28:36 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int key_press_p1(int key_code, t_game *game, t_image *img)
{
	find_player(game);
	if (key_code == KEY_ESC)
	{
		kill_game(game, img, "Merci d'avoir joué !!!");
	}
	move_x(key_code, game, img);
	move_y(key_code, game, img);
	if (key_code == KEY_E)
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

void	move_x(int key_code, t_game *game, t_image *img)
{
	if (key_code == KEY_A && (game->map_0[game->p1_y][game->p1_x - 1] == '0'
			|| game->map_0[game->p1_y][game->p1_x - 1] == 'Z'
			|| game->map_0[game->p1_y][game->p1_x - 1] == 'E'))
	{
		game->ct.ct_idle.p1_dir = 6;
		swap_tiles(key_code, game, img);
		p1_move(game, img);
		game->ct.ct_idle.p1_dir = 3;
		enemy_move(game, img);
	}
	if (key_code == KEY_D && (game->map_0[game->p1_y][game->p1_x + 1] == '0'
			|| game->map_0[game->p1_y][game->p1_x + 1] == 'Z'
			|| game->map_0[game->p1_y][game->p1_x + 1] == 'E'))
	{
		game->ct.ct_idle.p1_dir = 5;
		p1_move(game, img);
		swap_tiles(key_code, game, img);
		game->ct.ct_idle.p1_dir = 4;
		enemy_move(game, img);
	}
}

void	move_y(int key_code, t_game *game, t_image *img)
{
	if (key_code == KEY_W && (game->map_0[game->p1_y - 1][game->p1_x] == '0'
			|| game->map_0[game->p1_y - 1][game->p1_x] == 'Z'
			|| game->map_0[game->p1_y - 1][game->p1_x] == 'E'))
	{
		game->ct.ct_idle.p1_dir = 7;
		swap_tiles(key_code, game, img);
		p1_move(game, img);
		game->ct.ct_idle.p1_dir = 1;
		enemy_move(game, img);
	}
	if (key_code == KEY_S && (game->map_0[game->p1_y + 1][game->p1_x] == '0'
			|| game->map_0[game->p1_y + 1][game->p1_x] == 'Z'
			|| game->map_0[game->p1_y + 1][game->p1_x] == 'E'))
	{
		game->ct.ct_idle.p1_dir = 8;
		p1_move(game, img);
		swap_tiles(key_code, game, img);
		game->ct.ct_idle.p1_dir = 2;
		enemy_move(game, img);
	}
}

void	delta_time(t_game *game, t_image *img, int nbr)
{
	game->ct.i = -1;
	while (++game->ct.i < nbr)
	{
		game->ct.time = 0.0f;
		while (game->ct.time < 200000)
			game->ct.time += 0.01f;
	}
	update(game, img);
}
