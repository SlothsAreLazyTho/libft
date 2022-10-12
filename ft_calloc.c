/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 16:09:44 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/12 18:29:36 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*data;

	data = (void *) malloc(count * size);
	if (data == 0)
		return (0);
	ft_bzero(data, count * size);
	return (data);
}
