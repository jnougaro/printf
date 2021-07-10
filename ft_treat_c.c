/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:00:17 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/08 17:59:13 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_c(t_struct *data, va_list ap)
{
	int	count;

	count = 0;
	data->c = va_arg(ap, int);
	write(1, &data->c, 1);
	count++;
	return (count);
}
