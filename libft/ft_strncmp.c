#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned)s1[i] - (unsigned)s2[i]);
	if (s1[i] == s2[i])
		return (0);
}

int	main()
{
	char tab[] = "Salut";
	char tab2[] = "Sa";
	printf("%d\n", ft_strncmp(tab, tab2, 4));
	return 0;
}
