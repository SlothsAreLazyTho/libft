/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/28 16:21:27 by cbijman       #+#    #+#                 */
/*   Updated: 2023/09/26 18:58:39 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size)
{
	void	*nptr;
	size_t	newsize;

	newsize = size;
	if (!ptr)
		return (NULL);
	if (size == 0)
		return (free(ptr), NULL);
	if (size < sizeof(ptr))
		newsize = sizeof(ptr);
	nptr = malloc(newsize);
	if (!nptr)
		return (free(ptr), NULL);
	ft_memcpy(nptr, ptr, newsize);
	return (nptr);
}
