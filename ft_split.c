/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:33:15 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/07/19 18:36:30 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int		quantity_words;
	int		i;

	quantity_words = 0;
	i = 0;
	while (s[i++] != 0)
		if (((ft_isprint(s[i]) && s[i] != c))
			&& (s[i + 1] == c || s[i + 1] == 0))
			quantity_words++;
	return (quantity_words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		i_word;
	char	**set_words;
	int		i_arr;

	i = 0;
	i_arr = 0;
	set_words = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	while (s[i] != 0)
	{
		i_word = 0;
		while (s[i + i_word] != c)
		{
			i_word++;
			if (s[i + i_word] == c || s[i + i_word] == 0)
			{
				set_words[i_arr++] = ft_substr(s, i, i_word);
				i += (i_word - 1);
				break ;
			}
		}
		i++;
	}
	set_words[i_arr] = ((void *)0);
	return (set_words);
}
