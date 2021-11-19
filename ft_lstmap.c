/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:33:34 by youssama          #+#    #+#             */
/*   Updated: 2021/11/17 20:57:15 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*p;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	p = lst;
	new = NULL;
	tmp = NULL;
	while (p != NULL)
	{
		tmp = ft_lstnew(f(p -> content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		p = p -> next;
	}
	return (new);
}
