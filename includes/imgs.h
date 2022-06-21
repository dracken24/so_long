/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imgs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:51:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/12 18:29:21 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMGS_H
# define IMGS_H

typedef struct s_vector2{
	int			x;
	int			y;
}	t_vector2;

typedef struct s_path{
	char		*wall;
	char		*floor;
	char		*p1;
	char		*exit;
	char		*take;
	char		*block;
	char		*enemy;
}	t_path;

typedef struct s_img_pt{
	void		*img_wall;
	void		*img_floor;
	void		*img_p1;
	void		*img_enemy;
	void		*img_exit;
	void		*img_take;
	void		*img_block;
}	t_img_pt;

typedef struct s_idle_p1{
	char		*idle_up;
	char		*idle_do;
	char		*idle_lft;
	char		*idle_ri;
}	t_idle;

typedef struct s_mov_p1{
	void		*mov_ri;
}	t_mov;

typedef struct s_img_p1{
	t_idle		idle;
	t_mov		mov_ri;
	t_vector2	pos;
}	t_imgs;

typedef struct s_data{
	void		*img;
	void		*init;
	int			test;
	t_imgs		p1;
	t_imgs		en;
	t_img_pt	img_pt;
	t_path		name;
	t_vector2	pos_img;
}				t_image;

#endif
