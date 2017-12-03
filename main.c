/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:28:05 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/19 15:29:55 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_mains	init_pixel(int num)
{
	t_mains	mains;

	if (num == 1)
	{
		t_border.min_x = -2.0;
		t_border.max_x = 0.5;
		t_border.min_y = -1.25;
		t_border.max_y = 1.25;
	}
	else
	{
		t_border.min_x = -2.25;
		t_border.max_x = 2.25;
		t_border.min_y = -2;
		t_border.max_y = 2;
	}
	mains.pixel.depth = 70;
	mains.pixel.c_x = 0;
	mains.pixel.c_y = 0;
	mains.num = num;
	return (mains);
}

int		make_result(t_mains mains)
{
	int result;

	result = 0;
	if (mains.num == 1)
		result = mandelbrot(mains.pixel);
	else if (mains.num == 2)
		result = julia(mains.pixel);
	else if (mains.num == 3)
		result = ship(mains.pixel);
	else if (mains.num == 4)
		result = matrix(mains.pixel);
	else if (mains.num == 5)
		result = dope(mains.pixel);
	else if (mains.num == 6)
		result = batman(mains.pixel);
	else if (mains.num == 7)
		result = infinity(mains.pixel);
	else if (mains.num == 8)
		result = heart(mains.pixel);
	else if (mains.num == 9)
		result = spiner(mains.pixel);
	return (result);
}

void	print_image(t_mains mains)
{
	int	x;
	int	y;
	int	color;
	int	result;

	y = 0;
	while (y < Y_SIZE_WINDOW)
	{
		x = 0;
		mains.pixel.c_y = for_c_y(y);
		while (x < X_SIZE_WINDOW)
		{
			mains.pixel.c_x = for_c_x(x);
			result = make_result(mains);
			color = make_color(result, mains);
			mlx_pixel_put(mains.mlx, mains.win, x, y, color);
			x++;
		}
		y++;
	}
}

int		main(int argc, char **argv)
{
	t_mains	mains;
	size_t	num;

	mains.pixel.const_julia_y = -0.7;
	mains.pixel.const_julia_x = 0.27015;
	if_invalid_arg_count(argc);
	num = ft_atoi(argv[1]);
	if_invalid_fract_number(num, argv[1]);
	mains = init_pixel(num);
	mains.mlx = mlx_init();
	mains.win = mlx_new_window(mains.mlx, X_SIZE_WINDOW,
	Y_SIZE_WINDOW, "Fractol");
	print_image(mains);
	mlx_mouse_hook(mains.win, mouse_update, &mains);
	mlx_key_hook(mains.win, key_hook, &mains);
	if (num == 2 || num == 4 || num == 5)
		mlx_hook(mains.win, 6, 0, dynamic, &mains);
	mlx_hook(mains.win, 17, 0, destroy, 0);
	mlx_loop(mains.mlx);
}
