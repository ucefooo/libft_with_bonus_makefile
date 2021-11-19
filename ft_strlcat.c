/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:27:46 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 18:33:51 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	p;
	size_t	j;

	i = 0;
	p = 0;
	j = 0;
	while (src[i])
		i++;
	while (dst[j])
		j++;
	if (size <= j)
		return (size + i);
	p = i + j;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i++];
		j++;
	}
	dst[j] = '\0';
	return (p);
}
/*int main() {
  char p[20]="hi hello";
  char b[20]="";
    int i= ft_strlcat(p,b,-2);
    printf("%d\n%s\n%s",i,p,b);
    
    return 0;
}*/
