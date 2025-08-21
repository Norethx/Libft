/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_root_register.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:23:51 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 22:55:14 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_root_register(t_list *new, const char *categ)
{
	int i;
	t_gb_list *roots;

	i = -1;
	roots = ft_gb_start(1);
	if (!roots || !new)
		return (-1);
	ft_gb_compact_roots(roots);
	while (i++ < roots->count)
		if (ft_strcmp(roots->roots[i]->categ,categ) == 0)
			break;
	if (ft_strcmp(roots->roots[i]->categ,categ) == 0)
		ft_gb_include_root(new, categ);
	else
	{
		if (roots->capacity == roots->count && ft_gb_expand_capacity(roots))
			return (-1);
		ft_gb_include_new_categ(categ, i);
		ft_gb_include_root(new, categ);
		roots->count++;
	}
	return(i);
}
