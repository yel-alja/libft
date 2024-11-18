/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:57:29 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/30 21:46:24 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	len_s = ft_strlen(src);
	if (!dst && size == 0)
		return (len_s);
	len_d = ft_strlen(dst);
	i = 0;
	if (size <= len_d)
		return (size + len_s);
	while (src[i] && (len_d + i < size - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}

// int main()
// {
// 	char src[] = "world";
// 	char dest[] = "hello";
// 	printf("%zu\n",ft_strlcat(dest, NULL,10));
// 	printf("%s", dest);

// }