/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsize_t_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:49:11 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/04 14:03:10 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/trerolle/Desktop/libft/libft.h"

size_t	ft_size_base_t(char *base)
{
	size_t	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

size_t	check_size_t(char *base, size_t size_base)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (size_base < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_size_t_base(size_t nbr, char *base)
{
	size_t	size_base;

	size_base = ft_size_base_t(base);
	if (check_size_t(base, size_base) == 0)
		return ;
	size_base = ft_size_base_t(base);
	if (nbr >= size_base)
		ft_putnbr_size_t_base(nbr / size_base, base);
	if (nbr >= 0)
		write(1, &base[nbr % size_base], 1);
}

