/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcmart <marcmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:44:26 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/12 12:03:10 by marcmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dsize;
	size_t	size_d;
	size_t	size_s;

	i = 0;
	dsize = ft_strlen(dst);
	size_d = ft_strlen(dst);
	size_s = ft_strlen(src);
	if (dstsize < 1)
		return (size_s);
	while (src[i] && dsize < dstsize - 1)
	{
		dst[dsize] = src[i];
		dsize++;
		i++;
	}
	dst[dsize] = '\0';
	if (dstsize < size_d)
		return (size_s + dstsize);
	else
		return (size_d + size_s);
}
