/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:55:26 by jnougaro          #+#    #+#             */
/*   Updated: 2021/07/09 09:19:30 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_struct
{
	char				c;
	char				*s;
	unsigned long		p;
	int					d;
	unsigned int		u;
	unsigned int		x;
	unsigned int		upx;
	int					count;
}						t_struct;

int		ft_printf(const char *fmt, ...);
void	ft_parse_converter(const char *fmt, va_list ap, t_struct *data);
int		ft_parsing(const char *fmt, va_list ap, t_struct *data);
int		ft_count_p_len(t_struct *data);
int		ft_count_d_len(t_struct *data);
int		ft_count_u_len(t_struct *data);
int		ft_count_x_len(t_struct *data);
int		ft_count_upx_len(t_struct *data);
int		ft_treat_c(t_struct *data, va_list ap);
int		ft_treat_s(t_struct *data, va_list ap);
int		ft_treat_p(t_struct *data, va_list ap);
int		ft_treat_d(t_struct *data, va_list ap);
int		ft_treat_u(t_struct *data, va_list ap);
int		ft_treat_x(t_struct *data, va_list ap);
int		ft_treat_upx(t_struct *data, va_list ap);
int		ft_treat_pourc(const char *fmt);
void	ft_init_struct(t_struct *data);

#endif
