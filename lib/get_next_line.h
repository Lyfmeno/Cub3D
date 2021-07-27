/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyphmeno <lyphmeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 12:33:35 by hlevi             #+#    #+#             */
/*   Updated: 2021/06/10 11:36:00 by lyphmeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <limits.h>


int		get_next_line(int fd, char **line);
int		ft_strlen(char *str);
void	ft_strcpyn(char *dst, char *src);
void	ft_strcatn(char *dst, char *src);
#endif
