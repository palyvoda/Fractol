/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_coordinates.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:29:40 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/18 19:29:44 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	for_c_x(double x)
{
	double	c_x;

	c_x = x * ((t_border.max_x - t_border.min_x) / X_SIZE_WINDOW)
	+ t_border.min_x;
	return (c_x);
}

double	for_c_y(double y)
{
	double	c_y;

	c_y = y * ((t_border.max_y - t_border.min_y) / Y_SIZE_WINDOW)
	+ t_border.min_y;
	return (c_y);
}
