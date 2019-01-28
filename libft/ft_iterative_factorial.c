/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:18:56 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/25 22:24:50 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
