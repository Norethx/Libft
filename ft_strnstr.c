/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:32:27 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/07/15 20:02:13 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	index;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		index = 0;
		while ((big[i + index] == little[index]) && (i + index) < len)
		{
			index++;
			if (little[index] == '\0')
				return (&((char *)big)[i]);
		}
		i++;
	}
	return ((void *)0);
}
