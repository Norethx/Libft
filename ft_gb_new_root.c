/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_new_root.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:41:17 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 13:51:18 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ext_list	*ft_gb_new_root(t_gb_list **gb)
{
	t_ext_list	*new_lst;

	if (!*gb)
		return ((void *)0);
	ft_gb_compact_roots(*gb);
	if (gb[0]->capacity == gb[0]->count && gb_expand_capacity(gb[0]))
		return ((void *)0);
	new_lst = ft_calloc(1, sizeof(t_ext_list));
	if (!new_lst)
		return ((void *)0);
	gb[0]->roots[gb[0]->count++] = new_lst;
	return (new_lst);
}
