/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:11:48 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/13 15:07:09 by cbijman       ########   odam.nl         */
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
	if(n < 0)
	{
		ni = -ni;
		count++;
	}
	if(n == 0)
		return (0);
	while (ni >= 10)
	{
		ni /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	int		multi;
	char	*str;

	len = ft_countn(n);
	str = (char *) malloc((len) * sizeof(char));
	if (n == -0)
		return (ft42_strcpy(str, "0"));
	if (n == -2147483648)
		return (ft42_strcpy(str, "-2147483648"));
	if (str == 0)
		return (0);
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
	str[(strlen(str) + 1)] = '\0';
	return (str);
}

// int main()
// {
// 	int		n = 25;
// 	char	*a = ft_itoa(n);

// 	printf("Expected:\t%s\nResult:\t\t%s\n", "Nothing?", a);
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", (int) a[i]);
// }