/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitus <kitus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:29:52 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/17 13:35:50 by kitus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len2;

	if (*needle == '\0')
		return ((char *)haystack);
	len2 = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= len2)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, len2) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
