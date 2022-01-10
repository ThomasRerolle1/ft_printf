/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:13:29 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/07 19:13:24 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd, int *strlength)
{
	*strlength += 1;
	write(fd, &c, 1);
}
/*
int main()
{
	char	c = 'a';
	int		fd = 1;

	ft_putchar_fd(c, fd);
	return (0);
}*/
