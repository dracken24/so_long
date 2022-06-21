/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:33:03 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/12 18:28:09 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	swap_tiles(int key_code, t_game *game, t_image *img)
{
	int x;
	int y;

	find_player(game);
	x = game->p1_x;
	y = game->p1_y;
	if ((game->map_0[y][x + 1] == '0' || game->map_0[y][x + 1] == 'Z')
			&& key_code == KEY_D)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y][x + 1] = game->letters[2];
		game->ct.ct += 1;
	}
	else if ((game->map_0[y][x - 1] == '0' || game->map_0[y][x - 1] == 'Z')
			&& key_code == KEY_A)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y][x - 1] = game->letters[2];
		game->ct.ct += 1;
	}
	else if ((game->map_0[y - 1][x] == '0' || game->map_0[y - 1][x] == 'Z')
			&& key_code == KEY_W)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y - 1][x] = game->letters[2];
		game->ct.ct += 1;
	}
	else if ((game->map_0[y + 1][x] == '0' || game->map_0[y + 1][x] == 'Z')
			&& key_code == KEY_S)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y + 1][x] = game->letters[2];
		game->ct.ct += 1;
	}
	check_exit(key_code, game, img);
	game->ct.i = -1;
	while (++game->ct.i < game->len.len_map_y)
		ft_printf("line2: %s", game->map_0[game->ct.i]);
	ft_printf("MOVEMENTS: %d\n", game->ct.ct);
}

void	collect(t_game *game)
{
	find_player(game);
	if (game->map_0[game->p1_y][game->p1_x + 1] == 'C')
	{
		game->map_0[game->p1_y][game->p1_x + 1] = game->letters[0];
		game->take.hammer = 1;
	}
	if (game->map_0[game->p1_y][game->p1_x - 1] == 'C')
	{
		game->map_0[game->p1_y][game->p1_x - 1] = game->letters[0];
		game->take.hammer = 1;
	}
	if (game->map_0[game->p1_y + 1][game->p1_x] == 'C')
	{
		game->map_0[game->p1_y + 1][game->p1_x] = game->letters[0];
		game->take.hammer = 1;
	}
	if (game->map_0[game->p1_y - 1][game->p1_x] == 'C')
	{
		game->map_0[game->p1_y - 1][game->p1_x] = game->letters[0];
		game->take.hammer = 1;
	}
}

void	openn(t_game *game)
{
	find_player(game);
	if (game->map_0[game->p1_y][game->p1_x + 1] == 'B' && game->take.hammer == 1)
	{
		game->map_0[game->p1_y][game->p1_x + 1] = game->letters[0];
	}
	if (game->map_0[game->p1_y][game->p1_x - 1] == 'B' && game->take.hammer == 1)
	{
		game->map_0[game->p1_y][game->p1_x - 1] = game->letters[0];
	}
	if (game->map_0[game->p1_y + 1][game->p1_x] == 'B' && game->take.hammer == 1)
	{
		game->map_0[game->p1_y + 1][game->p1_x] = game->letters[0];
	}
	if (game->map_0[game->p1_y - 1][game->p1_x] == 'B' && game->take.hammer == 1)
	{
		game->map_0[game->p1_y - 1][game->p1_x] = game->letters[0];
	}
}

void	check_exit(int key_code, t_game *game, t_image *img)
{
	int x;
	int y;

	find_player(game);
	x = game->p1_x;
	y = game->p1_y;
	if (game->map_0[y][x + 1] == 'E' && key_code == KEY_D)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y][x + 1] = game->letters[2];
		game->ct.ct += 1;
		kill_game(game, img, "GOOD JOB, YOU DID IT !!!!");
	}
	else if (game->map_0[y][x - 1] == 'E' && key_code == KEY_A)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y][x - 1] = game->letters[2];
		game->ct.ct += 1;
		kill_game(game, img, "GOOD JOB, YOU DID IT !!!!");
	}
	else if (game->map_0[y - 1][x] == 'E' && key_code == KEY_W)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y - 1][x] = game->letters[2];
		game->ct.ct += 1;
		kill_game(game, img, "GOOD JOB, YOU DID IT !!!!");
	}
	else if (game->map_0[y + 1][x] == 'E' && key_code == KEY_S)
	{
		game->map_0[y][x] = game->letters[0];
		game->map_0[y + 1][x] = game->letters[2];
		game->ct.ct += 1;
		kill_game(game, img, "GOOD JOB, YOU DID IT !!!!");
	}
}

void find_player(t_game *game)
{
	game->ct.i = -1;
	while (game->map_0[++game->ct.i])
	{
		game->ct.k = -1;
		while (game->map_0[game->ct.i][++game->ct.k])
		{
			if (game->map_0[game->ct.i][game->ct.k] == 'P')
			{
				game->p1_x = game->ct.k;
				game->p1_y = game->ct.i;
			}
			if (game->map_0[game->ct.i][game->ct.k] == 'Z')
			{
				game->enemy_pos.x = game->ct.k;
				game->enemy_pos.y = game->ct.i;
				game->ct.ct_enemy += 1;
			}
		}
	}
}
