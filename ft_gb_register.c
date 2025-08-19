/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_register.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:23:51 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 13:51:22 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_gb_register(t_gb_list **gb, t_ext_list *new)
{
	if (!*gb || !new)
		return (-1);
	ft_gb_compact_roots(gb);
	if (gb[0]->capacity == gb[0]->count && ft_gb_expand_capacity(gb[0]))
		return (-1);
	gb[0]->roots[gb[0]->count] = new;
	gb[0]->count++;
	return(gb[0]->count - 1);
}
