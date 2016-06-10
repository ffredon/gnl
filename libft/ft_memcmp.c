/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:56:16 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 21:22:42 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (i);
	while (j < (unsigned int)n)
	{
		if (str1[j] == str2[j])
			j++;
		else
		{
			i = str1[j] - str2[j];
			return (i);
		}
	}
	return (i);
}
