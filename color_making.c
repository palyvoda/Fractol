/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_making.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:16:56 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/19 15:31:34 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	make_color_cycle(t_mains mains, int result)
{
	int color;

	color = 0;
	if (mains.num == 1)
		color = result * 0x000F10;
	if (mains.num == 2)
		color = result * 0x0F0F10;
	if (mains.num == 3)
		color = result * 0x0F0000;
	if (mains.num == 4)
		color = result * 0x0F00F0;
	if (mains.num == 5)
		color = result * 0x0F0930;
	if (mains.num == 6)
		color = result * 0x0A0A00;
	if (mains.num == 7)
		color = result * 0x00F0FF;
	if (mains.num == 9)
		color = result * 0x000E00;
	return (color);
}

int	make_color(int result, t_mains mains)
{
	int color;

	if (mains.num != 8)
	{
		if (result < mains.pixel.depth)
			color = make_color_cycle(mains, result);
		else
			color = 0;
	}
	else
	{
		if (result < mains.pixel.depth)
			color = 0;
		else
			color = result * 0xFF0000;
	}
	return (color);
}
