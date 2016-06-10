/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:29:44 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 09:34:26 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_countchar(int n)
{
	int				i;
	unsigned int	x;

	x = n;
	i = 1;
	if (n < 0)
	{
		i++;
		x = -n;
	}
	while (x > 9)
	{
		i++;
		x = x / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	unsigned int	x;
	char			*buf;
	int				len;

	x = n;
	len = ft_countchar(n);
	buf = ft_strnew(len + 1);
	buf[len--] = '\0';
	if (n < 0)
	{
		x = -n;
		buf[0] = '-';
	}
	if (x == 0)
		buf[len] = '0';
	while (x > 0)
	{
		buf[len--] = x % 10 + '0';
		x = x / 10;
	}
	return (buf);
}
