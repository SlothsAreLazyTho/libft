/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:11:48 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/17 15:47:50 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft42_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

int	ft_countn(int n)
{
	int	ni;
	int	count;

	ni = n;
	count = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		ni = -ni;
		count++;
	}
	while (ni >= 10)
	{
		ni /= 10;
		count++;
	}
	return (count);
}

char	*validate_args(int n)
{
	if (n == -0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	return ("0");
}

char	*ft_itoa(int n)
{
	int		len;
	int		length_nb;
	int		multi;
	char	*str;

	len = ft_countn(n);
	length_nb = len;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648 || n == -0)
		return (ft42_strcpy(str, validate_args(n)));
	if (n < 0)
	{
		multi = 1;
		n = -n;
	}
	while (n > 0)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	if (multi)
		str[(len - 1)] = '-';
	str[(length_nb)] = '\0';
	return (str);
}
