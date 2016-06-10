/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:24:08 by fredon            #+#    #+#             */
/*   Updated: 2015/11/30 09:47:34 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspc(char c)
{
	if (c == ' ' || c == '\f' || c == '\t' || c == '\n' || c == '\r' ||
		c == '\v')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		c;
	int		sign;

	i = 0;
	c = 0;
	sign = 1;
	while (ft_isspc(str[c]))
		c++;
	if (str[c] == '-')
	{
		sign = -1;
		c++;
	}
	else if (str[c] == '+')
		c++;
	while (str[c] <= '9' && str[c] >= '0')
	{
		i = i * 10;
		i = i + str[c] - 48;
		c++;
	}
	i = sign * i;
	return (i);
}
