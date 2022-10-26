/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 14:17:20 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/26 18:13:47 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pos;
	int		i;
	int		size;

	pos = lst;
	i = 0;
	size = ft_lstsize(lst);
	while (size--)
		if (pos->next)
			pos = pos->next;
	return (pos);
}

// int main()
// {

// 	t_list *a = ft_lstnew("One");
// 	t_list *b = ft_lstnew("Two");
// 	t_list *c = ft_lstnew("Three");
// 	t_list *d = ft_lstnew("Four");
// 	t_list *e = ft_lstnew("Five");

// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
// 	d->next = e;
// 	ft_lstlast(a);
// }