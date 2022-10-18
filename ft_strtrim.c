/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 14:44:41 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/18 16:37:24 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_start_position(char *s1, char *set)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	while (s1[i])
	{
		j = 0;
		match = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				match = 1;
			j++;
		}
		if (!match)
			break ;
		i++;
	}
	return (i);
}

int	get_last_position(char *s1, char *set)
{
	int	i;
	int	j;
	int	match;

	i = ft_strlen(s1);
	while (i--)
	{
		if (i == 0)
			return (0);
		j = 0;
		match = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				match = 1;
			j++;
		}
		if (!match)
			break ;
	}
	return (i);
}

char	*ft_strtrim(char *s1, char *set)
{
	int		start_pos;
	int		last_pos;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start_pos = get_start_position(s1, set);
	last_pos = get_last_position(&s1[start_pos], set);
	str = ft_substr(&s1[start_pos], 0, (last_pos + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}
