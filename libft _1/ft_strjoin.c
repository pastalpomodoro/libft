/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:18:51 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/11 16:34:21 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	f;
	char	*tab;

	size = ft_strlen(s1) + ft_strlen(s2);
	i = -1;
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	while (i++, s1[i])
		tab[i] = s1[i];
	f = -1;
	i--;
	while (f++, i++, s2[f])
		tab[i] = s2[f];
	tab[i] = '\0';
	return (tab);
}
