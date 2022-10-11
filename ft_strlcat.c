/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:10:26 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/11 17:25:37 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	isrcsize;

	i = ft_strlen(dst);
	j = 0;
	isrcsize = ft_strlen(src);
	if(i >= size)
		return (size + isrcsize);
	while(src[j] && isrcsize < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i + isrcsize);
}
