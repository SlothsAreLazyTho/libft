/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_color_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 15:00:39 by cbijman       #+#    #+#                 */
/*   Updated: 2024/01/18 15:03:09 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_r(int rgba)
{
	return ((rgba >> 24) & 0xFF);
}

int	ft_get_g(int rgba)
{
	return ((rgba >> 16) & 0xFF);
}

int	ft_get_b(int rgba)
{
	return ((rgba >> 8) & 0xFF);
}

int	ft_get_a(int rgba)
{
	return (rgba & 0xFF);
}

int	ft_get_rgba(int r, int g, int b, int a)
{
	return (r << 24 | g << 16 | b << 8 | a);
}