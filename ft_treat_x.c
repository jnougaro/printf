/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:03:19 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/09 10:03:24 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_x_len(t_struct *data)
{
	int				i;
	long int		nb;

	i = 0;
	if (data->x == 0)
		return (1);
	if (data->x < 0)
	{
		nb = data->x;
		nb *= -1;
		i++;
	}
	else
		nb = data->x;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_treat_x(t_struct *data, va_list ap)
{
	data->x = va_arg(ap, unsigned int);
	ft_putnbr_base(data->x, "0123456789abcdef");
	return (ft_count_x_len(data));
}
