/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:45:42 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/10 18:49:25 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char*)str;
	while (i < len)
	{
		s[i] = (char)c;
		i++;
	}
	return (str);
}
