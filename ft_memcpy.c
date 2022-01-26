/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcmart <marcmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:45:35 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/24 16:50:59 by marcmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	string1 = (unsigned char *)dst;
	string2 = (unsigned char *)src;
	while (i < n)
	{
		string1[i] = string2[i];
		i++;
	}
	return (string1);
}
