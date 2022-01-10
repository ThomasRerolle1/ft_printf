/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:01:36 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/10 17:05:59 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void		ft_putchar_fd(char c, int fd, int *strlength);
void		ft_putnbr_fd(int n, int fd, int *strlength);
void		ft_putstr_fd(char *s, int fd, int *strlength);
size_t		ft_size_base_t(char *base);
void		ft_putsize_t_base(size_t nbr, char *base, int *strlength);
int			ft_printf(const char *s, ...);


#endif
