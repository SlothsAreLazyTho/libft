/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/28 16:00:22 by cbijman       #+#    #+#                 */
/*   Updated: 2023/12/15 00:47:51 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	size_t	i;
	size_t	c1;
	size_t	pos;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[c1])
		{
			pos = i;
			c1 = 0;
			while (str[i] == to_find[c1] && to_find[c1] != '\0')
			{
				c1++;
				i++;
				if (to_find[c1] == '\0')
					return (&str[pos]);
			}
			i = pos;
		}
		i++;
	}
	return (NULL);
}
