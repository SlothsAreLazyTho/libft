/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:38:33 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/05 11:45:31 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*temp;
	char	*temp_src;

	temp = (char *) dst;
	temp_src = (char *)src;
	i = 0;
	while (--n)
	{
		temp[i] = temp_src[i];
		i++;
	}	
	return (dst);
}
