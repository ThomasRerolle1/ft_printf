/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:18:19 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/10 17:03:30 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *strlen)
{
	if (!s)
		return (ft_putstr_fd("(null)", fd, strlen));
	while (*s)
	{
		ft_putchar_fd(*s, fd, strlen);
		s++;
	}
}
/*
int	main()
{
	ft_putstr_fd("hola que tal", 1);
	return (0);
}
*/
