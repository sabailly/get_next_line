/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 00:06:27 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/12 19:08:20 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
			return ((void *)(dest + i + 1));
		i++;
	}
	return (NULL);
}
