/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:10:13 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/30 23:58:05 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	y;

	if (!big && len == 0)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			y = i;
			while (big[i + j] && little[j] && big[i + j] == little[j] && (i
					+ j) < len)
				j++;
			if (!little[j])
				return ((char *)&big[y]);
		}
		i++;
	}
	return (NULL);
}
