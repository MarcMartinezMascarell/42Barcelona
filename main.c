/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcmart <marcmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:15:08 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/10 15:29:47 by marcmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	c1 = 67;
	char	c2 = 12;
	char	c3 = 75;
	char	c4 = 127;
	char	c5 = 12;
	char	c6[] = "Hola.Esto es una 42%Prueba/";
	char	c7[19] = "Esto es una prueba";
	
	printf("isalpha: %d\n", isalpha(c1));
	printf("ft_isalpha: %d\n", ft_isalpha(c1));

	printf("\nisdigit: %d\n", isdigit(c2));
	printf("ft_isdigit: %d\n", ft_isdigit(c2));

	printf("\nisalnum: %d\n", isalnum(c3));
	printf("ft_isalnum: %d\n", ft_isalnum(c3));

	printf("\nisascii: %d\n", isascii(c4));
	printf("ft_isascii: %d\n", ft_isascii(c4));

	printf("\nisprint: %d\n", isprint(c5));
	printf("ft_isprint: %d\n", ft_isprint(c5));

	printf("\nstrlen: %lu\n", strlen(c6));
	printf("ft_strlen: %lu\n", ft_strlen(c6));

	printf("\nmemset: %s", memset(c7, 'E', 4));
	printf("\nft_memset: %s", ft_memset(c7, 'E', 4));
}
