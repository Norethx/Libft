/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:37:07 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/17 14:00:04 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gb_list *ft_gb_init(void)
{
	t_gb_list *gb;

	gb = ft_calloc(1, sizeof(t_gb_list));
	if (!gb)
		return ((void *)0);
	gb->count = 0;
	gb->capacity = 4;
	gb->roots = ft_calloc(gb->capacity, sizeof(t_ext_list *));
	if (!gb->roots)
	{
		free(gb);
		return ((void *)0);
	}
	return (gb);
}
