/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:59:27 by cbijman       #+#    #+#                 */
/*   Updated: 2023/12/15 02:08:43 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_substrlen(const char *s, int start, char divider)
{
	int	i;

	i = 0;
	while (s[start] != divider && s[start] != '\0')
	{
		i++;
		start++;
	}
	return (i);
}

static int	count_strings(const char *s, char divider)
{
	size_t	i;
	size_t	j;
	int		div;

	i = 0;
	j = 0;
	div = 0;
	while (s[i])
	{
		if (s[i] != divider && div == 0)
		{
			div = 1;
			j++;
		}
		else if (s[i] == divider)
			div = 0;
		i++;
	}
	return (j);
}

void	*free_split(char **array, int count)
{
	while (count--)
		free(array[count]);
	free(array);
	return (NULL);
}

char	**ft_split(const char *s, char div)
{
	size_t		i;
	size_t		j;
	char		**split;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	split = (char **) ft_calloc(count_strings(s, div) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != div)
		{
			split[j] = ft_substr(s, i, ft_substrlen(s, i, div));
			if (split[j] == NULL)
				return (free_split(split, j));
			i += ft_substrlen(s, i, div) - 1;
			j++;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
