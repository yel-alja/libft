/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:36:45 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/31 20:27:44 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*pt;
	size_t				i;

	p = (unsigned char *)dst;
	pt = (const unsigned char *)src;
	i = 0;
	if (!p && !pt)
		return (NULL);
	while (i < n)
	{
		p[i] = pt[i];
		i++;
	}
	return (dst);
}
