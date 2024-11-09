#include "libft.h"
#include<stdio.h>
#include<fcntl.h>
void	f(unsigned int i, char *c)
{
	c[i] -= 32;
}	
int	main(void)
{
//	unsigned int start = 16;
//	const char	src[19] = "je suis une licorne";
//	char	**dest;
//	char	result[16];
//	printf("%d | ft_isalpha\n", ft_isalpha('c'));
/*	printf("%d | ft_isdigit\n", ft_isdigit('2'));
	printf("%d | ft_isalnum\n", ft_isalnum('%'));
	printf("%d | ft_isascii\n", ft_isascii(128));
	printf("%d | ft_isprint\n", ft_isprint('1'));
	printf("%zu | ft_strlen\n", ft_strlen("salut"));
	printf("good! | ft_memset\n\n");

	ft_bzero(test, 9);
	printf("%s | ft_bzero\n", &test[9]);
	bzero(test, 9);
	printf("%s | bzero\n\n", &test[9]);	
	ft_memcpy(dest, test, 19);
	printf("%s | ft_memcpy\n", dest);
	memcpy(dest, test, 19);
	printf("%s | memcpyi\n\n", dest);


	ft_memmove(test + 4, test, 8);
	memmove(test1 + 4, test1, 8);
	test[12] = '\0';
	test1[12] = '\0';
	printf("%s\n", test);
	printf("%s", test1);

	dest = ft_calloc(1, 10);
	dest = ft_strdup(src);
	printf("%s\n", dest);
	dest = ft_substr(src, start, 6);
	printf("%s\n", dest);
	dest = ft_strjoin("salut", " je suis une licorne");
	printf("%s\n", dest);	
	dest = ft_strtrim("salutcsalutcsalut", "salut");
	printf("%s\n", dest);
	size_t	i = 0;
	dest = ft_split("lccccscsalutcdimansceclorangeccgcgccccccccccccccc", 'c');
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		i++;
	}
	char	*tab;
	tab = ft_itoa(-2147483648);
	printf("%s", tab);
	char	*tab;
	tab = ft_strmapi("SALUT", f);
	printf("%s\n", tab);
	char	s[6] = "salut";
	ft_striteri(s, f);
*/	int	fd;
	fd = open("plat.txt", O_WRONLY | O_TRUNC);
	if (fd == -1)
		printf("error\n");
	ft_putendl_fd("salut", 1);
	ft_putnbr_fd(2147483647, 1);
}
