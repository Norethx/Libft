/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:21:45 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 17:09:18 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *ft_all_allocs(t_ext_list *all_alocs, t_gb_list	*roots);
static void *ft_roots(t_ext_list *all_alocs, t_gb_list *roots);

void *ft_gb_start(int categ)
{
	static t_ext_list	*all_alocs = NULL;
	static t_gb_list	*roots = NULL;
	void				*(*fct[2])(t_ext_list*, t_gb_list*);

	if (categ > 1 && categ < 0)
		return (NULL);
	fct[0] = &ft_all_allocs;
	fct[1] = &ft_roots;
	return(fct[categ](all_alocs, roots));
}

static void *ft_all_allocs(t_ext_list *all_alocs, t_gb_list	*roots)
{
	if (!all_alocs)
	{
		all_alocs = ft_calloc(1, sizeof(t_ext_list));
		if (!all_alocs)
			return (NULL);
	}
	return (all_alocs);
}

static void *ft_roots(t_ext_list *all_alocs, t_gb_list *roots)
{
	if (!all_alocs)
		ft_gb_start(0);
	if (!roots)
	{
		roots = ft_gb_init(4);
		if (!roots)
		{
			ft_ext_free_all(all_alocs);
			return (NULL);
		}
	}
	return (roots);
}
