/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_mark.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:56:26 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 17:42:35 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_gb_mark(t_list *lst)
{
	t_list *aux;

	if (!lst)
		return ;
	aux = lst->content;
	lst->marked = aux->marked;
}
