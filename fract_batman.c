/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_batman.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:09:27 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/19 15:13:55 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	batman(t_pixel pixel)
{
	int		i;
	double	for_x;
	double	for_y;
	double	tmp;

	i = 0;
	for_y = 0;
	for_x = 0;
	while (for_x * for_x + for_y * for_y <= 4 && i < pixel.depth)
	{
		tmp = for_x;
		for_x = for_x * for_x - for_y * for_y +
		pixel.c_x * pixel.c_x - pixel.c_y * pixel.c_y;
		for_y = 2 * tmp * for_y + pixel.c_y - for_y + 2 * pixel.c_x;
		i++;
	}
	return (i);
}
