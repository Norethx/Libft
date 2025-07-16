/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:05:01 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/07/16 13:22:49 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	new_str = ft_calloc(1, (len - start));
	while (i < len && s[start + i] != '\0')
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return(new_str);
}
