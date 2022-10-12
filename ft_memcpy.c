/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:38:33 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/12 20:01:26 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "./include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*temp;

	temp = (char *)dst;
	i = 0;
	while (n--)
	{
		temp[i] = ((char *) src)[i];
		i++;
	}
	return (dst);
}
