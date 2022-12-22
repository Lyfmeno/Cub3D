/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:08:00 by hlevi             #+#    #+#             */
/*   Updated: 2022/12/22 10:21:01 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

static int	init_player(t_data *data)
{
	data->player = ft_calloc(sizeof(t_pr), 1);
	if (!data->player)
		return (print_err("Player init failed", -1));
	data->player->player = -1;
	data->player->posx = -1;
	data->player->posy = -1;
	return (0);
}

static int init_map(t_data *data)
{
	data->map = ft_calloc(sizeof(t_map), 1);
	if (!data->map)
		return (print_err("Map init failed", -1));
	data->map->width = 0;
	data->map->height = 0;
	return (0);
}

int	init_data(t_data *data)
{
	data->txr[0] = NULL;
	data->txr[1] = NULL;
	data->txr[2] = NULL;
	data->txr[3] = NULL;
	data->sky = -1;
	data->flr = -1;
	init_player(data);
	init_map(data);
	return (0);
}
