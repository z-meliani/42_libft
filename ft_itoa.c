/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:39:43 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/17 12:10:35 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*strint;
	int		len_n;
	int		i;

	len_n = ft_intlen(n);
	strint = malloc(sizeof(char) * (len_n + 1));
	i = 1;
	while (i <= len_n)
	{
		if (n < 0)
			strint[len_n - i] = -(n % 10) + '0';
		else
			strint[len_n - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (strint[0] == '0' && len_n != 1)
		strint[0] = '-';
	strint[len_n] = '\0';
	return (strint);
}
