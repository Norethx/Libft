/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_include_new_categ.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:20:19 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 21:16:30 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int *ft_register(t_list **lst);

void	*ft_gb_include_new_categ(const char *str, int index)
{
	t_list		*lst[3];
	t_root_list	*root_lst;
	t_ext_list	*gb;
	int			i;

	gb = ft_gb_start(0);
	if(!gb)
		return (NULL);
	i = 0;
	lst[2] = ft_gbfct_register(&gb, ft_root_newlst());
	lst[0] = ft_gbfct_register(&gb, ft_strdup(str));
	lst[1] = ft_gbfct_register(&gb, ft_ext_newlst());
	if (!lst[0] || !lst[1] || !lst[2])
		while (i < 2)
			if (lst[i++])
				ft_gb_rm(lst[i - 1]);
	if (ft_register(lst))
		return (NULL);
	root_lst = lst[2]->content;
	root_lst->categ = (char *)lst[0]->content;
	root_lst->lst = (t_ext_list *)lst[1]->content;
	return (root_lst);
}

static int *ft_register(t_list **lst)
{
	int i;

	i = 0;
	if (ft_root_register(lst[2], "globals") == -1
			|| ft_root_register(lst[0], "globals") == -1
				|| ft_root_register(lst[1], "globals") == -1)
	{
		while (i < 2)
		{
			ft_root_rm(lst[i],"globals");
			ft_gb_rm(lst[i]);
		}
		return (1);
	}
	return (0);
}
