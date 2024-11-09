/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:19:40 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/08 12:32:13 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*tab;
	size_t	full_size;

	full_size = num * size;
	if (full_size / num != size)
		return (NULL);
	tab = malloc(full_size);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, full_size);
	return (tab);
}
