/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:51:07 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/10 13:11:12 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (n--)
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	return (0);
}
