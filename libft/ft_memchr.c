#include "libft.h"

void	*ft_memchr(const void *dst, int c, size_t n)
{
	size_t		i;
	const void	*dst2;

	i = 0;
	dst2 = dst;
	if (!dst)
		return (NULL);
	while (dst2[i] && i < n)
	{
		if (*dst == c)
			return ((int)dst2);
		else
			return (NULL);
		i++;
	}
}
