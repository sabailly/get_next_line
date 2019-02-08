/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 22:38:09 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/08 19:48:18 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lowcase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

static int		ft_upcase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

static int		ft_number(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

char			*ft_strcapitalize(char *str)
{
	size_t		x;
	size_t		check;

	x = 0;
	check = 0;
	while (str[x] != '\0')
	{
		if (!check && ft_lowcase(str[x]))
			str[x] = str[x] - 32;
		if (check && ft_upcase(str[x]))
			str[x] = str[x] + 32;
		if (ft_upcase(str[x]) || ft_lowcase(str[x]) || ft_number(str[x]))
			check = 1;
		else
			check = 0;
		x++;
	}
	return (str);
}
