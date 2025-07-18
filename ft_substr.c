/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:05:01 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/07/17 21:23:03 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;
	size_t			len_s;

	len_s = ft_strlen(s);
	i = 0;
	if (len > (len_s + 1)-(start))
		new_str = ft_calloc(1, (len_s - start) + 1);
	else if (start > len_s)
		new_str = ft_strdup("");
	else
		new_str = ft_calloc(1, len + 1);
	while (i < len && s[start + i] != '\0' && (start + i) <= len_s)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
// int	main(void)
// {
// 	char *s = ft_substr("0123456789", 9, 10);
// 	free(s);
// }

