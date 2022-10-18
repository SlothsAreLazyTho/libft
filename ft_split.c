/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:59:27 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/18 17:47:12 by cbijman       ########   odam.nl         */
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		pos;
	char	**strs;

	if (!s)
		return (NULL);
	i = 0;
	strs = (char **)malloc(count_strings(s, c) * sizeof(char *));
	pos = 0;
	if (strs == 0)
		return (0);
	while (s[i++])
	{
		k = 0;
		j = i;
		while (s[i] != c && s[i] != '\0')
		{
			k++;
			i++;
		}
		if (k > 0)
			strs[pos++] = ft_substr(&s[j], 0, (k));
	}
	return (strs);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	divider;
// 	char	**s	;
// 	int		dividers;

// 	s1 = "      split       this for   me  !       ";
// 	divider = ' ';
// 	s = ft_split(s1, divider);
// 	dividers = count_strings(s1, divider);

// 	for (int i = 0; i < dividers; i++)
// 	{
// 		for (int j = 0; j < strlen(s[i]) + 1; j++)
// 			printf("%c (%d)", s[i][j], (int)s[i][j]);
// 		printf("\n-----------------------------------------------------\n");
// 	}
// }
