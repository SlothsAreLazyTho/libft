/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:46:54 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/05 17:19:45 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	i = 0;
	while (len--)
		ft_memcpy((char *) dst[i], src[i], ++i);
	return (dst);
}