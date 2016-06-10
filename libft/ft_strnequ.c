/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:02:51 by fredon            #+#    #+#             */
/*   Updated: 2015/11/27 16:26:21 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (c == n)
		return (1);
	while (s1[c] && s2[c])
	{
		if (c == n)
			return (1);
		if (s1[c] == s2[c])
			c++;
		else
			return (0);
	}
	if (s1[c] == s2[c])
		return (1);
	else
		return (0);
}
