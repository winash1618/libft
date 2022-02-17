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

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dst[i] = '\0';
	}
	return (dst);
}

char	*ft_itoa(int num)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	if (num == -2147483648)
	{
		s = (char *)malloc(sizeof(char) * 12);
		return (ft_strcpy(s, "-2147483648"));
	}
	if (num < 0)
	{
		s[0] = '-';
		s[1] = '\0';
		s = ft_strjoin(s, ft_itoa(-num));
	}
	else if (num >= 10)
		s = ft_strjoin(ft_itoa(num / 10), ft_itoa(num % 10));
	else if (num < 10 && num >= 0)
	{
		s[0] = num + '0';
		s[1] = '\0';
	}
	return (s);
}

