/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:25:02 by fredon            #+#    #+#             */
/*   Updated: 2015/12/17 18:32:50 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	c;

	c = 0;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (c < len)
	{
		str[c] = s[start];
		start++;
		c++;
	}
	return (str);
}
