/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcmart <marcmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:37:56 by kitus             #+#    #+#             */
/*   Updated: 2022/01/26 17:18:21 by marcmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if ((size_t)start >= strlen)
		return (ft_strdup("\0"));
	if (strlen - (size_t)start >= len)
		sstr = (char *)malloc((len + 1) * sizeof(char));
	else
		sstr = (char *)malloc((strlen - (size_t)start + 1) * sizeof(char));
	if (!(char *)sstr)
		return (NULL);
	ft_strlcpy(sstr, (char *)(s + start), (len + 1));
	return (sstr);
}
