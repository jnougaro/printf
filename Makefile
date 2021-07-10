# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/28 16:41:25 by jnougaro          #+#    #+#              #
#    Updated: 2021/07/08 17:56:58 by jnougaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_parsing.c \
		  	ft_treat_c.c \
		  	ft_treat_s.c \
		  	ft_treat_p.c \
			ft_treat_d.c \
			ft_treat_u.c \
			ft_treat_x.c \
			ft_treat_upx.c \
			ft_treat_pourc.c \
			ft_init_struct.c

OBJS	= ${SRCS:.c=.o}

CC 	= gcc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			make -C libft/
			mv libft/libft.a $(NAME)
			ar rcs $(NAME) $(OBJS)

all:		${NAME}

clean:
		${RM} ${OBJS}
		make clean -C libft/

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
