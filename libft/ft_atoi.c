#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	res;

	res = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n')
		nptr++;
	while (*nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - 48;
		nptr++;
	}
	return (res);
}
