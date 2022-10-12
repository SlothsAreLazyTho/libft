/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:39:20 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/12 14:03:54 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	if (needle[i] == '\0' || len == 0)
		return ((char *)haystack);
	while (--len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j] && len)
		{
			k = i;
			while (haystack[i++] == needle[j++])
				if (needle[j] == '\0')
					return ((char *)&haystack[k]);
			k = 0;
		}
		i++;
	}
	return (0);
}
