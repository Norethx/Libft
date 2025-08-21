/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:37:07 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 18:09:22 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gb_list	*ft_gb_init(int capacity)
{
	t_list		*lst[2];
	t_gb_list	*gb;
	t_ext_list	*all_allocs;

	lst[0] = ft_gb_calloc(&all_allocs, 1, sizeof(t_gb_list));
	if (!lst[0])
		return ((void *)0);
	gb = lst[0]->content;
	gb->count = 0;
	gb->capacity = capacity;
	lst[1] = ft_gb_calloc(&all_allocs, capacity, sizeof(t_ext_list *));
	if (!gb->roots)
	{
		free(lst[0]);
		free(gb);
		return ((void *)0);
	}
	gb->roots = lst[1]->content;
	ft_gb_new_root()
	return (gb);
}
