/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:33:23 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/19 20:05:15 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = start;
	j = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	if (start >= len)
		return (str);
	ft_strlcpy(str, &((char *) s)[start], ++len);
	return (str);
}
