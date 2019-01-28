/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 18:01:14 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/08 21:10:10 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (res);
	}
	else
		return (NULL);
}
