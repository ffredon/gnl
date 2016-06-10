/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:57:34 by fredon            #+#    #+#             */
/*   Updated: 2015/11/26 16:38:35 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int		c;

	c = 0;
	while (s1[c] && s2[c])
	{
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
