/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:59:36 by rafilipe          #+#    #+#             */
/*   Updated: 2022/10/28 12:22:58 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_hex(unsigned long n, int base)
{
	unsigned long	nbr;
	int				x;

	nbr = n;
	x = 0;
	x += ft_putstr("0x");
	if (nbr > (unsigned long)(base - 1))
	{
		x += ft_putptr_hex(nbr / base, base);
		x += ft_putptr_hex(nbr % base, base);
	}
	else if (nbr < 10)
	{
		nbr += 48;
		x += ft_putchar(nbr);
	}
	else
	{
		nbr += 87;
		x += ft_putchar(nbr);
	}
	return (x);
}
