/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:32:22 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/07/16 19:35:10 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t			size;
	unsigned long	i;
	char			*new_str;

	i = 0;
	size = ft_strlen(s);
	new_str = ft_calloc(1, size+1);
	while (i <= size)
	{
		new_str[i] = s[i];
		i++;
	}
	return (new_str);
}
