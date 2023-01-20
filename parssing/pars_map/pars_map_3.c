/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_map_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:44:09 by skasmi            #+#    #+#             */
/*   Updated: 2023/01/20 23:16:35 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void ft_check_map_len(t_map *t)
{
	int nb;
	int index;
	int i;

	i = 0;
	t->export_only_map = NULL;
	nb = ft_get_len_ofmap(t->all_map2d) - t->line_empty - 6;
	// printf(" height %d\n", t->map_height);
	// printf("line empty %d\n", t->line_empty);
	// printf(" nb %d\n", nb);
	index = t->map_height - nb;
	
	while (index != t->map_height)
	{
		t->export_only_map = ft_strjoin(t->export_only_map, t->all_map2d[index]);
		index++;
		if (index != t->map_height)
			t->export_only_map = ft_strjoin(t->export_only_map, "\n");
		i++;
	}
	t->export_only_map = ft_strjoin(t->export_only_map, "\0"); //hadi fiha mochkil wach ghadi nkhliha wla la  
}

void ft_check_line_before_map(char **str, t_map *map)
{
	int i;
	char *line;
	
	i = 0;
	while (str[i])
	{
		line = ft_strtrim(str[i], " \n");
		if (line[0] && ft_check_line_ifnotinmap(line) == 0)
		{
			free(line);
			break;
		}
		check_line_txt_rgb(line, map);
		free(line);
		i++;
		(void)map;
	}
	// check if exist;	
}
