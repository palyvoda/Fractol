/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:27:57 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/18 19:28:00 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mouse_zoom(int keycode, int x, int y, t_mains mains)
{
	double	tmp_r;
	double	tmp_i;
	double	multipl;

	tmp_r = for_c_x(x);
	tmp_i = for_c_y(y);
	multipl = (keycode == 5 ? 0.9 : 1.1);
	t_border.max_x = t_border.max_x * multipl + tmp_r * (1 - multipl);
	t_border.min_x = t_border.min_x * multipl + tmp_r * (1 - multipl);
	t_border.max_y = t_border.max_y * multipl + tmp_i * (1 - multipl);
	t_border.min_y = t_border.min_y * multipl + tmp_i * (1 - multipl);
	print_image(mains);
}

void	zoom(int keycode, int x, int y, t_mains fract)
{
	if (keycode == 5 || keycode == 4)
		mouse_zoom(keycode, x, y, fract);
}

int		mouse_update(int keycode, int x, int y, t_mains *tmp)
{
	if (keycode == 5 || keycode == 4)
		zoom(keycode, x, y, *tmp);
	return (1);
}
