/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_join.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: root <root@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/15 01:42:54 by root          #+#    #+#                 */
/*   Updated: 2023/12/18 14:28:40 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Joins a string to the end of a t_string object.
 *
 * @param arg The t_string object to which the string will be joined.
 * @param str The string to be joined.
 * @return True if the string was successfully joined, false otherwise.
 */
bool	ft_string_join(t_string *arg, char *str)
{
	size_t	index;

	if (!arg || !str || !*str)
		return (true);
	index = 0;
	while (str[index])
	{
		if (!ft_string_append(arg, str[index]))
			return (false);
		index++;
	}
	return (true);
}
