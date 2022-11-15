/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:35:26 by rafilipe          #+#    #+#             */
/*   Updated: 2022/11/02 15:38:32 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
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
	if (nb > 9)
	{
		x += ft_putnbr(nb / 10) + ft_putnbr(nb % 10);
	}
	else
	{
		nb += 48;
		x += ft_putchar(nb);
	}
	return (x);
}
