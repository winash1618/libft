/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:28:54 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/01/02 09:54:30 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef struct startEnd Struct;
// #include <stdio.h>
// #include <unistd.h>
// #include "ft_strchr.c"
// #include "ft_strrchr.c"
// #include "ft_strlen.c"
// #include "ft_calloc.c"
// #include "ft_bzero.c"
// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// Struct findstartEnd(char const *s1, char const *set)
// {
//     Struct s;
// 	int j;

// 	s.i = 0;
// 	j = 0;
// 	s.k = 0;

// 	while (set[j] != '\0')
// 	{

// 		if (ft_strchr(s1 + s.i, (int) set[j]) == s1 + s.i)
// 		{
// 		j = -1;
// 		s.i++;
// 	}
// 	j++;
// 	}
// 	s.k = ft_strlen(s1) - 1;
// 	j = 0;
// 	while (set[j] != '\0')
// 	{
// 	if (ft_strchr(s1 + s.k, (int) set[j]) == s1 + s.k)
// 	{
// 	j = -1;
// 	s.k--;
// 	}
// 	j++;
// 	}
// }
// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char *str;
// 	int j;
// 	Struct r;

// 	r = findstartEnd(s1, set);
// 	j = 0;
// 	if (r.k <= r.i)
// 	{
// 	return (char *) (s1 + r.i);
// 	}
// 	str = (char *) ft_calloc(r.k - r.i + 2, sizeof(char));
// 	if (!str)
// 	return (NULL);
// 	while (r.i <= r.k)
// 	{
// 	str[j++] = s1[r.i++];
// 	}
// 	return (str);
// }


// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char *str;
// 	int i;
// 	int j;
// 	int k;
	
// 	i = 0;
// 	j = 0;
// 	k = 0;
	
// 	while (set[j] != '\0')
// 	{
		
// 		if (ft_strchr(s1 + i, (int) set[j]) == s1 + i)
// 		{
// 			j = -1;
// 			i++;
// 		}
// 		j++;
// 	}
// 	k = ft_strlen(s1) - 1;
// 	j = 0;
// 	while (set[j] != '\0')
// 	{
// 		if (ft_strchr(s1 + k, (int) set[j]) == s1 + k)
// 		{
// 			j = -1;
// 			k--;
// 		}
// 		j++;
// 	}
// 	j = 0;
// 	if (k <= i)
// 	{
// 		return (char *) (s1 + i);
// 	}
// 	str = (char *) ft_calloc(k - i + 2, sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	while (i <= k)
// 	{
// 		str[j++] = s1[i++];
// 	}
// 	return (str);
// }
// int		main()
// {
// 	char	*strtrim;
// 		char s1[] = "  \t \t \n   \n\n\n\t";
// 		if (!(strtrim = ft_strtrim(s1, " \n\t")))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strtrim);
// 		if (strtrim == s1)
// 			ft_print_result("\nA new string was not returned");
// 	// else if (arg == 2)
// 	// {
// 	// 	char s1[] = "lorem ipsum dolor sit amet";
// 	// 	if (!(strtrim = ft_strtrim(s1, "te")))
// 	// 		ft_print_result("NULL");
// 	// 	else
// 	// 		ft_print_result(strtrim);
// 	// 	if (strtrim == s1)
// 	// 		ft_print_result("\nA new string was not returned");
// 	// }
// 	// else if (arg == 3)
// 	// {
// 	// 	char s1[] = " lorem ipsum dolor sit amet";
// 	// 	if (!(strtrim = ft_strtrim(s1, "l ")))
// 	// 		ft_print_result("NULL");
// 	// 	else
// 	// 		ft_print_result(strtrim);
// 	// 	if (strtrim == s1)
// 	// 		ft_print_result("\nA new string was not returned");
// 	// }
// 	// else if (arg == 4)
// 	// {
// 	// 	char s1[] = "lorem ipsum dolor sit amet";
// 	// 	if (!(strtrim = ft_strtrim(s1, "tel")))
// 	// 		ft_print_result("NULL");
// 	// 	else
// 	// 		ft_print_result(strtrim);
// 	// 	if (strtrim == s1)
// 	// 		ft_print_result("\nA new string was not returned");
// 	// }
// 	// else if (arg == 5)
// 	// {
// 	// 	char s1[] = "          ";
// 	// 	if (!(strtrim = ft_strtrim(s1, " ")))
// 	// 		ft_print_result("NULL");
// 	// 	else
// 	// 		ft_print_result(strtrim);
// 	// 	if (strtrim == s1)
// 	// 		ft_print_result("\nA new string was not returned");
// 	// }
// 	return (0);
// }