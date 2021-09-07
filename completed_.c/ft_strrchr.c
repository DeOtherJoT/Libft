char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == c)
			ret = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (ret);
}
