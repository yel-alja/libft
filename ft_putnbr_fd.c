/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:32:20 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/06 09:45:29 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	plsnbr(long n, int fd)
{
	if (n > 9)
	{
		plsnbr(n / 10, fd);
		plsnbr(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = (long)n;
	if (i < 0)
	{
		i *= -1;
		ft_putchar_fd('-', fd);
		plsnbr(i, fd);
	}
	else
		plsnbr(i, fd);
}
