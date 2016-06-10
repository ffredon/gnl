/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:50:51 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 09:32:06 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	int				c;
	unsigned int	i;

	str = (char *)malloc(sizeof(*str));
	c = 0;
	i = 0;
	while (s[c])
	{
		str[c] = f(s[c], i);
		c++;
		i++;
	}
	return (str);
}
