/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:33:14 by saluru            #+#    #+#             */
/*   Updated: 2021/02/02 12:08:12 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*trim_rest(char *str)
{
	char	*dest;
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (!str)
		return (0);
	while (str[x] && str[x] != '\n')
		x++;
	if (!str[x])
	{
		free(str);
		return (0);
	}
	if (!(dest = (char *)malloc(sizeof(*str) * ((ft_strlen(str) - x) + 1))))
		return (0);
	x++;
	while (str[x])
		dest[y++] = str[x++];
	dest[y] = '\0';
	free(str);
	return (dest);
}

int		get_next_line(int fd, char **line)
{
	char		*buff;
	int			rd;
	static char	*rest[256];

	rd = 1;
	if (fd < 0 || fd > 256 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (!has_return(rest[fd]) && rd != 0)
	{
		if ((rd = read(fd, buff, BUFFER_SIZE)) == -1)
		{
			free(buff);
			return (-1);
		}
		buff[rd] = '\0';
		rest[fd] = ft_strjoin(rest[fd], buff);
	}
	free(buff);
	*line = ft_strcpy(rest[fd]);
	rest[fd] = trim_rest(rest[fd]);
	if (rd == 0)
		return (0);
	return (1);
}
