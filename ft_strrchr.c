/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:00:07 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/20 16:23:21 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (s[len] == (char) c)
		return ((char *)&s[len]);
	while (len--)
		if (s[len] == (char) c)
			return ((char *)&s[len]);
	return (0);
}
