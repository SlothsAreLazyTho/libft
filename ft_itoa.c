/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:11:48 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/18 16:52:39 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char	*ft_strcpy(char *dst, char *src)
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

char	*validate_args(char *str, int n)
{
	if (n == -0)
		return (ft_strcpy(str, "0"));
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	return (NULL);
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
	if (n == -2147483648 || n == -0 || str == NULL)
		return (validate_args(str, n));
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
