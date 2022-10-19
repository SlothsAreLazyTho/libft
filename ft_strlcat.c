/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:10:26 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/19 17:58:25 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	if (size == 0)
		return (0);

	i = ft_strlen(dst);
	j = 0;
	src_len = ft_strlen(src);
	if (i >= size)
		return (size + src_len);
	j = ft_strlcpy(&dst[i], (char *)src, (size - i));
	return (j);
}
