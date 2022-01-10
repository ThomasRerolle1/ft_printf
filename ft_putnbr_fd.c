/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:30:05 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/07 18:42:18 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *strlength)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd, strlength);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd, strlength);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd, strlength);
		}
		ft_putchar_fd('0' + (n % 10), fd, strlength);
	}
}
/*
int	main()
{
	int n = -2147483648;
	ft_putnbr_fd(n, 1);
	return (0);
}
*/
