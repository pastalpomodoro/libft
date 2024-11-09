/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:21:19 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/09 16:08:15 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**count_word(char const *s, char c)
{
	size_t	i;
	size_t	count_w;
	char	**tab;

	count_w = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count_w++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count_w++;
		i++;
	}
	tab = malloc(sizeof(char *) * (count_w + 1));
	return (tab);
}

char	**ft_free(char **tab, size_t i)
{
	while (i > 0)
		free(tab[i--]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	start;
	size_t	count_w;

	tab = count_word(s, c);
	i = 0;
	count_w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			tab[count_w] = ft_substr(s, start, i - start);
		if (!tab[count_w++] && start < i)
			return (ft_free(tab, count_w - 1));
	}
	tab[count_w] = NULL;
	return (tab);
}
