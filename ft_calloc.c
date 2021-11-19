/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:06:03 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 17:09:44 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*p;
	size_t		i;

	i = 0;
	p = (void *)malloc(size * count);
	if (!p)
		return (NULL);
	while (i < count * size)
	{
		*(char *)p = 0;
		i++;
		p++;
	}
	return ((char *)p - i);
}
/*int main(){
    char *i;
    int p=0;
    i = (char*)calloc(5,1);
    while(p< 6)
    {
        printf("%c",i[p]);
        i[p]='a';
        p++;
    }
    printf("\n%s,   %lu",i,strlen(i));
}*/
