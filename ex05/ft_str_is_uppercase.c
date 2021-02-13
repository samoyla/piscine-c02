#include <stdio.h>

int	condition(char c)
{
	if (c >= 65 && c <=90)
		return (1);
	return ()
}

int	ft_str_is_uppercase()
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!condition(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char tab[] = "";
	printf("%d\n", ft_str_is_uppercase(tab));
	return (0);
}
