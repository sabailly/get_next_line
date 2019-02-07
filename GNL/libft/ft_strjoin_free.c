/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:34:02 by sarbaill          #+#    #+#             */
/*   Updated: 2019/02/07 15:17:38 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin_free(char *s1, char *s2, int to_free)
{
	if (s1 && s2)
	{
		if (!(ft_strjoin(s1, s2)))
			return (NULL);
		if (to_free == 1)
			free(s1);
		else if (to_free == 2)
			free(s2);
		else
		{
			free(s1);
			free(s2);
		}
	}
	return (NULL);
}
