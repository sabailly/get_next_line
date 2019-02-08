/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:00:31 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/08 21:07:53 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*res;

	len = ft_strlen(src);
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strcpy(res, (char *)src);
	return (res);
}
