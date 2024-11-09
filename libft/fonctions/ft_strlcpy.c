/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:28:29 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/08 12:28:31 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size_d)
{
	size_t	i;
	size_t	size_s;

	size_s = 0;
	while (src[size_s])
		size_s++;
	i = 0;
	while (i < size_d)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_s);
}
