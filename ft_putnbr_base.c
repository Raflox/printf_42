/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:59:36 by rafilipe          #+#    #+#             */
/*   Updated: 2022/11/08 12:00:30 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long n, unsigned int b)
{
	unsigned int	nbr;
	int				x;

	nbr = n;
	x = 0;
	if (nbr > b - 1)
	{
		x += ft_putnbr_base(nbr / b, b) + ft_putnbr_base(nbr % b, b);
	}
	else if (nbr < 10)
	{
		nbr += 48;
		x += ft_putchar(nbr);
	}
	else
	{
		nbr += 55;
		x += ft_putchar(nbr);
	}
	return (x);
}
