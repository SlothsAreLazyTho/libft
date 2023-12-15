/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/28 16:21:27 by cbijman       #+#    #+#                 */
/*   Updated: 2023/12/15 00:50:56 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t oldsize, size_t size)
{
	void	*nptr;

	if (!ptr)
		return (NULL);
	if (oldsize == size)
		return (ptr);
	if (oldsize > size)
		size = oldsize;
	nptr = malloc(size);
	if (!nptr)
		return (free(ptr), NULL);
	ft_memcpy(nptr, ptr, oldsize);
	free(ptr);
	return (nptr);
}
