/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 14:44:41 by cbijman       #+#    #+#                 */
/*   Updated: 2022/11/24 17:39:46 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	size_t	start_pos;
	size_t	last_pos;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start_pos = 0;
	last_pos = ft_strlen(s1);
	while (s1[start_pos] != '\0' && ft_strchr(set, s1[start_pos]) != 0)
		start_pos++;
	while (ft_strrchr(set, s1[last_pos]) != 0)
		last_pos--;
	last_pos -= start_pos;
	str = ft_substr(s1, start_pos, (last_pos + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}
