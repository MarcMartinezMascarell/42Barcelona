/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitus <kitus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:30:44 by kitus             #+#    #+#             */
/*   Updated: 2022/01/20 12:49:59 by kitus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	createsplit(char **result, char const *s, char c);
size_t	addpart(char **result, const char *prev, size_t size, char c);
size_t	count(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	createsplit(result, s, c);
	return (result);
}

void	createsplit(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	size_t	next;
	size_t	prev;

	i = 0;
	j = 0;
	prev = i;
	next = i;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			next = i;
		size = next - prev;
		if (size > 1 || (size == 1 && s[i - 1] != c))
			j += addpart(&result[j], &s[prev], size, c);
		if (s[i] == '\0')
			break ;
		prev = next;
		i++;
	}
	result[j] = NULL;
}

size_t	addpart(char **result, const char *prev, size_t size, char c)
{
	if (*prev == c)
	{
		prev++;
		size--;
	}
	*result = (char *)malloc((size + 1) * sizeof(char));
	ft_strlcpy(*result, (char *)prev, size + 1);
	return (1);
}

size_t	count(const char *s, char c)
{
	size_t	i;
	size_t	prev;
	size_t	next;
	size_t	size;
	size_t	counter;

	i = 0;
	prev = i;
	next = i;
	counter = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			next = i;
		size = next - prev;
		if (size > 1 || (size == 1 && s[i - 1] != c))
			counter++;
		if (s[i] == '\0')
			break ;
		prev = next;
		i++;
	}
	return (counter);
}
