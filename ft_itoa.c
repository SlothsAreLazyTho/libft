/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:11:48 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/24 17:47:20 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap(char *a, char *b)
{
	int	temp;	

	temp = *a;
	*a = *b;
	*b = temp;
}

static char	*ft_reverse_string(char	*s, int negative)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = (ft_strlen(s));
	str = s;
	if (negative)
		str[j++] = '-';
	while (i < j)
		ft_swap(&s[i++], &s[--j]);
	str[ft_strlen(str)] = '\0';
	return (s);
}

static int	ft_countn(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*validate_args(int n)
{
	if (n == -0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		multi;
	char	*str;

	if (n == -2147483648 || n == -0)
		return (validate_args(n));
	i = 0;
	multi = 0;
	len = ft_countn(n);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		multi = 1;
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	ft_reverse_string(str, multi);
	return (str);
}
