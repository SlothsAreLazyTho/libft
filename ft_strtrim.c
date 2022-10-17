// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        ::::::::            */
// /*   ft_strtrim.c                                       :+:    :+:            */
// /*                                                     +:+                    */
// /*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
// /*                                                   +#+                      */
// /*   Created: 2022/10/13 14:44:41 by cbijman       #+#    #+#                 */
// /*   Updated: 2022/10/17 16:58:10 by cbijman       ########   odam.nl         */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // char	*str_replace(char *str, char *characters, int length)
// // {
// // 	//Iterate till length and replace every occurence & return the position the string ended at to copy it to string.
// // 	return ("OK!");
// // }

// int	contain(char c, char *set)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (c == set[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// char	*contain_symbol(char *s, char *set)
// {
// 	int	i;
	
// 	i = 0;
// 	while (s[i])
// 	{
// 		if(!contain(s[i], set))
// 			return (&s[i]);
// 		i++;
// 	}
// 	return (s);
// }

// char	*ft_strtrim(char *s1, char *set)
// {
// 	int		i;
// 	int		length;
// 	char	*str;
// 	char	*str_malloc;

// 	i = 0;
// 	str = contain_symbol(s1, set);
// 	length = strlen(str);
// 	while (length--)
// 	{
// 		if(!contain(str[length], set))
// 			i++;
// 	}
	
// 	//printf("Length: (Length: %d, Index: %d)\n", length, i);
// 	str_malloc = (char *)malloc(i * sizeof(char));
// 	if(str_malloc == NULL)
// 		return (NULL);
// 	//strlcpy(str_malloc, str, i);
// 	strncpy(str_malloc, str, (i + 1));
// 	str[i + 2] = '\0';
// 	return (str_malloc);
// }

// // {
// // 	int		i;
// // 	int		j;
// // 	int		s_len;
// // 	int		s1_len;
// // 	char	*str;
// // 	i = 0;
// // 	s_len = strlen(s1);
// // 	s1_len = strlen(set);	
// // 	while (s1[i])
// // 	{
// // 		while (set[j])
// // 		{
// // 			if (set[j] == s1[i])
// // 				s1[i] = 32;
// // 			j++;
// // 			i++;
// // 		}
// // 		i++;
// // 	}
// // 	strlcpy(str, &s1[i], s_len + 1);
// // 	return ("OK!");
// // }

// int	main(void)
// {
// 	char *s1 = "  |   |    |   | Chino Bijman | | | ";
// 	char *ret = ft_strtrim(s1, " |");
// 	printf("Answer: %s", ret);
// 	free(ret);
// }

// /*

// 			match = 1;
// 		if(!match)
// 			printf("%c", s1[i]);*/
// /*
// j = 0;
// 		while(set[j])
// 		{
// 			if(s[i] != set[j])
// 				printf("Match found: (%c)\n", s[i]);
// 			j++;
// 		}*/