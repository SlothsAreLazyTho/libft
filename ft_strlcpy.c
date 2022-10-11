/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 14:31:45 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/11 17:04:43 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#include "./include/libft.h"

//todo Makeup with memcpy & rewrite memcpy..
size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i <--size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
