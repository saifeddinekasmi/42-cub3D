/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:44:31 by skasmi            #+#    #+#             */
/*   Updated: 2022/12/24 18:51:25 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int ft_check_rgb_txt(t_map *map, t_texture *t)
{
	int i;
	int j;

	i = 0;
	while (map->map2d[i])
	{
		j = 0;
		while (map->map2d[i][j])
		{
			if (ft_strchr("N", map->map2d[i][j]) == 1 && ft_strchr("N", map->map2d[i][j + 1]) == 1)
			{
				while (map.ma)
			}
		}
	}
}