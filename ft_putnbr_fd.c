/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:01:35 by youssama          #+#    #+#             */
/*   Updated: 2021/11/09 18:03:24 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nr;

	nr = n;
	if (nr < 0)
	{
		nr = -nr;
		ft_putchar_fd('-', fd);
	}
	if (nr >= 0 && nr <= 9)
	{
		ft_putchar_fd(nr + 48, fd);
	}
	if (nr >= 10)
	{
		ft_putnbr_fd(nr / 10, fd);
		ft_putchar_fd((nr % 10) + 48, fd);
	}
}
