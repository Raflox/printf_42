/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbase_low.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:59:36 by rafilipe          #+#    #+#             */
/*   Updated: 2022/10/28 17:17:26 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbase_low(long n, int b)
{
	long int	nb;
	int			x;

	nb = n;
	x = 0;
	if (nb < 0)
	{
		x += ft_putchar('-');
		nb *= -1;
	}
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
