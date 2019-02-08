/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:38:33 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/08 21:12:02 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;
	size_t nb;

	index = 0;
	nb = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index]
			&& (index < n))
	{
		index++;
		nb++;
	}
	if (nb == index && n == index)
		return (0);
	else
		return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
