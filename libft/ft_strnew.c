/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:51:54 by fredon            #+#    #+#             */
/*   Updated: 2015/12/18 08:39:07 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*t;
	size_t	i;

	if ((t = (char *)malloc(size + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		t[i] = '\0';
		i++;
	}
	t[i] = '\0';
	return (t);
}
