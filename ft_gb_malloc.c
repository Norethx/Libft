/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:09:14 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 12:30:11 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_gb_malloc(t_ext_list **lst, size_t size)
{
	t_list *new;

	if (!*lst || size > 2147483647)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = malloc(size);
	if (!new->content)
	{
		free(new);
		return(NULL);
	}
	ft_lstadd_back(lst, new);
	return (new);
}
