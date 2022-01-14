/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcmart <marcmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:40:02 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/10 15:36:47 by marcmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n || ((unsigned char *)b)[i] != '\0')
	{
		((unsigned char *)b)[i] = (unsigned char)c ;
		i++;
	}
	return (b);
}
