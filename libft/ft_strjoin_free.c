/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:34:02 by sarbaill          #+#    #+#             */
/*   Updated: 2019/02/05 16:39:32 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;

	if (s1 && s2)
	{
		if (!(res = (char*)malloc(sizeof(char) *
		(ft_strlen((char*)s1) + (ft_strlen((char*)s2) + 1)))))
			return (NULL);
		i = 0;
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i])
		{
			res[ft_strlen((char*)s1) + i] = s2[i];
			i++;
		}
		res[ft_strlen((char*)s1) + i] = '\0';
		free(s1);
        free(s2);
        return (res);
	}
	else
		return (NULL);
}
