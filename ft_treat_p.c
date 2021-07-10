/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:17:56 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/08 18:00:16 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_p_len(t_struct *data)
{
	int				i;
	long int		nb;

	i = 0;
	if (data->p == 0)
		return (1);
	if (data->p < 0)
	{
		nb = data->p;
		nb *= -1;
		i++;
	}
	else
		nb = data->p;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_treat_p(t_struct *data, va_list ap)
{
	int	count;

	count = 0;
	data->p = va_arg(ap, unsigned long);
	ft_putchar('0');
	count++;
	ft_putchar('x');
	count++;
	ft_putnbr_base(data->p, "0123456789abcdef");
	return (ft_count_p_len(data) + count);
}
