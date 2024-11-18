/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:43:18 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/28 11:46:56 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	y;
	char	*p;

	y = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == y)
		{
			p = (char *)&s[i];
			return (p);
		}
		i--;
	}
	if (s[i] == y)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*int main()
{
	char str[] = "hello";
	printf("%s",ft_strrchr(str,'h'));
}*/
