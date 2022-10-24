/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 16:50:59 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/24 17:33:01 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

int	strlen_till_divider(char *s, char divider)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if(s[i] == divider)
			return (i);
		i++;
	}
	return (i);
}

char	*find_match(char *s, char divider)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if(s == NULL)
		return (0);
	while(s[i])
	{
		if(s[i] != divider)
		{
			j = strlen_till_divider(&s[i], divider);
			str = ft_substr(&s[i], 0, j);
			if(!str)
				return (NULL);
			return (str);
		}
		i++;
	}
	return (0);
}

void	free_split(char **array, int count)
{
	while (count--)
		free(array[count]);
	free(array);
}

char **ft_split(const char *s, char divider)
{
	int	i;
	int	j;
	char *str;

	i = 0;
	while(s[i])
	{
		printf("Length: %d\tSentence: %s\n", strlen_till_divider(&((char *)s)[i], divider), str);
		str = find_match(&((char *)s)[i], divider);
		j = strlen_till_divider(&((char *)s)[i], divider);
		i += j;
	}
	return (NULL);
}

int	mainw(void)
{
	char	*sen = "Hello There";
	int		pos  = 0;
	printf("Trying with \"%s\"\n", &sen[pos]);
	char *occ = find_match(&sen[pos], 32);
	printf("Match: %s", occ);
	return (0);
}

int	main(void)
{
	char	*sen = "Hello There"; //Dit    is een  domme   string die    niet goed   geschre ven i s! 
	ft_split(sen, ' ');
	return (0);
}