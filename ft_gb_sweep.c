/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_sweep.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:01:43 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 17:26:07 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_clean_allocs(t_list **lst);

void	ft_gb_sweep(t_ext_list *all_allocs)
{
	t_list	*aux;

	if (!all_allocs || !all_allocs->head)
		return ;
	while (!all_allocs->head->marked)
		ft_clean_allocs(&all_allocs->head);
	aux = all_allocs->head;
	while (aux)
	{
		if (aux->marked)
		{
			aux->prev->next = aux->next;
			if (aux == all_allocs->tail)
				all_allocs->tail = aux->prev;
			ft_clean_allocs(&aux);
		}
		else
		{
			aux->marked = 0;
			aux = aux->next;
		}
	}
	if (!all_allocs->head)
		all_allocs->tail = NULL;
	return ;
}

static void	ft_clean_allocs(t_list **lst)
{
	t_list	*aux;

	aux = lst[0];
	lst[0] = aux->next;
	if (aux->content)
		ft_lstdelone(aux->content, free);
	free(aux);
}
