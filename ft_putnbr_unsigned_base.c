/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:00:34 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/06 18:52:50 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "/Users/trerolle/Desktop/libft/libft.h"

unsigned	ft_size_base(char *base)
{
	unsigned	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

unsigned	check(char *base, unsigned size_base)
{
	unsigned	i;
	unsigned	j;

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
//maybe can be generalise to tue 'u' case by replacing base by va_arg
void	ft_putnbr_unsigned_base(unsigned nbr, char *base)
{
	unsigned	size_base;

	size_base = ft_size_base(base);
	if (check(base, size_base) == 0)
		return ;
	size_base = ft_size_base(base);
	if (nbr >= size_base)
		ft_putnbr_unsigned_base(nbr / size_base, base);
	if (nbr >= 0)
		write(1, &base[nbr % size_base], 1);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	if (argc != 3)
		return (0);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}*/
