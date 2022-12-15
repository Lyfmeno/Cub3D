/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:42:21 by hlevi             #+#    #+#             */
/*   Updated: 2022/12/15 14:43:51 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libasic.h"

char	*ft_strfjoin(char *s1, char *s2, int x)
{
	char	*ccat;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
	len_s2 = 0;
	while (s2[len_s2] != '\0')
		len_s2++;
	ccat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ccat == NULL)
		return (NULL);
	ft_strlcpy(&ccat[0], s1, len_s1 + 1);
	ft_strlcpy(&ccat[len_s1], s2, len_s2 + 1);
	if (x == 1 || !x)
		free(s1);
	if (x == 2 || !x)
		free(s2);
	return (ccat);
}
