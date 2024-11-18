/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:45:43 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/26 22:28:40 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p;
	const char	*pt;
	size_t		i;

	p = (char *)dst;
	pt = (const char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (pt >= p || p >= len + pt)
	{
		while (i < len)
		{
			p[i] = pt[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			p[len] = pt[len];
		}
	}
	return (dst);
}
// #include <string.h>
// int main() {
//     char str[20] = "abcdefgh";
// 	char st[20] = "abcdefgh";

//    printf("Result them: %s\n",  memmove(NULL, NULL, 2));
// 	printf("Result: %s\n",  ft_memmove(NULL, NULL , 2));

//     return (0);
// }
