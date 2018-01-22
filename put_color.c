/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saxiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 12:42:40 by saxiao            #+#    #+#             */
/*   Updated: 2018/01/22 12:43:16 by saxiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	blue(void)
{
	ft_printf(BLUE);
}

void	color_reset(void)
{
	ft_printf(RESET);
}

int		for_putbigr(t_dir *list)
{
	if (list->file && ft_strcmp(list->name, ".")\
			&& ft_strcmp(list->name, ".."))
		return (1);
	return (0);
}
