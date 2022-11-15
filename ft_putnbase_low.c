/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbase_low.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:59:36 by rafilipe          #+#    #+#             */
/*   Updated: 2022/11/08 12:09:10 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbase_low(long n, unsigned int b)
{
	unsigned int	nb;
	int				x;

	nb = n;
	x = 0;
	if (nb > b - 1)
	{
		x += ft_putnbase_low(nb / b, b) + ft_putnbase_low(nb % b, b);
	}
	else if (nb < 10)
	{
		nb += 48;
		x += ft_putchar(nb);
	}
	else
	{
		nb += 87;
		x += ft_putchar(nb);
	}
	return (x);
}
