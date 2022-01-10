/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsize_t_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:49:11 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/07 18:42:30 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_size_base_t(char *base)
{
	size_t	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}



void	ft_putsize_t_base(size_t nbr, char *base, int *strlength)
{
	size_t	size_base;

	size_base = ft_size_base_t(base);
	if (nbr >= size_base)
	{
		ft_putsize_t_base(nbr / size_base, base, strlength);
	}
	if (nbr >= 0)
		write(1, &base[nbr % size_base], 1);
		*strlength += 1;
		//printf("%i\n", *strlength);
}

