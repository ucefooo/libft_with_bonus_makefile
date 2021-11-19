/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:35:24 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 17:35:37 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;
	t_list	*p;

	if (!lst || !del)
		return ;
	t = NULL;
	p = *lst;
	while (p != NULL)
	{
		t = p -> next;
		del(p -> content);
		free(p);
		p = t;
	}
	*lst = NULL;
}
