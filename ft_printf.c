/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:10:45 by rafilipe          #+#    #+#             */
/*   Updated: 2022/10/28 12:42:21 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


static int	ft_checkprint(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr_base(va_arg(args, int), 10);
	else if (c == 'X')
		ft_putnbr_base(va_arg(args, int), 16);
	else if (c == 'x')
		ft_putnbr_base_low(va_arg(args, int), 16);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		ft_putptr_hex(va_arg(args, unsigned long), 16);
	}
	else
		return (0);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			x;
	va_list		args;

	va_start(args, format);
	x = 1;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				ft_putchar(format[++i]);
			else if (ft_checkprint(format[i + 1], args))
				i++;
			else
				ft_putchar(format[i]);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (x);
}

