/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 14:31:45 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/06 12:52:52 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "./include/libft.h"

//todo Makeup with memcpy & rewrite memcpy..
size_t strlcpy(char *dst, char *src, size_t size)
{
	int i;

	i = 0;
	while(src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}