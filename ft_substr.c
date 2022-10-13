/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:33:23 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/13 15:07:09 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = start;
	j = 0;
	str = malloc((len + 1) * sizeof(char));
	if (start >= len)
		return (str);
	if (str == NULL)
		return (0);
	ft_strlcpy(str, &((char *) s)[start], ++len);
	return (str);
}
