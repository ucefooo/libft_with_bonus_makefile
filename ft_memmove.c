/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:52:20 by youssama          #+#    #+#             */
/*   Updated: 2021/11/10 16:26:05 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*s;

	if (!dst && !src)
		return (0);
	i = 0;
	p = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s > p)
		return (ft_memcpy(p, s, len));
	while (i < len)
	{
		p[len - i - 1] = s[len - i - 1];
		i++;
	}
	return (dst);
}
/*int main(){
char t[50]="heelo hi hei 12345";
char b[160]="220501251662164167uururkrukukruurrurukrukrukrukru";
printf("%s",ft_memmove(b,t,150));
}*/