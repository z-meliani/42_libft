/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:14:04 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/07 14:02:27 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i_s;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i_s = 0;
	if (size <= len_dest)
		return (len_src + size);
	while (src[i_s] && i_s < size - len_dest - 1)
	{
		dest[len_dest + i_s] = src[i_s];
		i_s++;
	}
	dest[len_dest + i_s] = '\0';
	return (len_src + len_dest);
}
