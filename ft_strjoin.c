/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:58:49 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/17 12:09:20 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*s1_s2;
	size_t			len_s1;
	size_t			len_s2;
	size_t			i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s1_s2 = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!s1_s2)
		return (NULL);
	i = -1;
	while (s1[++i])
	{
		s1_s2[i] = s1[i];
	}
	i = -1;
	while (s2[++i])
	{
		s1_s2[len_s1 + i] = s2[i];
	}
	s1_s2[len_s1 + i] = '\0';
	return ((char *)s1_s2);
}
