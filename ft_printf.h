/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:04:18 by rafilipe          #+#    #+#             */
/*   Updated: 2022/10/28 17:20:00 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
int		ft_putnbr_base(long n, int base);
int		ft_putnbase_low(long n, int base);
int		ft_putptr_hex(unsigned long n, int base);
int		ft_putchar(char c);
int		ft_putstr(char *s);

#endif