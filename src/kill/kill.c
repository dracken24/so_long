/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:19:56 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 19:36:40 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	kill_game(t_game *game, char *str)
{
	game->img.test = 1;
	game->ct.i = 1;
	while (game->ct.i < 300000000)
		++game->ct.i;
	free_ptr(game->map_0);
	destroy_imgs(game);
	mlx_destroy_window(game->mlx, game->window);
	ft_printf("MOVEMENTS TOTAL: %d\n", game->ct.ct);
	perror(str);
	exit(0);
}

int	quit_x(t_game *game)
{
	free_ptr(game->map_0);
	destroy_imgs(game);
	mlx_destroy_window(game->mlx, game->window);
	perror("Merci d'avoir joué !!!\n");
	exit(0);
}

void	destroy_imgs(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img.img_pt.img_floor);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_wall);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_exit);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_block);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_take);
	mlx_destroy_image(game->mlx, game->img.p1.idle.idle_do);
}
