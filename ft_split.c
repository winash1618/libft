/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 09:01:12 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/01/02 09:56:50 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>
// #include <stdio.h>
// #include "ft_strlen.c"

int how_many_words(char const *s, char c)
{
	int count;
	int re;
	int k;

	k = 1;
	count = 0;
	re = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (k == 1)
			{
				count++;
				k = 0;
			}
		}
		else if (*s == c)
		{
			k = 1;
		}
		s++;
		re++;
	}
	s = s - re;
	return (count);
}

void ft_splitter(char const *s, char c, char **ptr)
{
	int count;
	int i;
	int j;
	int k;

	count = 0;
	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] != c)
		{
			if (count == 1)
			{
				j = 0;
				i++;
				count = 0;
			}
			ptr[i][j] = s[k];
			j++;
		}
		else if (s[k] == c && k > 0)
		{
			if (s[k-1] != c)	
			{
				count = 1;
			}
		}
		k++;
	}
}

char **ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		count;

	i = 0;
	count = how_many_words(s, c);

	ptr = (char **) ft_calloc(count + 1, sizeof(char *));
	if (!count)
		return ((char*[1]){((void *)0)});
	if (!ptr)
		return (NULL);
	while (i < count)
	{
		ptr[i] = (char *)ft_calloc(ft_strlen(s), sizeof(char));
		i++;
	}
	ft_splitter(s, c, ptr);
	return (ptr);
}
// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int main ()
// {
// 	char	**tabstr;
// 	int i = 0;
// 		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// }
// int main(void)
// {
// 	char s1[] = "                  ";
// 	char c = ' ';
// 	char **ptr;
// 	printf("%d", how_many_words(s1, c));

// 	return (0);
// }
