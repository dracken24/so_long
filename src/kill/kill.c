/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:19:56 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/23 12:29:37 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	kill_game(t_game *game, t_image *img, char *str)
{
	img->test = 1;
	game->ct.i = 1;
	while (game->ct.i < 350000000)
		++game->ct.i;
	free(game->map_0);
	ft_printf("MOVEMENTS TOTAL: %d\n", game->ct.ct);
	perror(str);
	exit(0);
}

void	kill_p1(t_game *game, t_image *img)
{
	find_player(game);
	if (!ft_strchr(game->map_0[game->enemy_pos.y], 'Z'))
		kill_game(game, img, "YOU ARE DEAD !!!\n");
	game->ct.ii = 0;
	while (!ft_strchr(game->map_0[game->p1_y], 'P'))
		kill_game(game, img, "YOU ARE DEAD !!!\n");
}

int	quit_x(t_game *game)
{
	free(game->map_0);
	perror("Merci d'avoir joué !!!\n");
	exit(0);
}
