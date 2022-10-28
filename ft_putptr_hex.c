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

#include "libftprintf.h"

void	ft_putptr_hex(unsigned long n, int base)
{
	unsigned long	nbr;

	nbr = n;
	if (nbr > base - 1)
	{
		ft_putptr_hex(nbr / base, base);
		ft_putptr_hex(nbr % base, base);
	}
	else if (nbr < 10)
		ft_putchar(nbr += 48);
	else
		ft_putchar(nbr += 87);
}
