/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:02:07 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 21:25:04 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (!s2[i])
		return ((char*)s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			k = i;
			j = 0;
		}
		while (s2[j] && s1[k] == s2[j])
		{
			k++;
			j++;
		}
		if (!s2[j])
			return ((char*)s1 + i);
		i++;
	}
	return (NULL);
}
