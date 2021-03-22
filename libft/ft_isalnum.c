int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')))
		return (0);
	else if (!((c >= 'A' && c <= 'Z')))
		return (0);
	else
		return (1);
}
