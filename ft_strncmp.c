/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:46:47 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/12 18:58:18 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	diff_i;
	size_t	i;

	i = 0;
	while (i < n)
	{
		diff_i = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (diff_i != 0)
			return (diff_i);
		i++;
	}
	return (0);
}
