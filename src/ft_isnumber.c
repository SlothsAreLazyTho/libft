/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isnumber.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 15:28:43 by cbijman       #+#    #+#                 */
/*   Updated: 2023/04/12 15:30:45 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isnumber(const char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (false);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (false);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}
