/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:39:00 by youssama          #+#    #+#             */
/*   Updated: 2021/11/11 22:35:23 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	chg(unsigned int n, char c)
{
    c = c + n;
    return c;
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;

	i = 0;
	if (!s || !f)
		return (NULL);
	r = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!r)
		return (NULL);
	while (s[i])
	{
		r[i] = f(i, (char)s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*int main()
{
    printf("%s",ft_strmapi("aaaabbbcccddddeeefff",chg));
}*/
