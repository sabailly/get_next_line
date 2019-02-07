/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 13:22:43 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/02 23:16:34 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ternaire : condition ? si vrai : si faux
*/

#include "libft.h"

static int	num_len(int nb)
{
	int		len;

	len = 1;
	if (nb < 0)
		len++;
	while (nb /= 10)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	size_t	nbchar;
	char	*res;

	nbchar = num_len(n);
	if (!(res = (char *)malloc(nbchar + 1)))
		return (NULL);
	res[nbchar] = '\0';
	res[0] = '0';
	if (n < 0)
		res[0] = '-';
	nbchar--;
	while (n != 0)
	{
		res[nbchar] = (char)((n < 0 ? -(n % 10) : (n % 10)) + 48);
		n = n / 10;
		nbchar--;
	}
	return (res);
}
