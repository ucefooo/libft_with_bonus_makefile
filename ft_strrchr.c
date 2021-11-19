/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:50:25 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 18:52:55 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*b;

	i = 0;
	b = NULL;
	while (s[i])
	{
		if ((char)s[i] == (char)c)
			b = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (b);
}
/*int main()
{
    char* t="heopouta";
    char c='l';
printf("%s \n%s",strrchr(t,c),ft_strrchr(t,c));
}*/
