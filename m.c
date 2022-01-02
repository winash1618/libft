#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "ft_memset.c"
// #include "ft_bzero.c"
// //#include "ft_memcpy.c"
// #include "ft_memmove.c"
// #include "ft_memchr.c"
// #include "ft_memcmp.c"
//#include "ft_atoi.c"
// #include "ft_strchr.c"
// #include "ft_strnstr.c"
// #include "ft_strdup.c"
//  #include "ft_strlcat.c"
//#include "ft_strncmp.c"
#include "ft_strlen.c"
#include "ft_split.c"
/*int main(void)
{
	char s1[] = "i am here";
	char s2[] = "i am here";
	printf("%s \n", ft_memset(s1, '.', 3));
	printf("%s \n", memset(s2, '.', 3));
	return (0);
	}*/
/*int main(void)
{
	char s1[] = "i am here";
	char s2[] = "i am here";
	ft_bzero(s1+3, 3);
	bzero(s2+3, 3);
	printf("%s \n", s1);
	printf("%s \n", s2);
	return (0);
}*/
/*int main(void)
{
	char s1[] = "i am here";
	char s11[] = "you are here";
	char s2[] = "i am here";
	char s22[] = "you are here";
	printf("%s \n", ft_memcpy(s1, s11, 3));
	printf("%s \n", memcpy(s2, s22, 3));
	return (0);
}*/
/*
int main(void)
{
	char s1[] = "i am here how are you";
	char s11[] = "you are here";
	char s2[] = "i am here how are you";
	char s22[] = "you are here";
	printf("%s \n", ft_memmove(s1, s1 + 5, 3));
	printf("%s \n", memmove(s2, s2 + 5, 3));
	printf("%s \n%s \n", s1, s2);
	return (0);
}*/
/*
 int main(void)
{
	char s1[] = "i am here how are you";
	char s2[] = "i am here how are you";
	printf("%s \n", ft_memchr(s1, 'e', 10));
	printf("%s \n", memchr(s2, 'e', 10));
	return (0);
}*/
/*
int main(void)
{
	char s1[] = "i am ere how are you";
	char s11[] = "i am zare here";
	char s2[] = "i am ere how are you";
	char s22[] = "i am zare here";
	printf("%d \n", ft_memcmp(s1, s11, 6));
	printf("%d \n", memcmp(s2, s22, 6));
	printf("%s \n%s \n", s1, s2);
	return (0);
}*/
/*
int main(void)
{
	char s1[] = "999999999999999999999999999";
	char s2[] = "999999999999999999999999999";
	printf("%d \n", ft_atoi(s1));
	printf("%d \n", atoi(s2));
	printf("%s \n%s \n", s1, s2);
	return (0);
}*/
/*
int main(void)
{
	char s1[] = "  - 4345 234sdfa234 dfa54";
	char s2[] = "  - 4345 234sdfa234 dfa54";
	printf("%s \n", ft_strchr(s1, 'y'));
	printf("%s \n", strchr(s2, 'y'));
	printf("%s \n%s \n", s1, s2);
	return (0);
}*/

/*int main(void)
{
	char s1[] = "  - 4345 234sdfa234 dfa54";
	char s2[] = "  - 4345 234sdfa234 dfa54";
	char n1[] = "434";
	char n2[] = "434";
	printf("%s \n", ft_strnstr(s1, n1, 14));
	printf("%s \n", strnstr(s2, n2, 14));
	printf("%s \n%s \n", s1, s2);
	return (0);
}*/
// int main(void)
// {
// 	char s1[] = "  - 4345 234sdfa234 dfa54";
// 	char s2[] = "  - 4345 234sdfa234 dfa54";
// 	printf("%s \n", ft_strdup(s1));
// 	printf("%s \n", strdup(s2));
// 	printf("%s \n%s \n", s1, s2);
// 	return (0);
// }

// int main(void)
// {
// 	char	*dest;
// 	char	*dest1;
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	dest[11] = 'a';
// 	memset(dest1, 0, 15);
// 	memset(dest1, 'r', 6);
// 	dest1[11] = 'a';
// 	// char s11[] = "lorem";
// 	// char s22[] = "lorem";
// 	// //printf("%zu \n", ft_strlcat(dest, s11, 15));
// 	//printf("%zu \n", strlcat(dest1, s22, 15));
// 	printf("%s \n%s \n", dest, dest1);
// 	return (0);
// }
/*int main(void)
{
	char s1[15] = "test\200";
	char s2[15] = "test\0";
	printf("%d \n", ft_strncmp(s1, s2, 15));
	printf("%d \n", strncmp(s1, s2, 15));
	printf("%s \n%s \n", s1, s2);
	return (0);
}*/
int main(void)
{
	char s1[15] = "test hi ffsf";
	char c = ' ';
	char **ptr;
	ptr = ft_split(s1, c);

	printf("%s %s %s", ptr[0], ptr[1], ptr[2]);
	return (0);
}