/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nouveau_gnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:14:29 by sarbaill          #+#    #+#             */
/*   Updated: 2019/02/06 18:58:56 by sarbaill         ###   ########.fr       */
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

/*
1 fonction pour savoir si un '\n' est présent ou pas (retourne 1 ou 0 / oui ou non)								char check_line(char *save)
1 fonction pour sortir la ligne de save et retourner la ligne (qui sors save en entier s'il n'y a pas de '\n') (mettre save a NULL si elle ne contient plus rien ensuite et renvoie NULL si save vaut NULL au départ)	char *get_line(char **save)

tant qu'il n'y a pas de '\n' dans save
|	lire BUFF_SIZE octets de fd dans bucket
|	si la lecture echoue
|	|	return (-1)
|	join save et bucket
|	si la lecture est finie (read renvoie zero)
|	|	quiter la boucle (break)

stocker dans line la ligne a renvoyer
retirer la ligne de save (en laissant ce qui reste)
si une ligne etait présente dans save
|	return (1)
return (0)


int		get_next_line(const int fd, char **line)
{
	static char	*save = NULL;
	char		bucket[BUFF_SIZE + 1];
	int			rd;

	while (check_line == 0)
	{
		rd = read(fd, bucket, BUFF_SIZE);
		if (rd == -1)
			return (-1);
		bucket[rd] = 0;
		if (rd == 0)
			break ;
		save = ft_strjoin_free(save, bucket);
	}
	*line = get_line(&save);
	if(save == NULL && *line == NULL)
		return (0);
	return (1);
}
*/


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