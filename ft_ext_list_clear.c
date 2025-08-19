/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ext_list_clear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 01:43:35 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/18 13:59:29 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ext_list_clear(t_gb_list **gb, t_ext_list *root)
{
	int		i;
	t_list	*aux;

	if (!gb || !root)
		return ;
	i = 0;
	while (i < gb[0]->capacity)
	{
		if (gb[0]->roots[i] && gb[0]->roots[i] == root)
			break ;
		i++;
	}
	if (i == gb[0]->capacity)
		return ;
	while (gb[0]->roots[i]->head)
	{
		aux = gb[0]->roots[i]->head;
		gb[0]->roots[i]->head = aux->next;
		ft_lstdelone(aux, &free);
	}
	gb[0]->roots[i]->tail = NULL;
	return ;
}
