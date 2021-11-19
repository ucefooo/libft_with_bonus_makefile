/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:03:58 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 17:05:40 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = '\0';
		s++;
		i++;
	}
}

/*int main()
{
    char o[]="ghello jei [pwfoij kldskl";
    char v[]="ghello jei [pwfoij kldskl";
    char p[]="ghello jei [pwfoij kldskl";
    int b=5;
ft_bzero(p,b);
bzero(v,b);
for (int i=0;i<strlen(o);i++){
    printf("%c",v[i]);
}
printf("\n");
for (int i=0;i<strlen(o);i++){
    printf("%c",p[i]);
}
}*/
