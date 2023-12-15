/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 13:44:09 by cbijman       #+#    #+#                 */
/*   Updated: 2022/11/24 17:35:23 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;
	t_list	*temp;

	if (!lst)
		return ;
	pos = *lst;
	while (pos)
	{
		temp = pos->next;
		ft_lstdelone(pos, del);
		pos = temp;
	}
	*lst = NULL;
}
