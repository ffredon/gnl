/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:22:08 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 21:25:26 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				c;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	c = 0;
	while (str1[c] && str2[c])
	{
		if (str1[c] == str2[c])
			c++;
		else
		{
			i = str1[c] - str2[c];
			return (i);
		}
	}
	i = str1[c] - str2[c];
	return (i);
}
