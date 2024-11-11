/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:20:14 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/08 12:20:20 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *tofind, size_t n)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (tofind[0] == '\0')
		return ((char *)src);
	while (src[i] && i < n)
	{
		f = 0;
		while (src[i + f] == tofind[f] && tofind[f] && (i + f) < n)
			f++;
		if (tofind[f] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}
