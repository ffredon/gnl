/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:07:29 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 21:25:13 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	len;

	if (*s2 == '\0')
		return ((char*)s1);
	len = ft_strlen(s2);
	while (len <= n && *s1 != '\0' && (i = ft_strncmp(s1, s2, len)))
	{
		s1++;
		n--;
	}
	if (i != 0)
		return (NULL);
	else
		return ((char*)s1);
}
