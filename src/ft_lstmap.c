/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 16:44:33 by cbijman       #+#    #+#                 */
/*   Updated: 2022/11/24 17:35:23 by cbijman       ########   odam.nl         */
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

// char	*fe(void *elem)
// {
// 	return ("42 is codam?");
// }

// void	del(void	*elem)
// {

// }

// int main()
// {
// 	t_list *a = ft_lstnew("Hello World");
// 	t_list *b = ft_lstnew("Hello World");
// 	t_list *c = ft_lstnew("Hello World");
// 	t_list *d = ft_lstnew("Hello World");
// 	t_list *e = ft_lstnew("Hello World");
// 	t_list *f = ft_lstnew("Hello World");
	
// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
// 	d->next = e;
// 	e->next = f;
// 	ft_lstmap(a, fe, del);
// }
