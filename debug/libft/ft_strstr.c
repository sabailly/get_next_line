/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 18:09:27 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/16 17:25:14 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (needle[j] && needle[j] == str[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	if (needle[0] == '\0')
		return ((char *)str);
	return (0);
}
