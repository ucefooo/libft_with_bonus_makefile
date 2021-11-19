/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:53:31 by youssama          #+#    #+#             */
/*   Updated: 2021/11/11 22:42:26 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return (ft_strdup(s1));
	j = ft_strlen(s1);
	while (find(set, s1[i]))
		i++;
	if (i == ft_strlen(s1))
	{
		p = ft_strdup("");
		if (!p)
			return (NULL);
		return (p);
	}
	while (find(set, s1[j - 1]))
		j--;
	p = ft_substr(s1, i, j - i);
	return (p);
}
/*int main(){
char p[]="sethihiset";
printf("%s",ft_strtrim(p,"set"));
}*/
