/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_imgs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:13:07 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/07 15:27:08 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	destroy_imgs(t_game *game)
{
	destroy_enviro(game);
	destroy_p1(game);
	destroy_enemy(game);
}

void	destroy_enviro(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img.img_pt.img_floor);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_wall);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_exit);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_block);
	mlx_destroy_image(game->mlx, game->img.img_pt.img_take);
}

void	destroy_enemy(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img.en.up.m00);
	mlx_destroy_image(game->mlx, game->img.en.up.m01);
	mlx_destroy_image(game->mlx, game->img.en.up.m02);
	mlx_destroy_image(game->mlx, game->img.en.up.m03);
	mlx_destroy_image(game->mlx, game->img.en.up.m04);
	mlx_destroy_image(game->mlx, game->img.en.down.m00);
	mlx_destroy_image(game->mlx, game->img.en.down.m01);
	mlx_destroy_image(game->mlx, game->img.en.down.m02);
	mlx_destroy_image(game->mlx, game->img.en.down.m03);
	mlx_destroy_image(game->mlx, game->img.en.down.m04);
	mlx_destroy_image(game->mlx, game->img.en.lft.m00);
	mlx_destroy_image(game->mlx, game->img.en.lft.m01);
	mlx_destroy_image(game->mlx, game->img.en.lft.m02);
	mlx_destroy_image(game->mlx, game->img.en.lft.m03);
	mlx_destroy_image(game->mlx, game->img.en.lft.m04);
	mlx_destroy_image(game->mlx, game->img.en.ri.m00);
	mlx_destroy_image(game->mlx, game->img.en.ri.m01);
	mlx_destroy_image(game->mlx, game->img.en.ri.m02);
	mlx_destroy_image(game->mlx, game->img.en.ri.m03);
	mlx_destroy_image(game->mlx, game->img.en.ri.m04);
	mlx_destroy_image(game->mlx, game->img.en.idle.idle_up);
	mlx_destroy_image(game->mlx, game->img.en.idle.idle_do);
	mlx_destroy_image(game->mlx, game->img.en.idle.idle_ri);
	mlx_destroy_image(game->mlx, game->img.en.idle.idle_lft);
}

void	destroy_p1(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img.p1.up.m00);
	mlx_destroy_image(game->mlx, game->img.p1.up.m01);
	mlx_destroy_image(game->mlx, game->img.p1.up.m02);
	mlx_destroy_image(game->mlx, game->img.p1.up.m03);
	mlx_destroy_image(game->mlx, game->img.p1.up.m04);
	mlx_destroy_image(game->mlx, game->img.p1.down.m00);
	mlx_destroy_image(game->mlx, game->img.p1.down.m01);
	mlx_destroy_image(game->mlx, game->img.p1.down.m02);
	mlx_destroy_image(game->mlx, game->img.p1.down.m03);
	mlx_destroy_image(game->mlx, game->img.p1.down.m04);
	mlx_destroy_image(game->mlx, game->img.p1.lft.m00);
	mlx_destroy_image(game->mlx, game->img.p1.lft.m01);
	mlx_destroy_image(game->mlx, game->img.p1.lft.m02);
	mlx_destroy_image(game->mlx, game->img.p1.lft.m03);
	mlx_destroy_image(game->mlx, game->img.p1.lft.m04);
	mlx_destroy_image(game->mlx, game->img.p1.ri.m00);
	mlx_destroy_image(game->mlx, game->img.p1.ri.m01);
	mlx_destroy_image(game->mlx, game->img.p1.ri.m02);
	mlx_destroy_image(game->mlx, game->img.p1.ri.m03);
	mlx_destroy_image(game->mlx, game->img.p1.ri.m04);
	mlx_destroy_image(game->mlx, game->img.p1.idle.idle_up);
	mlx_destroy_image(game->mlx, game->img.p1.idle.idle_do);
	mlx_destroy_image(game->mlx, game->img.p1.idle.idle_ri);
	mlx_destroy_image(game->mlx, game->img.p1.idle.idle_lft);
}
