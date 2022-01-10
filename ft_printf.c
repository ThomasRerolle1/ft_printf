/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:09:07 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/10 17:06:24 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	conversions(char c, va_list values, int *strlen)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(values, int), 1, strlen);
	if (c == 's')
		ft_putstr_fd(va_arg(values, char *), 1, strlen);
	if (c == 'i' || c == 'd')
		ft_putnbr_fd(va_arg(values, int), 1, strlen);
	if (c == '%')
		ft_putchar_fd('%', 1, strlen);
	if (c == 'u')
		ft_putsize_t_base(va_arg(values, unsigned), "0123456789", strlen);
	if (c == 'x')
		ft_putsize_t_base(va_arg(values, unsigned), "0123456789abcdef", strlen);
	if (c == 'X')
		ft_putsize_t_base(va_arg(values, unsigned), "0123456789ABCDEF", strlen);
	if (c == 'p')
	{
		ft_putstr_fd("0x", 1, strlen);
		ft_putsize_t_base(va_arg(values, size_t), "0123456789abcdef", strlen);
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	values;
	int		i;
	int		*strlen;

	strlen = malloc(sizeof(int));
	*strlen = 0;
	i = 0;
	va_start(values, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			conversions(s[i + 1], values, strlen);
			i++;
		}
		else
		{
			*strlen += 1;
			write(1, &s[i], 1);
		}
		i++;
	}
	va_end(values);
	i = *strlen;
	free(strlen);
	return (i);
}
/*
int	main()
{
	char	*p = "hello";
	ft_printf("%p\n",(size_t) &p);
	printf("%p\n", &p);
	int 	i = -214748647;
	ft_printf("%i\n", i);
	printf("%d\n", i);
	unsigned long 	u = 4294967296;
	ft_printf("%c\n", 'a');
	printf("%lu\n", u);



	return (0);
}
*/
