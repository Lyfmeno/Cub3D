/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:06:47 by hlevi             #+#    #+#             */
/*   Updated: 2023/01/24 15:08:21 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libasic.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	if (!s1 || !s2)
		return (-1);
	while (res == 0 && s1[i] && s2[i] && i < n)
	{
		if (s1[i] > s2[i])
			res = 1;
		else if (s1[i] < s2[i])
			res = -1;
		i++;
	}
	if (s1[i] && !s2[i] && i < n)
		res = 1;
	else if (!s1[i] && s2[i] && i < n)
		res = -1;
	return (res);
}
