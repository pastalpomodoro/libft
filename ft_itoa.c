/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:40:23 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/08 21:46:46 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
char	*ft_itoa(int n)
{
	size_t	size;
	int	num;
	char	*tab;

	size = -1;
	num = n;
	if (n < 0)
		size = 0;
	while (size++, num != 0)
		num = num / 10;
	if (n == 0)
		size = 1;
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	tab[size] = '\0';
	if (n < 0)
		tab[0] = '-';
	while (size-- > 0)
	{
		if (tab[size] != '-')
			tab[size] = (n % 10) + '0';
		n = n / 10;
	}
	return (tab);
}
