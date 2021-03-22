#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *str;

	i = 0;
	str = (char*)s;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (*str != c)
	{
		str--;
		if (*str == '\0')
			return (NULL);
	}
	return (str);
}

int main()
{
	char tab[] = "135643545145236";

	printf("%s\n", ft_strrchr(tab, 53));
	printf("%s\n", strrchr(tab, 53));
	return 0;
}
