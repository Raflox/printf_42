/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:10:45 by rafilipe          #+#    #+#             */
/*   Updated: 2022/10/28 17:29:22 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checkprint(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_base(va_arg(args, int), 10));
	else if (c == 'X')
		return (ft_putnbr_base(va_arg(args, int), 16));
	else if (c == 'x')
		return (ft_putnbase_low(va_arg(args, int), 16));
	else if (c == 'u')
		;
	else if (c == 'p')
		return (ft_putptr_hex(va_arg(args, unsigned long), 16));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			x;
	va_list		args;

	va_start(args, format);
	x = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			x += ft_checkprint(format[i + 1], args);
			i++;
		}
		else
			x += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (x);
}
