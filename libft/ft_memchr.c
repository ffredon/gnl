/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:39:42 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 21:22:34 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;
	unsigned char	*str;

	str = (unsigned char*)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((str)[i] == c2)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
