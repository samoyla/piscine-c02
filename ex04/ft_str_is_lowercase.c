/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:12:15 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/15 16:19:46 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	condition(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
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
	char tab[] = "kj";
	
	printf("%d\n", ft_str_is_lowercase(tab));
	return (0);
}
