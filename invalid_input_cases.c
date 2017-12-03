/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_input_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:28:13 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/18 19:28:14 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	if_invalid_arg_count(int count)
{
	if (count != 2)
	{
		printf("Write \"./fractol\", press the space and ");
		printf("write a fractol number:\n");
		printf("1 - Mondelbrot;  2 - Julia;  3 - Ship;  ");
		printf("4 - Matrix;  5 - Dope;  6 - Batman;  ");
		printf("7 - Infinity;  8 - Heart;  9 - Spiner;\n");
		exit(1);
	}
}

void	if_invalid_fract_number(size_t num, char *numname)
{
	if (num > 9 || !ft_atoi(numname))
	{
		printf("Choose fractol number:\n1 - Mondelbrot;  2 - Julia;  ");
		printf("3 - Ship;  4 - Matrix;  5 - Dope;  6 - Batman;  ");
		printf("7 - Infinity;  8 - Heart;  9 - Spiner;\n");
		exit(1);
	}
}
