/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_expand_capacity.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:05:18 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 12:37:51 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_gb_expand_capacity(t_gb_list *gb)
{
	t_ext_list	**aux;
	int			size;
	int			i;

	size = gb->capacity * 2;
	aux = ft_calloc(size, sizeof(t_root_list *));
	if (!aux)
		return (1);
	i = 0;
	while (i < gb->capacity)
	{
		aux[i] = gb->roots[i];
		i++;
	}
	gb->capacity = size;
	free(gb->roots);
	gb->roots = aux;
	return (0);
}
