/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:16:54 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/10 13:18:49 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
