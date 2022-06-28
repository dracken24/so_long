/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imgs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:51:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/06/28 16:47:09 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMGS_H
# define IMGS_H

typedef struct s_vector2{
	int			x;
	int			y;
}	t_vector2;

typedef struct s_img_pt{
	
	void		*img_floor;
	void		*img_p1;
	void		*img_enemy;
	void		*img_exit;
	void		*img_take;
	void		*img_block;
}	t_img_pt;

typedef struct s_idle{
	void		*idle_up;
	void		*idle_do;
	void		*idle_lft;
	void		*idle_ri;
}	t_idle;

typedef struct s_imgs{
	t_idle		idle;
	t_vector2	pos;
}	t_imgs;

typedef struct s_data{
	void		*img_wall;
	void		*img;
	void		*init;
	int			test;
	t_imgs		p1;
	t_imgs		en;
	t_img_pt	img_pt;
	t_vector2	pos_img;
}				t_image;

#endif
