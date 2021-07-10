/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:22:18 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/08 18:03:02 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_s(t_struct *data, va_list ap)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	data->s = va_arg(ap, char *);
	if (!data->s)
		data->s = "(null)";
	while (data->s[i])
	{
		write(1, &data->s[i], 1);
		i++;
		count++;
	}
	return (count);
}
