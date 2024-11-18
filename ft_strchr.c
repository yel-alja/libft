/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:14:24 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/27 14:39:08 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			y;
	char			*p;

	y = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == y)
		{
			p = (char *)&s[i];
			return (p);
		}
		i++;
	}
	if (y == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	//char str[] =  "hello";
	printf("%p\n",ft_strchr(str, 'l'));
}*/