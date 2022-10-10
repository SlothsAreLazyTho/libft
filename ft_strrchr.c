/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:00:07 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/10 16:21:00 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#include "./include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	if (j > 0)
		return ((char *) &s[j]);
	return (NULL);
}

// int main()
// {
// 	char a[50] = "Bahahahahahaha";
// 	printf("Result: %s\tExpected: %s",
// 		ft_strrchr(a, 'a'), 
// 		strrchr(a,    'a'));
// }