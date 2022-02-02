/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitus <kitus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:10:44 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/17 14:46:27 by kitus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		ndst = (unsigned char *)dst;
		nsrc = (unsigned char *)src;
		while (len--)
			*ndst++ = *nsrc++;
	}
	else
	{
		ndst = (unsigned char *)dst + (len - 1);
		nsrc = (unsigned char *)src + (len - 1);
		while (len--)
			*ndst-- = *nsrc--;
	}
	return (dst);
}
