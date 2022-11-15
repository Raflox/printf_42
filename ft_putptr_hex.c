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

int	ft_putptr_hex(size_t nbr, char *str, int x, int flag)
{
	int	base_len;

	base_len = 16;
	if (!nbr)
		return (ft_putstr("(nil)"));
	if (!flag)
		write(1, "0x", 2);
	if (nbr >= (size_t)base_len)
		x = ft_putptr_hex(nbr / base_len, str, x, 1);
	x += ft_putchar(str[nbr % base_len]);
	return (x);
}
