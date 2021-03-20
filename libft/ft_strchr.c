#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		s++;
		if (*s == c)
			return (s);
		else
			return (NULL);
	}
}

int main()
{
	char tab[] = "Salut to";
	int search = 105;

	printf("%s\n", ft_strchr(tab, search));
	return 0;
}
