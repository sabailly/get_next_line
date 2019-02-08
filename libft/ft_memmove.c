/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:13:56 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/10 18:50:24 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sour;

	dest = (unsigned char*)dst;
	sour = (const unsigned char*)src;
	if (dst > src)
	{
		if (src + len < dst)
			return (ft_memcpy(dst, src, len));
		while (len)
		{
			len--;
			*(dest + len) = *(sour + len);
		}
	}
	else
	{
		if (src + len > dst)
			return (ft_memcpy(dst, src, len));
		while (len--)
			*dest++ = *sour++;
	}
	return (dst);
}
