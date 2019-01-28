/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:14:29 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/25 19:36:44 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

/**********************************************
*                                             *
* TODO: WORK OUT WHY LAST LINE ISN'T WORKING  *
*                                             *
**********************************************/

int     get_next_line(const int fd, char **line)
{
    char          *bucket;
    char          *tmp;
    static char   *save = "\0";
    char          *ptr_to_n;

    tmp = "\0";
    if(!(bucket = (char*)malloc(sizeof(char) * BUFF_SIZE))) // initialise bucket, renvoie -1 if fail
        return (-1);

    /*
    ** check contents of save
    */
    if(!(ptr_to_n = ft_strchr(save, '\n'))) // assign ptr_to_n to point to first occurrence of \n in save
        {
            // no \n was found, so join all of save to tmp
            tmp = ft_strjoin(tmp, save);
        }
    else
    {
        // we found an \n!
        int i = 0;
        while(save[i] && save[i] != '\n') { // count the characters in save before \n
            i++;
        }
        tmp = ft_strjoin(tmp, ft_strsub(save, 0, i)); // add i first characters of save to tmp
        *line = tmp; // bounce tmp to line = WOOHOO JOB DONE!
        ptr_to_n++; // move pointer along one character
        save = ptr_to_n; // assign all characters after \n to save
        return (1);
    }
    
    /*
    ** use bucket to read the file
    */
    while(read(fd, bucket, BUFF_SIZE) > 0)
    // tant qu'il reste du fichier à lire, on continue à lire
    {
        if (!(ptr_to_n = ft_strchr(bucket, '\n'))) // on a pas trouvé de newline  
        {
            tmp = ft_strjoin(tmp, bucket); // on ajoute le bucket au bout de tmp           
        }
        else // on a trouvé un newline
        {
            int i = 0;
            while(bucket[i] && bucket[i] != '\n') { // count the characters in bucket before \n
                i++;
            }
            tmp = ft_strjoin(tmp, ft_strsub(bucket, 0, i)); // add i first characters of bucket to tmp
            *line = tmp; // bounce tmp to line = WOOHOO JOB DONE!
            ptr_to_n++; // move pointer along one character
            save = ptr_to_n; // assign all characters after \n to save
            return (1);
        }
    }
    
    return 0;
}

int     main()
{
    int     fd;
    char    **line;

    fd = open("cat_test.txt", O_RDONLY);

    int lastline = 1;
    while(lastline == 1) {
        lastline = get_next_line(fd, line);
        printf("%s\n", *line);
    }
}