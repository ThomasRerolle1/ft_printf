/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsize_t_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:49:11 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/10 17:02:38 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_size_base(char *base)
{
	size_t	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putsize_t_base(size_t nbr, char *base, int *strlen)
{
	size_t	size_base;

	size_base = ft_size_base(base);
	if (nbr >= size_base)
	{
		ft_putsize_t_base(nbr / size_base, base, strlen);
	}
	if (nbr >= 0)
	{
		write(1, &base[nbr % size_base], 1);
		*strlen += 1;
	}
}
