/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:56:48 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 17:58:36 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main()
{
    //char p[]="helle ";
    char v[]="helle ";
    int i=8;
    int b = 48;
   // memset(p,b,i);
   //ft_memset(v,b,i);
//printf("%s",memset(v,b,i));
printf("\n%s",ft_memset(v,b,i));
}*/
