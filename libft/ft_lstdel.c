/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:17:57 by fredon            #+#    #+#             */
/*   Updated: 2015/11/30 09:47:05 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lstnext;

	lstnext = NULL;
	if (alst != NULL && *alst != NULL)
		lstnext = (*alst)->next;
	while (*alst != NULL)
	{
		ft_lstdelone(alst, del);
		*alst = lstnext;
		if (*alst != NULL)
			lstnext = (*alst)->next;
	}
}
