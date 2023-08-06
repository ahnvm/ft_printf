/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acan <ahmetabdullahcan@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:18:59 by acan              #+#    #+#             */
/*   Updated: 2023/07/27 16:41:51 by acan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printhex(unsigned int n, int i)
{
	if (n > 15)
	{
		i += ft_printhex (n / 16, i);
		i += ft_putchar ("0123456789abcdef"[n % 16]);
	}
	else
	{
		i += ft_putchar ("0123456789abcdef"[n % 16]);
	}
	return (i);
}

int	ft_printhex_up(unsigned int n, int i)
{
	if (n > 15)
	{
		i += ft_printhex_up (n / 16, i);
		i += ft_putchar ("0123456789ABCDEF"[n % 16]);
	}
	else
	{
		i += ft_putchar ("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}

int	ft_printhex_p(unsigned long n, int i)
{
	if (n > 15)
	{
		i += ft_printhex_p (n / 16, i);
		i += ft_putchar ("0123456789abcdef"[n % 16]);
	}
	else
	{
		i += ft_putchar ("0123456789abcdef"[n % 16]);
	}
	return (i);
}
