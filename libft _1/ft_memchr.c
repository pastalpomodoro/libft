/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:27:12 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/08 12:27:35 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*p;
	unsigned char		v;
	size_t				i;

	i = 0;
	p = (const unsigned char *) ptr;
	v = (unsigned char) value;
	while (i < num)
	{
		if (p[i] == v)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
