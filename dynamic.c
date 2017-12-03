/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_julia.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:29:31 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/18 19:29:35 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	dynamic(int x, int y, t_mains *mains)
{
	mains->pixel.const_julia_x = for_c_x(x);
	mains->pixel.const_julia_y = for_c_y(y);
	print_image(*mains);
	return (1);
}
