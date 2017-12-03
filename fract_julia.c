/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_julia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:29:11 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/18 19:29:15 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	julia(t_pixel fract)
{
	int		i;
	double	for_x;
	double	for_y;
	double	tmp;

	i = 0;
	for_y = fract.c_y;
	for_x = fract.c_x;
	while (i < fract.depth)
	{
		tmp = (for_x * for_x) - (for_y * for_y);
		for_y = 2 * for_x * for_y + fract.const_julia_y;
		for_x = tmp + fract.const_julia_x;
		if ((for_x * for_x + for_y * for_y) > 4)
			break ;
		i++;
	}
	return (i);
}
