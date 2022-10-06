/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:46:54 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/06 12:52:52 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "./include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	
}

int	main(void)
{
	int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int dest[10];

	memmove(dest, src, 9 * sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", dest[i]);
	}
	return(0);
}