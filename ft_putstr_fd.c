/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:43:55 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/05 22:45:59 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// #include <fcntl.h>
// #include <stdio.h>
// int main()
// {
// 	close(1);
// 	char str[] = "hello world		";
// 	int fd = open( "test.txt", O_CREAT | O_RDWR,0777);
// 	printf("%d",fd);
// 	printf("\n");
// 	ft_putstr_fd(str, fd);
// }