/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:09:07 by trerolle          #+#    #+#             */
/*   Updated: 2022/01/06 19:40:55 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"


void	ft_putnbr_size_t_base(size_t nbr, char *base);

void	conversions(char c, va_list values)
{
	
	if (c == 'c')
 		ft_putchar_fd(va_arg(values, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg(values, char *), 1);
	if (c == 'i' && c == 'd')
		ft_putnbr_fd(va_arg(values, int), 1);
	if (c == '%')
		ft_putchar_fd('%', 1);
	if (c == 'u')
		ft_putnbr_unsigned_fd(va_arg(values, unsigned), 1);
	if (c == 'x')
		ft_putnbr_unsigned_base(va_arg(values, unsigned), "0123456789abcdef");
	if (c == 'X')
		ft_putnbr_unsigned_base(va_arg(values, unsigned), "0123456789ABCDEF");
	if (c == 'p')
		ft_putstr_fd("0x", 1);
		ft_putnbr_size_t_base(va_arg(values, size_t), "0123456789abcdef");

}



int	ft_printf(const char *s, ...)
{
	va_list	values;
	int		i;

	i = 0;
	va_start(values, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			conversions(s[i + 1], values);
			i++;
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(values);
	return (0);
}

int	main()
{
	char	*p = "hello";
	ft_printf("%p\n", (size_t)&p);
	printf("%p\n", &p);

	return (0);
}

