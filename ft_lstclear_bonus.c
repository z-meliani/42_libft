/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:56:09 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/17 13:20:15 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lstdup;

	while (*lst != NULL)
	{
		lstdup = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lstdup;
	}
	lst = NULL;
}
