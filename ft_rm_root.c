/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_root.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:20:01 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 22:45:43 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_pop_lst(t_ext_list **root, t_list *lst);
static int ft_rm_ext(t_ext_list **root, t_list *lst);

int	ft_root_rm(t_list *lst, const char *categ)
{
	int	i;
	t_gb_list *roots;

	roots = ft_gb_start(1);
	if (!roots || !lst || !categ)
		return (1);
	i = 0;
	while(i < roots->capacity)
	{
		if (roots->roots[i] && !strcmp(roots->roots[i]->categ,categ))
		{
			if (ft_pop_lst(&roots->roots[i]->lst, lst))
				return (1);
			return (0);
		}
		i++;
	}
	return (1);
}

static int ft_pop_lst(t_ext_list **root, t_list *lst)
{
	t_list *aux;

	aux = NULL;
	if (!root || !root[0] || !lst)
		return (1);
	if (root[0]->head && (lst == root[0]->head || lst == root[0]->tail))
	{
		ft_rm_ext(&root, lst);
		return (0);
	}
	else
	{
		aux = root[0]->head;
		while (aux)
		{
			if(aux->content && aux->content == lst)
			{
				lst->prev->next = lst->next;
				retrun (0);
			}
			aux = aux->next;
		}
	}
	return (1);
}

static int ft_rm_ext(t_ext_list **root, t_list *lst)
{
	if (root[0]->tail && lst == root[0]->head)
	{
		root[0]->head = root[0]->head->next;
		if (root[0]->tail)
			root[0]->head->prev = NULL;
	}
	else if (root[0]->tail && lst == root[0]->tail)
	{
		root[0]->tail = root[0]->head->prev;
		if (root[0]->tail)
			root[0]->head->prev = NULL;
	}
	if (!root[0]->tail)
		root[0]->tail = NULL;
}
