/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:14:32 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/17 17:51:08 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstf;
	t_list	*lstfdup;

	if (lst == NULL)
		return (NULL);
	lstf = NULL;
	lstfdup = lstf;
	while (lst != NULL)
	{
		ft_lstadd_back(&lstf, ft_lstnew(f(lst->content)));
		lstfdup = ft_lstlast(lstf);
		if (lstfdup == NULL)
			return (ft_lstclear(&lstf, del), NULL);
		lst = lst->next;
	}
	return (lstf);
}
