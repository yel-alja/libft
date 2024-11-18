/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:43:50 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/02 21:09:02 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t					i;
	unsigned char			*p;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
/*int main()
{
	int s = 5;
	ft_memset(&s, 128,4);
	ft_memset(&s,0,3);
	ft_memset(&s,1,1);
	printf("%d\n",s);
}*/
