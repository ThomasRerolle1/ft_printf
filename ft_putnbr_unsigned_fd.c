/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:09:16 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/04 13:49:31 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/trerolle/Desktop/libft/libft.h"

void	ft_putnbr_unsigned_fd(int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
	}
	ft_putchar_fd('0' + (n % 10), fd);
}
