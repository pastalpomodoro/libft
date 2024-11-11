/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:26:18 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/11 15:08:57 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size_d)
{
	size_t	size_s;
	size_t	dest_len;
	size_t	i;

	i = 0;
	size_s = 0;
	dest_len = 0;
	while (dest_len < size_d && dest[dest_len])
		dest_len++;
	while (src[size_s])
		size_s++;
	if (dest_len == size_d)
		return (dest_len + size_s);
	while (src[i] && (dest_len + i) < (size_d - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + size_s);
}
