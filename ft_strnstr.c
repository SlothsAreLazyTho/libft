/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:39:20 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/20 17:24:16 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	if (len == 0)
		return (NULL);
	if (needle[i])
		return ((char *)haystack);
	while (len > 0 && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[i++] == needle[j++])
				if (needle[j] == '\0')
					return ((char *)&haystack[k]);
			i = k;
		}
		len--;
		i++;
	}
	return (0);
}
