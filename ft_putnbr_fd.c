/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:09:08 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/17 12:06:23 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n / 10 == 0 && n % 10 < 0)
		write(fd, "-", 1);
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	if (n < 0)
		digit = -(n % 10) + '0';
	else
		digit = n % 10 + '0';
	write(fd, &digit, 1);
}
