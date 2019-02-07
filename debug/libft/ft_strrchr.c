/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:46:34 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/12 19:29:13 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *locate;

	locate = (0);
	while (*s)
	{
		if (*s == c)
			locate = (char *)s;
		++s;
	}
	if (locate)
		return (locate);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
