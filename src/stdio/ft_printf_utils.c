/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 12:57:39 by cbijman       #+#    #+#                 */
/*   Updated: 2022/12/14 17:57:56 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

#include <unistd.h>
#include <limits.h>

int	ft_putchar(char c)
{
	return (write(1, &c, sizeof(char)));
}

int	ft_putstr(char *s)
{
	int	len;
	int	count;

	if (!s)
		return (ft_putstr("(null)"));
	len = 0;
	while (*s)
	{
		count = ft_putchar(*s++);
		if (count == -1)
			return (-1);
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}

int	ft_putunbr(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_putunbr(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}

int	ft_puthex(unsigned long int n, int type)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthex(n / 16, type);
		i += ft_puthex(n % 16, type);
	}
	else if (n < 10)
		i += ft_putchar(n + '0');
	else
	{
		if (type == 0)
			i += ft_putchar((n % 10) + 'a');
		else
			i += ft_putchar((n % 10) + 'A');
	}
	return (i);
}
