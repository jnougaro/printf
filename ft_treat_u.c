/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:57:27 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/08 18:03:13 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_u_len(t_struct *data)
{
	int				i;
	long int		nb;

	i = 0;
	if (data->u == 0)
		return (1);
	if (data->u < 0)
	{
		nb = data->u;
		nb *= -1;
		i++;
	}
	else
		nb = data->u;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_treat_u(t_struct *data, va_list ap)
{
	data->u = va_arg(ap, unsigned int);
	ft_putnbr(data->u);
	return (ft_count_u_len(data));
}
