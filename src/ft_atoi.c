/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 11:24:04 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/05 11:38:26 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	multi;
	int	answer;

	i = 0;
	multi = 1;
	answer = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	if (str[i] == '-')
		multi = -multi;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
		answer = (answer * 10) + (str[i++] - '0');
	return (answer * multi);
}
