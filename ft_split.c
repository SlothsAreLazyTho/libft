/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:59:27 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/17 18:04:17 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

int	count_strings(const char *s, char divider)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == divider)
			j++;
		i++;
	}
	return (j);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		pos;
	char	**strs;

	if (!s)
		return (NULL);
	i = 0;
	strs = malloc(count_strings(s, c) * sizeof(char *));
	pos = 0;
	if (strs == 0)
		return (0);
	while (s[i])
	{
		k = 0;
		j = i;
		while (s[i] != c && s[i] != '\0')
		{
			k++;
			i++;
		}
		strs[pos] = (char *)ft_calloc((k + 1), sizeof(char));
		strlcpy(strs[pos++], &s[j], (k + 1));
		i++;
	}
	return (strs);
}

int main()
{
	char *s1 		= "      split       this for   me  !       ";
	char divider 	= ' ';
	char **s 		= ft_split(s1, divider);
	
	for (int i = 0; i < count_strings(s1, divider); i++)
		printf("%s\n", s[i]);
}