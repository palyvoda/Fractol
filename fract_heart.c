/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_heart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:13:22 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/19 15:13:23 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	heart(t_pixel pixel)
{
	int		i;
	double	for_x;
	double	for_y;
	double	tmp;

	i = 0;
	for_y = 0;
	for_x = 0;
	while (for_x * for_x + for_y * for_y < (1 << 16) && i < pixel.depth)
	{
		tmp = for_x;
		for_x = fabs((for_x * for_x) * for_x) - 3 * \
		((for_y * for_y) * for_x) - pixel.c_y;
		for_y = 3 * ((tmp * tmp) * for_y) - ((for_y * for_y)\
		* for_y) - pixel.c_x;
		i++;
	}
	return (i);
}
