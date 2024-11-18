/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:47:22 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/03 10:32:01 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*ptr;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 && !set)
		return (NULL);
	while (s1[start] && check(set, s1[start]))
		start++;
	while (start < end && check(set, s1[end - 1]))
		end--;
	len = end - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (end > start)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
