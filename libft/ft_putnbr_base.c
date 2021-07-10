/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:07:08 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/07 17:47:07 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long int nbr, char *base)
{
	int		size;

	size = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr >= size)
	{
		ft_putnbr_base(nbr / size, base);
		ft_putchar(base[nbr % size]);
	}
	else
		ft_putchar(base[nbr % size]);
}
