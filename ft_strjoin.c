/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:23:22 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 18:27:10 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		p_len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	p_len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * p_len);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
/*int main()
{
    char p[]="hello dgbhfgtfn hi";
    char t[]=" 574745645676467674667pst pst pst";
    printf("%s",ft_strjoin(p,t));
}*/
