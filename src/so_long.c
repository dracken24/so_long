/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:06:21 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 19:38:22 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"
#include <fcntl.h>

int	main(int entry, char **name)
{
	t_game	game;
	check_entry(entry, name, &game);
	init_var(&game);
	init_game(&game);
	kill_game(&game, "Error");
	return (0);
}

void	check_entry(int entry, char **name, t_game *game)
{
	if (entry != 2)
	{
		perror("Error, Wrong arguments numbers\n");
		exit(0);
	}
	if (check_name(game, name[1]) == 0)
	{
		perror("Error, Invalid files <name>.ber\n");
		exit(0);
	}
	save_map(game, name[1]);
	check_rect(game);
	check_board(game);
}

void	save_map(t_game *game, char *name)
{
	save_len(game, name);
	game->map_0 = ft_calloc(sizeof(char), (game->len.len_map_x
				* game->len.len_map_y) + game->len.len_map_y);
	if (!game->map_0)
	{
		free(game->map_0);
		perror("Error, wrong malloc <map_0>\n");
		exit(0);
	}
	game->ct.i = -1;
	while (++game->ct.i < game->len.len_map_y)
	{
		game->map_0[game->ct.i] = game->tmp[game->ct.i];
	}
	free(game->tmp);
}

void	check_rect(t_game *game)
{
	int	i;
	int	k;
	i = -1;
	while (++i < game->len.len_map_y)
	{
		k = 0;
		while (game->map_0[i][k] != '\n')
			k++;
		if (k != game->len.len_map_x)
		{
			free(game->map_0);
			perror("Error, Map not rectangle\n");
			exit(0);
		}
	}
	if (game->len.len_map_x > 24 || game->len.len_map_y > 14)
	{
		free(game->map_0);
		perror("Error, Map to whide/hight\n");
		exit(0);
	}
}

void	check_board(t_game *game)
{
	int	i;
	int	k;

	game->ct.error = 1;
	i = -1;
	while (++i < game->len.len_map_y)
	{
		k = -1;
		while (game->map_0[i][++k] != '\n')
		{
			if (game->map_0[0][k] != CASE_1)
				game->ct.error = 0;
			else if (game->map_0[i][0] != CASE_1
					|| game->map_0[i][game->len.len_map_x - 1] != CASE_1)
				game->ct.error = 0;
			else if (game->map_0[game->len.len_map_y - 1][k] != CASE_1)
				game->ct.error = 0;
		}
	}
	if (game->ct.error == 0)
	{
		free(game->map_0);
		perror("Error, Boarder not ok\n");
		exit(0);
	}
}
