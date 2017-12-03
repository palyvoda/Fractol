/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:13:10 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/19 15:13:12 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_isdigit(int sym)
{
	if (sym >= 48 && sym <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t				i;
	int					sign;
	unsigned long int	final;

	i = 0;
	sign = 1;
	final = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] != '\0') && ft_isdigit(str[i]))
	{
		if ((final > 922337203685477580 || (final == 922337203685477580
		&& (str[i] - '0') > 7)) && sign == 1)
			return (-1);
		else if ((final > 922337203685477580 || (final == 922337203685477580
		&& (str[i] - '0') > 8)) && sign == -1)
			return (0);
		final = (final * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(final * sign));
}
