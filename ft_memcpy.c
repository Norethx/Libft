/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@42sp.gov.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:17:03 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/07/14 18:41:26 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = n;
	while (i > 0)
	{
		((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
		i--;
	}
	return (dest);
}
