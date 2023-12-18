/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_init.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: root <root@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/15 01:42:54 by root          #+#    #+#                 */
/*   Updated: 2023/12/18 14:28:36 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Initializes a string object.
 *
 * This function allocates memory for the string and initializes its properties.
 *
 * @param arg The string object to initialize.
 * @param size The initial size of the string.
 * @return true if the string is successfully initialized, false otherwise.
 */
bool	ft_string(t_string *arg, size_t size)
{
	arg->content = malloc(size * sizeof(char));
	if (!arg->content)
		return (false);
	arg->index = 0;
	arg->capacity = size;
	return (true);
}
