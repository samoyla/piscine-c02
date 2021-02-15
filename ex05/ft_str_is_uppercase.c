/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:12:38 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/15 16:22:25 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	condition(char c)
{
	if (c >= 65 && c <=90)
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
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
	char tab[] = "";
	printf("%d\n", ft_str_is_uppercase(tab));
	return (0);
}
