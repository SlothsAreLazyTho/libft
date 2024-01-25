/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_arrdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 15:07:43 by cbijman       #+#    #+#                 */
/*   Updated: 2024/01/25 01:43:33 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Duplicates a null-terminated array of strings.
 *
 * This function takes a null-terminated array of strings and creates a duplicate
 * of it. The duplicate array is allocated dynamically using malloc, and each
 * string in the original array is also duplicated. The resulting array is also
 * null-terminated.
 *
 * @param arr The null-terminated array of strings to duplicate.
 * @return The duplicated array of strings, or NULL if memory allocation fails.
 */
char	**ft_arrdup(char **arr)
{
	char	**array;
	size_t	index;

	if (!arr || !*arr)
		return (NULL);
	array = malloc(ft_arrlen(arr) * sizeof(char *));
	if (!array)
		return (NULL);
	index = 0;
	while (arr[index])
	{
		array[index] = ft_strdup(arr[index]);
		if (!array[index])
			return (ft_arrfree(arr), NULL);
		index++;
	}
	array[index] = NULL;
	return (array);
}
