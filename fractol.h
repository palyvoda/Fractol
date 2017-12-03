/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:28:22 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/18 19:28:24 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define X_SIZE_WINDOW 1000
# define Y_SIZE_WINDOW 1000
# define ABS(x) ((x) < 0 ? (-x) : (x))
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include <mlx.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>

struct				s_border
{
	double			min_x;
	double			max_x;
	double			min_y;
	double			max_y;
}					t_border;

typedef struct		s_pixel
{
	int				depth;
	double			c_x;
	double			c_y;
	double			const_julia_x;
	double			const_julia_y;
}					t_pixel;

typedef struct		s_mains
{
	t_pixel			pixel;
	void			*mlx;
	void			*win;
	size_t			num;
}					t_mains;

int					ft_atoi(const char *str);
double				for_c_y(double y);
double				for_c_x(double x);
int					ship(t_pixel pixel);
void				serpinski(t_mains mains);
int					mandelbrot(t_pixel pixel);
int					julia(t_pixel fract);
int					key_hook(int keycode);
int					destroy(void);
int					mouse_update(int keycode, int x, int y, t_mains *tmp);
void				zoom(int keycode, int x, int y, t_mains fract);
void				zoom_mouse(int keycode, int x, int y, t_mains mains);
void				print_image(t_mains mains);
int					dynamic(int x, int y, t_mains *mains);
void				if_invalid_arg_count(int count);
void				if_invalid_fract_number(size_t num, char *numname);
int					spiner(t_pixel pixel);
int					matrix(t_pixel fract);
int					infinity(t_pixel pixel);
int					heart(t_pixel pixel);
int					batman(t_pixel pixel);
int					dope(t_pixel fract);
int					make_color_cycle(t_mains mains, int result);
int					make_color(int result, t_mains mains);
#endif
