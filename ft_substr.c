/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcmart <marcmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:37:56 by kitus             #+#    #+#             */
/*   Updated: 2022/02/01 15:18:02 by marcmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	strlen;
	size_t	nstart;

	if (!s)
		return (NULL);
	nstart = (size_t)start;
	strlen = ft_strlen((char *)s);
	if (len > strlen)
		len = strlen;
	if (nstart >= strlen)
		return (ft_strdup("\0"));
	else if (strlen - nstart >= len)
		sstr = (char *)malloc((len + 1) * sizeof(char));
	else
		sstr = (char *)malloc((strlen - nstart + 1) * sizeof(char));
	if (!sstr)
		return (NULL);
	ft_strlcpy(sstr, (char *)(s + nstart), (len + 1));
	return (sstr);
}
