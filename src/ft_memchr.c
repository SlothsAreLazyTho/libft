/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:32:02 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/05 13:42:34 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *) s;
	if (ft_strlen(temp) > (int) n)
		n = ft_strlen(temp);
	while (n--)
	{
		if (temp[i] == c)
			return (&temp[i]);
		i++;
	}
	return (0);
}
