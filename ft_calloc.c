/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:00:57 by yel-alja          #+#    #+#             */
/*   Updated: 2024/10/31 10:08:14 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(number * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size * number));
	return (ptr);
}
