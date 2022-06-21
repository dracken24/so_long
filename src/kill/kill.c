/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:19:56 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/12 18:29:16 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	kill_game(t_game *game, t_image *img, char *str)
{
	game->ct.i = 1;
	while (game->ct.i < 350000000)
		++game->ct.i;
	ft_printf("%s\n", str);
	img->test = 0;
	free(game->map_0);
	free(game->letters);
	exit(0);
}

void	kill_p1(t_game *game, t_image *img)
{
	find_player(game);
	game->ct.ii = 0;
	if (!ft_strchr(game->map_0[game->enemy_pos.y], 'Z'))
		kill_game(game, img, "YOU ARE DEAD !!!");
	game->ct.ii = 0;
	while (!ft_strchr(game->map_0[game->p1_y], 'P'))
		kill_game(game, img, "YOU ARE DEAD !!!");
}
