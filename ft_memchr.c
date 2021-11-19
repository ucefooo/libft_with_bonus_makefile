/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:42:37 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 17:46:49 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	b;
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (src[i] == b)
		{
			return (&src[i]);
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char *f="hexllo pxuta xm";
    int a=4;
    int c = 120;
    printf("%s\n%s",memchr(f,c,a),ft_memchr(f,c,a));
}*/
