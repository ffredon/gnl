/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:30:54 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 11:00:17 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static const char	*ft_str_find_next(const char *str, char c, int skip)
{
	if (skip)
	{
		while (*str != '\0' && *str == c)
			str++;
	}
	else
	{
		while (*str != '\0' && *str != c)
			str++;
	}
	return (str);
}

static int			ft_str_count_splits(const char *str, char seps)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		str = ft_str_find_next(str, seps, 1);
		if (*str != '\0')
		{
			i++;
			str = ft_str_find_next(str, seps, 0);
		}
	}
	return (i);
}

static char			**ft_tabledel(char **tab, int len)
{
	int		i;

	i = 0;
	while (i < len)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char				**ft_strsplit(char const *str, char c)
{
	char		**tab;
	int			i;
	const char	*next;

	tab = (char**)malloc(sizeof(char*) * (ft_str_count_splits(str, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		str = ft_str_find_next(str, c, 1);
		if (*str != '\0')
		{
			next = ft_str_find_next(str, c, 0);
			tab[i] = ft_strsub(str, 0, next - str);
			if (tab[i] == NULL)
				return (ft_tabledel(tab, i));
			i++;
			str = next;
		}
	}
	tab[i] = 0;
	return (tab);
}
