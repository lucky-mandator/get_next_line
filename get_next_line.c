/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:27:20 by saluru            #+#    #+#             */
/*   Updated: 2021/01/26 12:53:27 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line_utils.c"

int get_next_line(int fd, char **line)
{
	char	**buff;

	*buff = (char *)malloc(sizeof(*line));
	printf("%s", *line);
	return (0);
}

int main(void)
/*

int main(void)
{
	char	*word;
	char	**sentence;

	word = (char *)malloc(4 * sizeof *word); // assume it worked
    strcpy(word, "foo sai\n");

    sentence = (char **)malloc(4 * sizeof *sentence); // assume it worked
    sentence[0] = word;
    sentence[1] = word;
    sentence[2] = word;
    sentence[3] = NULL;
	get_next_line(1, sentence);
}*/
