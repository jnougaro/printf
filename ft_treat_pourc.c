/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pourc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:27:31 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/08 18:00:33 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_pourc(const char *fmt)
{
	int	count;

	count = 0;
	if (fmt[0] == '%')
	{
		ft_putchar('%');
		count++;
	}
	return (count);
}
