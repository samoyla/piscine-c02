#include <stdio.h>

int	condition(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(condition(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char tab[] = "jhdkhg";
	printf("%d\n", ft_str_is_printable(tab));
	return (0);
}
