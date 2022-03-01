/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:57:48 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/03/01 08:07:14 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *) ft_calloc((len + 1), sizeof(char));
	if (!str || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str);
	while (s[start] && len)
	{
		str[i++] = s[start];
		start++;
		len--;
	}
	return (str);
}
