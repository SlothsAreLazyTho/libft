/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:39:20 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/10 17:34:11 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#include "./include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = ft_strlen(needle);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		//j = i;
		// if(ft_strncmp(&haystack[j], needle, len) == 0)
		// {
		// 	//printf("Match: %s, Length: %zu\n", &haystack[i], len);
		// 	return ((char *) &haystack[j]);
		// }
		j = 0;
		while (haystack[i] == needle[j] && needle[i])
		{
			i++;
			j++;
			if (k == j)
				return ((char *) &haystack[(i - j)]);
		}
		i++;
	}
	return (0);
}

int main()
{
	char * big = "aaaaaaaaoaaaaaauaaaaaaoaaaaat";
	char * little = "aout";
	size_t max = 9;
	char *s1 = strnstr(big, little, max);
	char *s2 = ft_strnstr(big, little, max);
	printf("%s\t%s", s1, s2);
}