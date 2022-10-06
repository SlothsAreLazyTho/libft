/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:37:19 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/06 12:52:52 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "./include/libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n--)
		if (*s1 != *s2)
			return (*s1 - *s2);
	return (0);
}
