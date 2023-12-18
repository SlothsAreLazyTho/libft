/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:11:48 by cbijman       #+#    #+#                 */
/*   Updated: 2023/12/18 14:28:53 by cbijman       ########   odam.nl         */
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

static char	*ft_reverse_string(char *s, int n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = (ft_strlen(s));
	str = s;
	if (n)
		str[j++] = '-';
	while (i < j)
		ft_swap(&s[i++], &s[--j]);
	str[ft_strlen(str)] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	t_string	str;
	char		*tmp;

	if (n == -0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!ft_string(&str, 8))
		return (NULL);
	if (n < 0 && !ft_string_append(&str, '-'))
		return (NULL);
	if (n < 0)
		n = -n;
	while (n > 0 && ft_string_append(&str, (n % 10 + '0')))
	{
		n /= 10;
	}
	tmp = ft_string_cstr(&str);
	if (!tmp)
		return (NULL);
	ft_reverse_string(tmp, *tmp == '-');
	return (tmp);
}
