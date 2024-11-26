/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:25:00 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/12 18:51:45 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_big;
	size_t	len_big;
	size_t	i_litt;
	size_t	len_litt;

	len_big = ft_strlen(big);
	len_litt = ft_strlen(little);
	i_big = 0;
	if (len_litt == 0)
		return ((char *)&big[i_big]);
	while (big[i_big] && (i_big + len_litt <= len))
	{
		i_litt = 0;
		while (big[i_big + i_litt] == little[i_litt])
		{
			if (i_litt == (len_litt - 1))
				return ((char *)&big[i_big]);
			i_litt++;
		}
		i_big++;
	}
	return (0);
}
