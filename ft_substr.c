/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:56:08 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/12 18:53:43 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (start > len_s)
		len = 0;
	else if (len > len_s - start)
		len = len_s - start;
	sub = ft_calloc((len + 1), sizeof(char));
	if (!sub)
		return (NULL);
	sub = ft_memmove(sub, &s[start], len);
	sub[len] = '\0';
	return (sub);
}
