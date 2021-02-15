/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:19:56 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/15 15:56:29 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char 	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if (str [0] != '\0' && str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;

	i = 1;
	while (str[i] != '\0')
	{
		
		if (((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) &&
			(str[i--] >= 32 && str[i--] <= 47) ||
			(str[i--] >= 58 && str[i--] <= 64) ||
			(str[i--] >= 91 && str[i--] <= 96) ||
			(str[i--] >= 123 && str[i--] <= 126))
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] -= 32;
			}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	i++;
	}
	return (str);
}

int	main()
{
	char tab[] = "valentin+eric=love, 2doudou-mimi caca";
	printf("%s", ft_strcapitalize(tab));
	return (0);
}
