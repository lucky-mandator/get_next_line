/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:27:20 by saluru            #+#    #+#             */
/*   Updated: 2021/01/31 12:12:34 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int get_next_line(int fd, char **line)
{
	char	*buff;
	char	*n;
	int		rd;

	buff = (char *)malloc(sizeof(char)*(BUFFER_SIZE + 1));
	while ((read(fd, buff, BUFFER_SIZE)))
	{
		if((n = ft_strchr(buff,'\n')))
		{
			*n = '\0';
		}
		*line = ft_strjoin(*line, buff);
	}
	free(buff);
	return (0);
}

/*
int main(void)
{
	int	fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s", line);
	return (0);
}
*/
