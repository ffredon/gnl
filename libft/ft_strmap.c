/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:32:19 by fredon            #+#    #+#             */
/*   Updated: 2015/11/30 08:52:26 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		c;

	c = 0;
	str = (char *)malloc(sizeof(*str));
	while (s[c])
	{
		str[c] = f(s[c]);
		c++;
	}
	return (str);
}
