/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:11:19 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/09 12:01:31 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cbis;

	cbis = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == cbis)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
