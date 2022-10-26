/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 14:50:28 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/26 17:55:05 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	last = ft_lstlast(*lst);
	printf("Last object: %s\n", last->content);
	last->next = new;
	*lst = new;
}

int main()
{
	t_list *a = ft_lstnew("Hello ");
	t_list *b = ft_lstnew("World");
	t_list *c = ft_lstnew(", ");
	t_list *d = ft_lstnew("Mijn ");
	t_list *e = ft_lstnew("Naam ");
	t_list *f = ft_lstnew("Is ");
	
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = f;
	
	t_list *g = ft_lstnew("Chino!");
	ft_lstadd_back(&f, g);
	
	t_list *pos;
	pos = a;
	while(pos)
	{
		printf("%s", pos->content);
		pos = pos->next;
	}
}