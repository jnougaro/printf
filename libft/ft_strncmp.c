/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:21:39 by jnougaro          #+#    #+#             */
/*   Updated: 2021/05/27 14:39:46 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*so1;
	unsigned char	*so2;

	i = 0;
	so1 = (unsigned char *)s1;
	so2 = (unsigned char *)s2;
	while ((so1[i] || so2[i]) && i < n)
	{
		if (so1[i] != so2[i])
			return (so1[i] - so2[i]);
		i++;
	}	
	return (0);
}
