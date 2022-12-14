/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 16:44:33 by cbijman       #+#    #+#                 */
/*   Updated: 2022/12/14 18:01:31 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*elem;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem)
			ft_lstadd_back(&new_list, elem);
		else
		{
			ft_lstdelone(lst, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
