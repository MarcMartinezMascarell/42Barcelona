/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitus <kitus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:54:21 by marcmart          #+#    #+#             */
/*   Updated: 2022/01/18 12:55:40 by kitus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		tmp;

	i = 0;
	tmp = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tmp = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (tmp != -1)
		return ((char *)&s[tmp]);
	return (NULL);
}
