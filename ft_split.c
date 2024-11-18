/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:17:10 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/08 11:03:09 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	a;
	int	i;
	int	count;
	int	in_word;

	a = ft_strlen(s) - 1;
	in_word = 0;
	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (a > 0 && s[a] == c)
		a--;
	while (i <= a)
	{
		if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*word(const char **s, char c)
{
	const char	*start;
	int			len;
	char		*ptr;
	int			i;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	if (len == 0)
		return (NULL);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = start[i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}

static void	free_s(char **c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		free(c[i]);
		i++;
	}
	free(c);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		count;
	int		i;

	if (s == NULL)
		return (NULL);
	count = count_word(s, c);
	split = (char **)malloc((count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (i < count)
	{
		split[i] = word(&s, c);
		if (!split[i])
		{
			free_s(split);
			return (NULL);
		}
		i++;
	}
	split[count] = NULL;
	return (split);
}
/*#include <stdio.h>
int main(void) {
	char s[] = "#########FRFR#######FEF#FF##DEWF#WFWE#FEF##########";
	char **result = ft_split(s, '#');

	if (result != NULL) {
		int i = 0;
		while (result[i]) {
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}*/
