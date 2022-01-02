/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:13:51 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/12/31 16:21:38 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include "ft_calloc.c"
// #include "ft_bzero.c"

int intlen(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

// char *strrev(char *s, int i)
// {
// 	int j;
// 	char *str;

// 	j = 0;
// 	i--;
// 	str = (char *)ft_calloc(i, sizeof(char));
// 	while (i >= 0)
// 	{
// 		if (s[i] != '\0')
// 		{
// 			str[j++] = s[i]; 
// 		}
// 		i--;
// 	}
// 	str[j] = '\0';
// 	return (str);
// }

// char *ft_itoa(int n)
// {
// 	char *str;
// 	int i;
// 	int j;
// 	int k;
	
// 	j = 0;
// 	k = 0;
// 	i = intlen(n) + 2;
// 	str = (char *)ft_calloc(i, sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	if (!n)
// 		*str = '0';
// 	if (n < 0)
// 	{
// 		str[i - 2] = '-';
// 	}
// 	while (n)
// 	{
// 		k = n % 10;
// 		if(k < 0)
// 			k = -k;
// 		str[j++] = k + '0';
// 		n /= 10;
// 	}
// 	return (strrev(str, i));
// }

// int main ()
// {
// 	char *i1 = ft_itoa(0);
// 	printf("%s", i1);
// }



