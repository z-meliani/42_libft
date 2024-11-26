/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:04:21 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/17 12:12:40 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_begin(char const *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && (s1[i] != set[j]))
		{
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

static size_t	trim_end(char const *s1, const char *set, size_t i_begin)
{
	size_t	len_s1;
	size_t	j;

	len_s1 = ft_strlen(s1);
	if (len_s1 == i_begin)
		return (len_s1);
	while (--len_s1 > i_begin)
	{
		j = 0;
		while (set[j] && (s1[len_s1] != set[j]))
		{
			j++;
		}
		if (set[j] == '\0')
			return (++len_s1);
	}
	return (++len_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_trimmed;
	size_t	i_begin;
	size_t	i_end;

	i_begin = trim_begin(s1, set);
	i_end = trim_end(s1, set, i_begin);
	s1_trimmed = malloc(sizeof(char) * (i_end - i_begin + 1));
	if (!s1_trimmed)
		return (NULL);
	s1_trimmed = ft_memmove(s1_trimmed, &s1[i_begin], (i_end - i_begin));
	s1_trimmed[i_end - i_begin] = '\0';
	return (s1_trimmed);
}
