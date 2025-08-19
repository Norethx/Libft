/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_free_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:27:05 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/18 13:59:46 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_gb_free_all(t_gb_list **gb)
{
	int	i;

	if (!gb[0])
		return ;
	i = 0;
	while (i < gb[0]->capacity)
		ft_ext_free_all(gb[0]->roots[i++]);
	free(gb[0]->roots);
	gb[0]->capacity = 0;
	gb[0]->count = 0;
	free(gb[0]);
	gb[0] = NULL;
}
