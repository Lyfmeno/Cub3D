/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:46:10 by hlevi             #+#    #+#             */
/*   Updated: 2022/11/04 16:11:21 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasic.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] || c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
