#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

int main()
{
	char tab[] = "Salut voyez je suis vous";

	printf("%s\n", ft_strchr(tab, 118));
	return 0;
}
