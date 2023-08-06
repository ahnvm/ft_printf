/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acan <ahmetabdullahcan@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:27:21 by acan              #+#    #+#             */
/*   Updated: 2023/08/06 12:54:08 by acan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cases(const char s, va_list args)
{
	int	ret;
	int	tmp;

	ret = 0;
	if (s == 'c')
		ret += ft_putchar (va_arg (args, int));
	if (s == 's')
		ret += ft_putstr (va_arg (args, char *));
	if (s == 'd' || s == 'i')
		ret += ft_putnbr (va_arg (args, int));
	if (s == 'p')
	{
		tmp = ft_putstr("0x");
		ret += ft_printhex_p (va_arg (args, unsigned long), ret);
		ret += tmp;
	}
	if (s == '%')
		ret += ft_putchar (s);
	if (s == 'u')
		ret += ft_putnbr_u (va_arg (args, unsigned int));
	if (s == 'x')
		ret += ft_printhex (va_arg (args, int), ret);
	if (s == 'X')
		ret += ft_printhex_up (va_arg (args, int), ret);
	return (ret);
}

int	ft_printf(const char *s, ...)
{
	va_list			a;
	int				ret;

	ret = 0;
	va_start (a, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '\0')
			{
				return (ret);
			}
			ret += ft_cases (*s, a);
		}
		else
			ret += ft_putchar (*s);
		s++;
	}
	va_end (a);
	return (ret);
}
