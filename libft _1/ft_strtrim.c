/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:37:41 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/11 16:40:21 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	size_t	j;
	char	*tab;

	f = 0;
	i = 0;
	j = -1;
	while (ft_strchr(set, s1[i]) != NULL && s1[i])
		i++;
	f = ft_strlen(s1);
	while (ft_strrchr(set, s1[f - 1]) != NULL && f > i)
		f--;
	tab = malloc(sizeof(char) * (f - i + 1));
	if (!tab)
		return (NULL);
	while (++j < (f - i))
		tab[j] = s1[i + j];
	tab[j] = '\0';
	return (tab);
}
