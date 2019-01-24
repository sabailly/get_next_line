/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:14:29 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/24 17:49:06 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int     get_next_line(const int fd, char **line)
{
    char        *bucket;
    static int  i = 0;
    i++;
    if(!(bucket = (char*)malloc(sizeof(char) * BUFF_SIZE)))
        return (-1);
    if (read(fd, bucket, BUFF_SIZE) > 0) {
        ft_strcpy(*line, bucket);
        return 1;
    }
    return 0;
}

int     main()
{
    int fd;
    char **line;

    fd = open("cat_test.txt", O_RDONLY);

    int lastline = 1;
    while(lastline == 1) {
        lastline = get_next_line(fd, line);
        printf("%s\n", *line);
    }
}