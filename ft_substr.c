/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:16 by youssama          #+#    #+#             */
/*   Updated: 2021/11/10 15:43:36 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*r;

	i = 0;
	r = NULL;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while (i < (unsigned int)len)
	{
		r[i] = s[start];
		i++;
		start++;
	}
	r[i] = '\0';
	return (r);
}
/*int main()
{
    char p[]="hello hi world";
    char *r;
    r = ft_substr(p,2,3);
    printf("%s",r);
}*/
