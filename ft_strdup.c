/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:39:02 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/10 12:58:45 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s);
	dup = malloc(len * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	dup[len] = '\0';
	while (len-- != 0)
	{
		dup[len] = ((char *)s)[len];
	}
	return (dup);
}
