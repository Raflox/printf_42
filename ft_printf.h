/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:04:18 by rafilipe          #+#    #+#             */
/*   Updated: 2022/11/08 12:09:32 by rafilipe         ###   ########.fr       */
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
int		ft_putnbr(long n);
int		ft_putnbr_base(long n, unsigned int b);
int		ft_putnbase_low(long n, unsigned int b);
int		ft_putptr_hex(size_t nbr, char *str, int counter, int flag);
int		ft_putchar(char c);
int		ft_putstr(char *s);

#endif