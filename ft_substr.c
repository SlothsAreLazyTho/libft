/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:33:23 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/20 21:12:41 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*str;

	i = 0;
	str_len = strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > strlen(s))
		return (strdup("\0"));
	if ((str_len + start) < len)
		str = (char *)ft_calloc((str_len + 1), sizeof(char));
	else
		str = (char *)ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (0);
	strlcpy(str, &s[start], (len + 1));
	return (str);
}

int	main(void)
{
	char	*a = "hola";
	char	*b = ft_substr(a, 0, 18446744073709551615);

	printf("%s", b);
	free(b);
	system ("leaks a.out");
}
