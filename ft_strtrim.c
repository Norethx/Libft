/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:49:26 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/07/17 19:30:50 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chrdup(const char *str, char c, int begin, int end)
{
	int	count_c;

	count_c = 0;
	while (begin < end)
		if (str[begin++] == c)
		count_c++;
	return (count_c == 1);
}

unsigned int	ft_chrinstr(const char *set, const char *str, int srt, int end)
{
	unsigned int	i_set;
	unsigned int	i_src;
	int				flag;

	i_src = srt;
	flag = 0;
	i_set = 0;
	while (i_src < (unsigned int)end)
	{
		while (set[i_set] != 0)
		{
			if (str[i_src] == set[i_set]
				&& ft_chrdup(str, set[i_set], srt, end))
			flag++;
		i_set++;
		}
		i_set = 0;
		i_src++;
	}
	return (flag);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len_s1;
	unsigned int	len_set;
	unsigned int	nsrt;
	unsigned int	nend;
	char			*dup;

	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	nsrt = (ft_chrinstr(set, s1, 0, len_set) == len_set);
	nend = (ft_chrinstr(set, s1, (len_s1 - len_set), len_s1) == len_set);
	dup = ft_substr(s1, len_set * nsrt, len_s1 - ((nsrt + nend) * len_set));
	return (dup);
}
