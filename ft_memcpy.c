/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcmart <marcmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:45:35 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/12 11:28:11 by marcmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*string1;
	unsigned char	*string2;

	if (dst == NULL || src == NULL)
		return (NULL);
	string1 = (unsigned char *)dst;
	string2 = (unsigned char *)src;
	while (i < n)
	{
		*((char *)string1 + 1) = *((char *)string2 + 1);
		i++;
	}
	return (string1);
}
