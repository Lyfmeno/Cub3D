/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:42:23 by hlevi             #+#    #+#             */
/*   Updated: 2022/11/04 16:10:57 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasic.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, '\0', len);
}