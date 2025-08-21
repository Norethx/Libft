/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_include_root.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:18:03 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 22:57:47 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ext_list	*ft_gb_new_root(t_list *new, const char *categ)
{

	lst[0] = ft_gb_start(0);
	gb = ft_gb_start(1);
	if (!gb || !lst[0])
		return (NULL);
	ft_gb_compact_roots(&gb);
	if (gb->capacity == gb->count && gb_expand_capacity(gb[0]))
		return (NULL);
	new_root = ft_gb_calloc(&lst[0] ,1, sizeof(t_ext_list));
	if (!new_root)
		return (NULL);
	lst[1] = new_root->content;
	gb->roots[gb->count++] = lst[1];
	return (lst[1]);
}
