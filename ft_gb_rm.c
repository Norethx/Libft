/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_rm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 21:22:56 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 22:32:51 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_gm_rm(t_list *lst)
{
	t_ext_list *all_allocs;

	all_allocs = ft_gb_start(0);
	if (!all_allocs || !lst)
		return (1);
	if (all_allocs->head && lst == all_allocs->head)
	{
		all_allocs->head = all_allocs->head->next;
		if (all_allocs->tail)
			all_allocs->head->prev = NULL;
	}
	else if (all_allocs->tail && lst == all_allocs->tail)
	{
		all_allocs->tail = all_allocs->head->prev;
		if (all_allocs->tail)
			all_allocs->head->prev = NULL;
	}
	else
		lst->prev->next = lst->next;
	ft_lstdelone(&lst, &free);
	if (!all_allocs->tail)
		all_allocs->tail = NULL;
	return (1);
}
