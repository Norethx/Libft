/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gbfct_register.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:07:46 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 15:40:42 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_gbfct_register(t_ext_list **lst,void *content)
{
	t_list *new;

	if (!content || !*lst)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (!new)
	{
		free(content);
		return (NULL);
	}
	new->content = content;
	ft_lstadd_back(lst, new);
	return (new);
}
