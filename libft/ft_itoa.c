#include "libft.h"

int	ft_len_nb(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char		*str;
	unsigned int	len;
	unsigned int	nb;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (n < 0)
	{
		nb = -n;
		j++;
	}
	else
		nb = n;
	len =  ft_len_nb(nb);
	i = 0;
	str = malloc(sizeof(char) * len + 1 + j);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		len++;
	}
	i = len - 1;
	while (nb >= 10)
	{
		str[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	str[i] = nb % 10 + 48;
	str[len] = '\0';
	return (str);
}
