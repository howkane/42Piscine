int	is_alphabetical(char c)
{
	if ((c >= 'a' && c <= 'z')
		&& (c >= 'A' && c <= 'Z')
		&& (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[1])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i > 0 && !is_alphabetical(str[i - 1]))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i > 0 && is_alphabetical(str[i - 1]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
