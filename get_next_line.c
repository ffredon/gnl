/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 08:40:56 by fredon            #+#    #+#             */
/*   Updated: 2015/12/18 09:24:12 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "get_next_line.h"
#include "libft.h"

static void	ft_rem(char **line, char **buffer)
{
	char	*s;

	s = *line;
	*line = ft_strsub(*line, 0, *buffer - *line);
	*buffer = *buffer + 1;
	*buffer = ft_strdup(*buffer);
	free(s);
}

static char	*ft_union(char **line, char *buffer, int n)
{
	char	*s;

	s = *line;
	buffer[n] = '\0';
	*line = ft_strjoin(*line, buffer);
	free(s);
	return (*line);
}

int			get_next_line2(int const fd, char **line, char *buffer)
{
	static char *str;
	int			n;

	*line = ft_strnew(1);
	if (str != NULL)
	{
		*line = ft_strdup(str);
		free(str);
	}
	while ((str = ft_strchr(*line, '\n')) == NULL
			&& (n = read(fd, buffer, BUFF_SIZE)) > 0)
		*line = ft_union(line, buffer, n);
	if (n == 0 && str == NULL)
		return (0);
	if (n == -1)
	{
		free(buffer);
		return (-1);
	}
	ft_rem(line, &str);
	free(buffer);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	char		*buffer;

	if ((buffer = (char*)malloc(sizeof(char) * BUFF_SIZE + 1)) == 0)
		return (-1);
	if (fd >= 0 && buffer != NULL && line != NULL)
		return (get_next_line2(fd, line, buffer));
	free(buffer);
	return (-1);
}
