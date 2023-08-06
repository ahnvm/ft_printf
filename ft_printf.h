/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acan <ahmetabdullahcan@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:29:15 by acan              #+#    #+#             */
/*   Updated: 2023/07/23 10:03:48 by acan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_printhex(unsigned int n, int i);
int	ft_putnbr_u(unsigned int n);
int	ft_cases(const char s, va_list args);
int	ft_printf(const char *s, ...);
int	ft_printhex_up(unsigned int n, int i);
int	ft_printhex_p(unsigned long n, int i);

#endif