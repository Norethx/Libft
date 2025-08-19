/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_compact_roots.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:42:40 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 15:23:23 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_gb_compact_roots(t_gb_list **gb)
{
	int	i[2];

	if (!*gb)
		return ;
	i[0] = 0;
	i[1] = -1;
	while (i[0] < gb[0]->capacity)
	{
		if (gb[0]->roots[i[0]] && i[1] > -1)
		{
			gb[0]->roots[i[1]++] = gb[0]->roots[i[0]];
			gb[0]->roots[i[0]] = NULL;
		}
		else if (!gb[0]->roots[i[0]] && i[1] == -1)
			i[1] = i;
		i[0]++;
	}
	if (i[1] == -1 && i[0] == gb[0]->capacity)
		gb[0]->count = i[0];
	else if (i[1] > -1)
		gb[0]->count = i[1];
}
