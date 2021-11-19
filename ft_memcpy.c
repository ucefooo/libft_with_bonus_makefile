/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:49:35 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 17:51:55 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		i++;
	}
	return (dst - i);
}
/*int main(){
    char t[100]="hello ghg gdfdfg hh jkut jhg hi wassup";
    char b[50]="22050125166216416";
	char *n = NULL;
	char *m=NULL;
    printf("%s",memcpy(t,b, 0));
}*/