/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <sarbaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:48:09 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/25 22:25:06 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	i = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i != 1)
	{
		result = nb * result;
		i--;
	}
	return (result);
}
