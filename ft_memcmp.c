/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:08:31 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/29 00:16:17 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*pt;
	size_t				i;

	p = (const unsigned char *)s1;
	pt = (const unsigned char *)s2;
	i = 0;
	while (n > i)
	{
		if (p[i] != pt[i])
			return (p[i] - pt[i]);
		i++;
	}
	return (0);
}
// int main ()
// {
// 	printf("%d\n",ft_memcmp("hh","hhk",0));
// }