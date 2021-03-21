#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int res;

	res = 0;
	while (*nptr != '\0')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}

	return (res);
}

int main()
{
	char tab[] = "68525629";
	printf("%d\n", ft_atoi(tab));
	return (0);
}
