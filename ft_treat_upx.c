/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_upx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:03:28 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/09 10:03:31 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_upx_len(t_struct *data)
{
	int				i;
	long int		nb;

	i = 0;
	if (data->upx == 0)
		return (1);
	if (data->upx < 0)
	{
		nb = data->upx;
		nb *= -1;
		i++;
	}
	else
		nb = data->upx;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_treat_upx(t_struct *data, va_list ap)
{
	data->upx = va_arg(ap, unsigned int);
	ft_putnbr_base(data->upx, "0123456789ABCDEF");
	return (ft_count_upx_len(data));
}
