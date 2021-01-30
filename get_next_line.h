/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:43 by saluru            #+#    #+#             */
/*   Updated: 2021/01/26 09:22:00 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *str);

#endif
