/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitus <kitus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:46:27 by kitus             #+#    #+#             */
/*   Updated: 2022/01/21 14:10:00 by kitus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*convstr;

	if (!s || !f)
		return (NULL);
	convstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (convstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		convstr[i] = (*f)(i, s[i]);
		i++;
	}
	convstr[i] = '\0';
	return (convstr);
}
