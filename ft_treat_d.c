/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:11:59 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/08 17:59:54 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_d_len(t_struct *data)
{
	int				i;
	long int		nb;

	i = 0;
	if (data->d == 0)
		return (1);
	if (data->d < 0)
	{
		nb = data->d;
		nb *= -1;
		i++;
	}
	else
		nb = data->d;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_treat_d(t_struct *data, va_list ap)
{
	data->d = va_arg(ap, int);
	ft_putnbr(data->d);
	return (ft_count_d_len(data));
}
