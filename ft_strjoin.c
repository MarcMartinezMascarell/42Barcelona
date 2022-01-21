/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitus <kitus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:21:12 by kitus             #+#    #+#             */
/*   Updated: 2022/01/18 18:30:47 by kitus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size_s1;
	size_t	size_s2;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	str = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(&str[0], (char *)s1, size_s1 + 1);
	ft_strlcpy(&str[size_s1], (char *)s2, size_s2 + 1);
	return (str);
}
