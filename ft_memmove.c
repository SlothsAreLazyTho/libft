/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:46:54 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/13 15:07:09 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*temp;
	char	*temp_src;

	i = 0;
	temp = (char *) dst;
	temp_src = (char *) src;
	if (len == 0)
		return (temp);
	while (len--)
	{
		temp[i] = temp_src[i];
		i++;
	}
	return (temp);
}
