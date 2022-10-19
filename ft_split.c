/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:59:27 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/19 17:38:09 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

int	count_strings(char *s, char divider)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == divider && s[i] != '\0')
		{
			j++;
			while (s[i] == divider)
				i++;
		}
		i++;
	}
	return (j);
}

int	find_next_divider(char *s, char divider)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == divider && s[i])
			return (i);
		i++;
	}
	return (i);
}

int	ft_strlen_till_divider(char *s, char divider)
{
	int	i;

	i = 0;
	while (s[i] != divider && s[i])
		i++;
	return (i);
}

//Allocates (with malloc(3)) and returns an array
//of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter.  The array must end
//with a NULL pointer.
char	**ft_split(char *s, char c)
{
	int		i;
	int		k;
	int		l;
	char	**split;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	l = 0;
	split = (char **) malloc(count_strings(s, c) * sizeof(char *));
	if (!split)
		return (NULL);
	while (s[i])
	{
		while (find_next_divider(&s[i], c) > 0)
		{
			k = ft_strlen_till_divider(&s[i], c);
			split[l++] = ft_substr(&s[i], 0, k);
			i += k;
		}
		i++;
	}
	split[l] = NULL;
	return (split);
}
