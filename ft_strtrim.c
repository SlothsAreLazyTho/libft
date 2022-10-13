/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 14:44:41 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/13 17:45:11 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char 	*str_replace(char *str, char* characters, int length)
{
	//Iterate till length and replace every occurence & return the position the string ended at
	//To copy it to string.	
}


char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	int		s_len;
	int		s1_len;
	char	*str;

	i = 0;
	s_len = strlen(s1);
	s1_len = strlen(set);	
	if(strncmp(s1, set, s1_len) == 0)
		i += s1_len;

	if(strncmp(&s1[s_len - s1_len], set, s1_len) == 0)
		s_len -= s1_len;

	str = (char *)malloc((s_len + 1) * sizeof(char));
	if(str == 0)
		return (0);

	strlcpy(str, &s1[i], s_len + 1);
	return (str);
}

int	main(void)
{
	char *s1 = "  |   |    |   |  ";
	char *ret = ft_strtrim(s1, " |");
	printf("Answer: %s", ret);
	free(ret);
}

/*

			match = 1;
		if(!match)
			printf("%c", s1[i]);*/