/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:06:21 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/11 15:04:37 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"
#include <fcntl.h>

int main(int entry, char **name)
{
	t_game game;
	t_image img;

	ft_printf("1\n");
	check_entry(entry, name, &game);
	ft_printf("2\n");
	init_var(&game, &img);
	ft_printf("3\n");
	init_game(&game, &img);
	kill_game(&game, &img, "Error");
	return (0);
}

void	check_entry(int entry, char **name, t_game *game)
{
	if (entry != 2)
		exit(ft_printf("Error, Wrong arguments numbers"));
	if (check_name(game, name[1]) == 0)
		exit(ft_printf("Error, Invalid files <name>.ber"));
	save_map(game, name[1]);
	check_rect(game);
}

void	save_map(t_game *game, char *name)
{
	save_len(game, name);
	game->map_0 = ft_calloc(sizeof(char), (game->len.len_map_x * game->len.len_map_y) + game->len.len_map_y + 1);
	if (!game->map_0)
	{
		free(game->map_0);
		exit(ft_printf("Error, wrong malloc <map_0>"));
	}
	game->ct.i = -1;
	while (++game->ct.i < game->len.len_map_y)
	{
		game->map_0[game->ct.i] = game->tmp[game->ct.i];
	}
	free(game->tmp);
}

void	save_len(t_game *game, char *name)
{
	int fd;

	game->tmp = ft_calloc(sizeof(char), 4096);
	if (!game->tmp)
	{
		free(game->tmp);
		exit(ft_printf("Error, wrong malloc <map_0>"));
	}
	fd = open(name, O_RDONLY);
	game->ct.i = -1;
	while (++game->ct.i >= 0)
	{
		game->tmp[game->ct.i] = get_next_line(fd);
		if (!game->tmp[game->ct.i])
			break;
	}
	game->len.len_map_y = game->ct.i;
	game->len.len_map_x = ft_strlen(game->tmp[0]) - 1;
}

void	check_rect(t_game *game)
{
	int i;
	int	k;
	
	i = -1;
	while (++i < game->len.len_map_y)
	{
		k = 0;
		while (game->map_0[i][k] != '\n')
			k++;
		ft_printf("line_3: %s", game->map_0[i]);
		if (k != game->len.len_map_x)
			exit(ft_printf("Error, Map not rectangle"));
	}
}

int check_name(t_game *game, char *name)
{
	game->len.len = ft_strlen(name);
	if (name == 0)
		return (0);
	if (game->len.len < 5)
		return (0);
	if (ft_strncmp(name + game->len.len - 4, ".ber", game->len.len) != 0)
		return (0);
	// ft_printf("EEEE\n");
	return (1);
}

