#include  <stdio.h>

int	condition(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(!(condition(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char tab[] = "\n";
	printf("%d\n", ft_str_is_numeric(tab));
	return (0);
}
