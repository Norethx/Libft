/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:11:40 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 13:19:38 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clstdelone(t_list **lst, void (*del)())
{
	if (!lst[0] || !del)
		return ;
	if (lst[0]->content)
		(del)(lst[0]->content, &free);
	free(lst[0]);
	lst[0] = NULL;
}

