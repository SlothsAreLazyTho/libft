/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:39:20 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/10 13:12:41 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#include "./include/libft.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

// char	*ft_strnstr(char *str, char *to_find, int n)
// {
// 	int		c;
// 	int		c1;
// 	int		pos;
// 	if (to_find[0] == '\0')
// 		return (str);
// 	c = 0;
// 	while (n--)
// 	{
// 		if (str[c] == to_find[c1])
// 		{
// 			pos = c;
// 			c1 = 0;
// 			while (str[c] == to_find[c1] && to_find[c1] != '\0')
// 			{			
// 				c1++;
// 				c++;
// 				if (to_find[c1] == '\0')
// 					return (&str[pos]);
// 			}
// 			c = pos;
// 		}
// 		c++;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
}

int main(void)
{
	char a[50] = "Hello this is a mesasge";

	printf("%s\n", strnstr(a, "is", 30));
	printf("%s\n", ft_strnstr(a, "is", 30));
}