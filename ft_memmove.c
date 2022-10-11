/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:46:54 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/11 17:09:20 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "./include/libft.h"

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	int		i;
// 	char	*temp;
// 	char	*source;

// 	i = 0;
// 	temp = (char *)&dst;
// 	source = (char *) src;
// 	while (len--)
// 		temp[i] = source[i];
// 	return (dst);
// }

// int	main(void)
// {
// 	int	src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int	dest[10];
// 	int count = 5;

// 	memmove(dest, src, count * sizeof(int));
// 	for (int i = 0; i < count; i++)
// 	{
// 		printf("[%p] %d\t[%p] %d\n", &src[i], src[i], &dest[i], dest[i]);
// 	}
// 	return (0);
// }
