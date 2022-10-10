/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 14:31:45 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/06 15:26:16 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

//todo Makeup with memcpy & rewrite memcpy..
size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}