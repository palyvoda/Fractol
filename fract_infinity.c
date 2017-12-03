/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_infinity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:10:00 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/19 15:10:02 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		infinity(t_pixel pixel)
{
	int		i;
	double	for_x;
	double	for_y;
	double	tmp;

	i = 0;
	for_y = 0;
	for_x = 0;
	while (i < pixel.depth)
	{
		tmp = (for_x * for_x) - (for_y * for_y);
		for_y = 2 * for_x * for_y + sin(pixel.c_y);
		for_x = tmp + cos(pixel.c_x);
		if ((for_x * for_x + for_y * for_y) > 4)
			break ;
		i++;
	}
	return (i);
}
