/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:00:07 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/11 15:04:40 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (ft_strlen(s) + 1);
	while(len--)
		if(s[len] == c)
			return ((char *)&s[len]);
	return (NULL);
}
