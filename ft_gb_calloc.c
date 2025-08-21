/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gb_calloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:24:58 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/20 12:33:27 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_gb_calloc(t_ext_list **lst, size_t nmemb, size_t size)
{
	t_list *new;
	unsigned int	i_nmemb;
	unsigned int	i_size;

	i_nmemb = nmemb;
	i_size = size;
	if (!*lst || ((i_nmemb * i_size) /  i_size) != nmemb)
		return (NULL);
	new = ft_calloc(1, sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = ft_calloc(nmemb, size);
	if (!new->content)
	{
		free(new);
		return(NULL);
	}
	ft_lstadd_back(lst, new);
	return (new);
}
