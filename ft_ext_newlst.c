/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ext_newlst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:47:45 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/08/19 11:54:40 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ext_list *ft_ext_newlst(void)
{
	t_ext_list *new;

	new = ft_calloc(sizeof(t_ext_list), 1);
	if (!new)
		return (NULL);
	return(new);
}
