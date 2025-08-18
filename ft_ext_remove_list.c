/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ext_remove_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 02:11:19 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/18 02:15:20 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_ext_remove_list(t_gb_list **gb, t_ext_list *root)
{
	int i;
	t_list	*aux;

	if (!gb || !root)
		return ;
	i = 0;
	while (i < gb[0]->capacity)
	{
		if (gb[0]->roots[i] && gb[0]->roots[i] == root)
			break;
		i++;
	}
	if (i == gb[0]->capacity)
		return ;
	ft_ext_free_all(gb[0]->roots[i]);
	ft_gb_compact_roots(gb);
	return ;
}
