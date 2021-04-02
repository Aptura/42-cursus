char	*ft_strstr(char *haystack, char *needle)
{
	int		i;
	int		j;

	i = 0;
	if (!*needle)
		return (haystack);
	while (*(haystack + i))
	{
		j = 0;
		while (*(needle + j) == *(haystack + i + j))
		{
			if (!*(needle + j + 1))
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return ((char *)0);
}