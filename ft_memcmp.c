/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:47:20 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 17:49:19 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s, const void *t, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if (*(unsigned char *)s != *(unsigned char *)t)
			return (*(unsigned char *)s - *(unsigned char *)t);
		s++;
		t++;
		i++;
	}
	return (0);
}
/*int main()
{
    char *t= "abcdef";
   char *s="abcdeF";
   int n=6;
printf("%d\n%d",memcmp(t,s,6),ft_memcmp(t,s,6));
}*/
