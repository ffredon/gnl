/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:36:24 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 19:44:20 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *lstnext;

	if (lst == NULL)
		return ;
	lstnext = lst->next;
	while (lst)
	{
		f(lst);
		lst = lstnext;
		if (lst)
			lstnext = lst->next;
	}
}
