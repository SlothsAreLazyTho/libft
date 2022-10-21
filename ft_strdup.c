/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 16:26:58 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/21 12:42:04 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*str;

	len = (ft_strlen(s1) + 1);
	str = (char *)malloc(len * sizeof(char));
	i = 0;
	if (str == 0)
		return (0);
	ft_strlcpy(str, (char *)s1, len);
	return (str);
}
