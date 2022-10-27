/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 16:44:33 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/27 18:37:09 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(pos->content));
	while (lst->next)
	{
		if (!ft_lstlast(lst->next))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&pos->next, ft_lstnew(f(pos->next)));
		pos = pos->next;
	}

	return (new_list);
}

int main(void)
{
	
}
