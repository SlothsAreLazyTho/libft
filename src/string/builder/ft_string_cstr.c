/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string_cstr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: root <root@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/15 01:42:54 by root          #+#    #+#                 */
/*   Updated: 2023/12/18 14:28:29 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string object to a C-style string.
 *
 * @param arg The string object to convert.
 * @return A C-style string representation of the string object.
 *         Returns NULL if the conversion fails.
 */
char	*ft_string_cstr(t_string *arg)
{
	char	*tmp;

	if (!ft_string_append(arg, '\0'))
		return (ft_string_free(arg), NULL);
	tmp = ft_strdup(arg->content);
	if (!tmp)
		return (ft_string_free(arg), NULL);
	return (ft_string_free(arg), tmp);
}
