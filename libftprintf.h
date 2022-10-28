/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafilipe <rafilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:04:18 by rafilipe          #+#    #+#             */
/*   Updated: 2022/10/28 12:29:04 by rafilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
void	ft_putnbr_base(long n, int base);
void	ft_putnbr_base_low(long n, int base);
void	ft_putptr_hex(unsigned long n, int base);
void	ft_putchar(char c);
void	ft_putstr(char *s);
//char	*ft_strdup(const char *str);
//int		ft_format_count(const char *holders, const char *str);
//char	ft_check_format(const char *holders, const char c);

#endif