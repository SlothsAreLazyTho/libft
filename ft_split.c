/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:59:27 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/24 17:47:41 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_next_divider(char *s, char divider)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == divider || s[i] == '\0')
			return (i);
		i++;
	}
	return (i);
}

int	ft_strlen_till_divider(char *s, char divider)
{
	int	i;

	i = 0;
	while (s[i] != divider && s[i] != '\0')
		i++;
	return (i);
}

int	count_strings(char *s, char divider)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (find_next_divider(&s[i], divider) > 0)
		{
			j = ft_strlen_till_divider(&s[i], divider);
			count++;
			i += j;
		}
		i++;
	}
	return (count);
}

void	free_split(char **array, int count)
{
	while (count--)
		free(array[count]);
	free(array);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		k;
	size_t		l;
	char		*str;
	char		**split;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	l = 0;
	str = (char *)s;
	split = (char **) ft_calloc(count_strings(str, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (find_next_divider(&str[i], c) > 0 && i < ft_strlen(str))
		{
			k = ft_strlen_till_divider(&str[i], c);
			split[l] = ft_substr(&str[i], 0, k);
			if (split[l] == NULL)
			{
				free_split(split, l);
				return (NULL);
			}
			l++;
			i += k;
		}
		i++;
	}
	split[l] = NULL;
	return (split);
}
