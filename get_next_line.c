/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:14:29 by sarbaill          #+#    #+#             */
/*   Updated: 2019/02/05 16:38:09 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char		*check_line(char *save, char **line)
{
	int			i;
	char		*tmp;

	if (save && (tmp = ft_strchr(save, '\n')))
	{
		i = 0;
		while (save[i] && save[i] != '\n')
			i++;
		*line = ft_strsub(save, 0, i);
		tmp = ft_strdup(save + i + 1);
		return (tmp);
	}
	return (NULL);
}

int				get_next_line(const int fd, char **line)
{
	char		bucket[BUFF_SIZE + 1];
	static char	*save = NULL;
	char		*tmp;
	int			i;

	if ((tmp = check_line(save, line)))
		return (1);
	while ((i = read(fd, bucket, BUFF_SIZE)) > 0)
	{
		bucket[i] = '\0';
		if (save)
		{
			tmp = ft_strjoin_free(save, bucket);
			free(save);
			save = tmp;
		}
		else
			save = ft_strdup(bucket);
		if ((tmp = ft_strchr(save, '\n')))
			save = check_line(save, line);
	}
	if (save && save[0])
	{
		*line = save;
		save = NULL;
		return (1);
	}
	free(save);
	return (0);
}
    
int     main()
{
    int     fd;
    char    *line;

    fd = open("la_classe_americaine.txt", O_RDONLY);

    int ret;
    while((ret = get_next_line(fd, &line)) > 0) {
        printf("%s\n", line);
        printf("%d\n", ret);
        free(line);
    }
}