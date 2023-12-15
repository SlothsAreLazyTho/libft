/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/14 17:53:15 by cbijman       #+#    #+#                 */
/*   Updated: 2023/12/15 00:53:02 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdarg.h>

static int	ft_printhex(unsigned long int n, char flag)
{
	if (flag == 'x')
		return (ft_puthex(n, 0));
	else if (flag == 'X')
		return (ft_puthex(n, 1));
	return (0);
}

static int	ft_printptr(unsigned long int n)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex(n, 0);
	return (count);
}

static int	is_flag(char flag)
{
	if (flag == 'c' || flag == 's' || flag == 'p'
		|| flag == 'd' || flag == 'i' || flag == 'u'
		|| flag == 'x' || flag == 'X' || flag == '%')
		return (1);
	return (0);
}

static int	convert(char flag, va_list args)
{
	if (flag == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (flag == 'i' || flag == 'd')
		return (ft_putnbr(va_arg(args, int)));
	if (flag == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	if (flag == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (flag == 'p')
		return (ft_printptr(va_arg(args, unsigned long int)));
	if (flag == 'x' || flag == 'X')
		return (ft_printhex(va_arg(args, unsigned int), flag));
	if (flag == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	size_t		i;
	size_t		size;
	size_t		length;
	va_list		args;

	if (!s)
		return (0);
	i = 0;
	length = 0;
	size = ft_strlen(s);
	va_start(args, s);
	while (i < size)
	{
		if (s[i] == '%' && is_flag(s[++i]))
			length += convert(s[i], args);
		else
			length += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (length);
}
