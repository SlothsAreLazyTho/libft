/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 16:26:58 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/12 17:11:57 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*str;

	len = (ft_strlen(s1) + 1);
	str = (char *)malloc(len * sizeof(char));
	i = 0;
	if (str == NULL)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
