/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:52:58 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/08 17:59:25 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_converter(const char *fmt, va_list ap, t_struct *data)
{
	int	k;

	k = 0;
	if (fmt[0] == 'c')
		data->count += ft_treat_c(data, ap);
	else if (fmt[0] == 's')
		data->count += ft_treat_s(data, ap);
	else if (fmt[0] == 'p')
		data->count += ft_treat_p(data, ap);
	else if (fmt[0] == 'd' || fmt[0] == 'i')
		data->count += ft_treat_d(data, ap);
	else if (fmt[0] == 'u')
		data->count += ft_treat_u(data, ap);
	else if (fmt[0] == 'x')
		data->count += ft_treat_x(data, ap);
	else if (fmt[0] == 'X')
		data->count += ft_treat_upx(data, ap);
	else if (fmt[0] == '%')
		data->count += ft_treat_pourc(&fmt[k]);
}

int	ft_parsing(const char *fmt, va_list ap, t_struct *data)
{
	int			j;

	j = 0;
	j++;
	ft_parse_converter(&fmt[j], ap, data);
	j++;
	return (j);
}			

int	ft_printf(const char *fmt, ...)
{
	t_struct	data;
	va_list		ap;
	int			i;
	int			result;

	i = 0;
	result = 0;
	ft_init_struct(&data);
	va_start(ap, fmt);
	while (fmt[i])
	{
		while (fmt[i] != '%' && fmt[i])
		{
			write(1, &fmt[i], 1);
			i++;
			result++;
		}
		if (fmt[i] == '%')
			i += ft_parsing(&fmt[i], ap, &data);
	}
	va_end(ap);
	return (data.count + result);
}
