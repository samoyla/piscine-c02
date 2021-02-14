/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:59:59 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/11 13:48:33 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main()
{

	char src[] = "Tralala";
	char dest[100];

	printf("%s", ft_strcpy(dest, src));
	return (0);
}
