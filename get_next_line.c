/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:14:29 by sarbaill          #+#    #+#             */
/*   Updated: 2019/02/08 17:27:01 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		checkline(char **save, char **line)
{
	int		i;
	char	*tmp;

	if (*save && (tmp = ft_strchr(*save, '\n')))
	{
		i = 0;
		while ((*save)[i] && (*save)[i] != '\n')
			i++;
		*line = ft_strsub(*save, 0, i);
		tmp = ft_strdup(tmp + 1);
		free(*save);
		*save = tmp;
		return (1);
	}
	return (0);
}

int		saveline(char *bucket, char **save, int i, char **line)
{
	char	*tmp;

	bucket[i] = '\0';
	if (*save)
	{
		tmp = ft_strjoin(*save, bucket);
		free(*save);
		*save = tmp;
	}
	else
		*save = ft_strdup(bucket);
	return (checkline(save, line));
}

int		get_next_line(const int fd, char **line)
{
	char			bucket[BUFF_SIZE + 1];
	static char		*save = NULL;
	int				i;

	if (checkline(&save, line))
		return (*line ? 1 : -1);
	while ((i = read(fd, bucket, BUFF_SIZE)) > 0)
		if (saveline(bucket, &save, i, line))
			return (*line ? 1 : -1);
	if (!i && save && save[0])
	{
		*line = save;
		save = NULL;
		return (1);
	}
	return (i);
}
